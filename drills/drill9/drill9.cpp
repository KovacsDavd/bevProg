#include "../std_lib_facilities.h"

struct Date {
	int y;
	int m;
	int d;
};

void init_day(Date& dd, int y, int m, int d)
{
	if(y>0)
		dd.y = y;
	else
		error("Invalid year");
	if(m>0 || m<=12)
		dd.m = m;
	else
		error("Invalid month");
	if(d>0 || d<=31)
		dd.d = d;
	else
		error("Invalid day");
}

void add_day(Date& dd, int m)
{
	dd.d +=m;
	do{
		if (dd.d>31)
		{
			dd.m+=1;
			dd.d-=31;
		}

		if(dd.m>12)
		{
			dd.y++;
			dd.m-=12;
		}
	} while(dd.d > 31);
}

int main()
{
	try{

	Date today;
	today.y = 2005;
	today.m = 12;
	today.d = 24;
	add_day(today, 390);
	cout << today.y << "." << today.m << "." << today.d << ".\n"; 

	return 0;
	}

	catch (exception& e)
	{
		cerr << e.what() << endl;
		return 1;
	}
}