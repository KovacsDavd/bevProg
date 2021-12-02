#include "../std_lib_facilities.h"

void print_array(ostream& os, int* a, int n)
{
	cout << n<< " elements array: ";
	for (int i = 0; i < n; ++i)
	{
		os << a[i] << " ";
	}
	cout << endl;
}

int main()
{
try{
	int* p1 = new int(7);
	cout << p1 << " " << *p1 << endl;
	int* p2 = new int[7] {1, 2, 4, 8, 16, 32, 64};
	for (int i = 0; i < 7; ++i)
	{
		cout << p2[i] << " ";
	}

	int* p3 = p2;
	p2 = p1;
	p2 = p3;

	cout << p1 << ' ' << *p1 << ' ' << p2 << ' ' << *p2 << endl;
	delete p1;
	delete[] p2;
	delete p3;

	p1 = new int[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	p2 = new int[10];

	for (int i = 0; i < 10; ++i)
	{
		p2[i] = p1[i];
	}

	vector<int> v1 = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	vector<int> v2 = v1;

	for (int i = 0; i < v1.size(); ++i)
	{
		cout << v2 << " ";
	}

	return 0;
	}

	catch(exception& e){
		cerr << "exception: " << e.what() << endl;
	}

	catch(...){
		cerr << "Something went wrong";
	}
}