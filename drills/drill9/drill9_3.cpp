#include "../std_lib_facilities.h"

class Date {
private:
	int y ,m, d;
	bool is_valid();

public:
	class Invalid {};
	Date(int yy, int mm, int dd);
	void add_day(int n);

	int year() {return y;}
	int month() {return m;}
	int day() {return d;}
};

bool Date::is_valid()
{
	if (m < 1 || m > 12 || d < 1 || d > 31 || y < 1) return false;

	return true;
}

Date::Date(int yy, int mm, int dd)
{
	y = yy;
	m = mm;
	d = dd;
	if(!is_valid()) throw Invalid{};
}

void Date::add_day(int m)
{
	d+=m;
	do{
		if (d>31)
		{
			m+=1;
			d-=31;
		}

		if(m>12)
		{
			y++;
			m-=12;
		}
	} while(d > 31);
}



int main()
{
	try{

	Date today{2021, 12, 17};
	Date tomorrow(today);
	tomorrow.add_day(1);

	cout << "Today: " << today.year() << "." << today.month() << "." << today.day() << endl;
	cout << "tomorrow: " << tomorrow.year() << "." << tomorrow.month() << "." << tomorrow.day() << endl;

	return 0;
	}

	catch (exception& e)
	{
		cerr << e.what() << endl;
		return 1;
	}
	catch (Date::Invalid)
	{
		cerr << "Invalid date" << endl;
		return 2;
	}
}