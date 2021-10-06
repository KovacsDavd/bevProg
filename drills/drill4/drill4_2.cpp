#include "../std_lib_facilities.h"
int main()
{
	double n;
	char unit=' ';
	char meter=0;
	double max=numeric_limits<double>::lowest();
	double min=numeric_limits<double>::max();
	double sum=0;
	constexpr double m_per_cm=100;
	constexpr double in_per_cm=2.54;
	constexpr double ft_per_in=12;

	vector<double> v;

	while (unit!='|')
	{
		unit = ' ';
		cout << "Please add a number (m, cm=c, inch=i, ft=f): ";
		cin >> n >> meter;
		cout << "\nCurrent number: " << n <<" " << meter << endl;

		switch(meter){
			case 'm':
				cout << "Number in m: "<<n<<"m" << endl;
				break;

			case 'c':
				n/=m_per_cm;
				cout << "Number in m: "<<n<<"m" << endl;
				break;

			case 'i':
				n*=in_per_cm;
				n/=m_per_cm;
				cout << "Number in m: "<<n<<"m" << endl;
				break;

			case 'f':
				n*=ft_per_in;
				n*=in_per_cm;
				n/=m_per_cm;
				cout << "Number in m: "<<n<<"m" << endl;
				break;
			default:
				cout << "Error, not valid char";
				break;
		}

		sum+=n;
		v.push_back(n);
		cout << endl;
		while (unit!='y' && unit!='|')
		{
			cout << "Do you want to continue? (yes = y, No = |)\n";
			cin >> unit;
			cout << endl;
		}
	}
	sort(v);

	cout << "All values in m: \n";

	min=v[0];
	max=v[v.size()-1];
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}
	cout << endl;
	cout << "the smallest so far(in m): " << min <<endl;
	cout << "the largest so far(in m): " << max <<endl;
	cout << "Values sum: " << sum << endl;

	return 0;
}