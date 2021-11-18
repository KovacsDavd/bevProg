#include "../std_lib_facilities.h"

enum class Month{
	jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

Month operator++(Month& m)
{
	m = (m==Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}

ostream& operator<<(ostream& os, Month m)
{
	return os << int(m);
}

class Year{
	static const int min = 1800;
	static const int max = 2200;

public:
	class Invalid{};
	Year(int x): y(x) {if(x<min || max<=x) throw Invalid{};}
	int year() {return y;}
	void increment() {y++;}

private:
	int y;
};

class Date {
private:
	Year y;
	Month m;
	int d;
	bool is_valid();

public:
	class Invalid {};
	Date(Year yy, Month mm, int dd): y(yy), m(mm), d(dd) {if(!is_valid()) throw Invalid{};}
	void add_day(int n);

	Year year() {return y;}
	Month month() {return m;}
	int day() {return d;}
};

/* not working, BUT WHYY????
Date::Date(Year yy, Month mm, int dd)
{
	y = yy;
	m = mm;
	d = dd;
	if(!is_valid()) throw Invalid{};
}*/


ostream& operator<<(ostream& os, Year m)
{
	return os << m.year();
}

Year operator++(Year& m)
{
	m.increment();
	return m;
}

bool Date::is_valid()
{
	if (m < Month::jan || m > Month::dec || d < 1 || d > 31) return false;

	return true;
}

void Date::add_day(int n)
{
	d+=n;
	do{
		if (d>31)
		{
			++m;
			d-=31;
		}

		if(m == Month::jan)
		{
			++y;
		}
	} while(d > 31);
}



int main()
{
	try{

	Date today{Year{2021},Month::feb, 17};
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

	catch (Year::Invalid)
	{
		cerr << "Invalid date" << endl;
		return 3;
	}
}