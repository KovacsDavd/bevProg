#include "../std_lib_facilities.h"

struct Date {
	int y ,m, d;
	Date(int yy, int mm, int dd);
	void add_day(int n);
};

Date::Date(int yy, int mm, int dd)
{
	if(yy>0)
		y = yy;
	else
		error("Invalid year");
	if(mm>0 || mm<=12)
		m = mm;
	else
		error("Invalid month");
	if(dd>0 || dd<=31)
		d = dd;
	else
		error("Invalid day");
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

	Date today{2021, 11, 17};
	Date tomorrow(today);
	tomorrow.add_day(1);

	cout << "Today: " << today.y << "." << today.m << "." << today.d << "." << endl;
	cout << "Tomorrow: " << tomorrow.y << "." << tomorrow.m << "." << tomorrow.d << "." << endl; 

	return 0;
	}

	catch (exception& e)
	{
		cerr << e.what() << endl;
		return 1;
	}
}