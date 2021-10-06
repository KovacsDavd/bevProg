#include "../std_lib_facilities.h"
int main()
{
	//1
	double n;
	double m;
	char unit=' ';
	double few =1.0/100;
	double diff;
	while (unit!='|')
	{
		unit = ' ';
		cout << "Please add 2 numbers: ";
		cin >> n >> m;
		if (n>m)
		{
			cout << "The smaller value is: " << m << endl;
			cout << "The larger value is: " << n <<endl;
			diff = n-m << endl;
		}
		else if(m>n)
		{
			cout << "The smaller value is: " << n <<endl;
			cout << "The larger value is: " << m <<endl;
			diff = m-n << endl;
		}

		else
		{
			cout << "The numbers are equal" << endl;
		}

		if(diff<few)
		{
			cout << "The numbers are almost equal\n";
		}
		
		
		while (unit!='y' && unit!='|')
		{
			cout << "Do you want to continue? (yes = y, No = |)\n";
			cin >> unit;
		}
	}
	return 0;
}