#include "../std_lib_facilities.h"

void print_array10(ostream& os, int* a)
{
	cout << "10 elements array: ";
	for (int i = 0; i < 10; ++i)
	{
		os << a[i] << " ";
	}
	cout << endl;
}

void print_array(ostream& os, int* a, int n)
{
	cout << n << " elements array: ";
	for (int i = 0; i < n; ++i)
	{
		os << a[i] << " ";
	}
	cout << endl;
}

void print_vector(ostream& os, vector<int> a)
{
	cout << "vector elements: ";
	for (int i = 0; i < a.size(); ++i)
	{
		os << a[i] << " ";
	}
	cout << endl;
}

int main()
{
	try{
	int* array= new int[10];

	for (int i = 0; i < 10; ++i)
		cout << array[i] << endl;
	delete[] array;

	int* a = new int[10];
    for (int i = 0; i < 10; i++)
    	a[i] = 100+i;
	print_array(cout,a, 10);

	int* b = new int[11];
	for (int i = 0; i < 11; ++i)
		b[i]=100+i;
	print_array(cout, b, 11);

	int* c = new int[20] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119};
	print_array(cout, c, 20);

	delete[] a;
	delete[] b;
	delete[] c;

	vector<int> avector;
	for (int i = 100; i < 110; ++i)
		avector.push_back(i);
	print_vector(cout, avector);

	vector<int> bvector;
	for (int i = 100; i < 111; ++i)
		bvector.push_back(i);
	print_vector(cout, bvector);
	
	vector<int> cvector;
	for (int i = 100; i < 120; ++i)
		cvector.push_back(i);
	print_vector(cout, cvector);

	return 0;
	}

	catch(exception& e){
		cerr << "exception: " << e.what() << endl;
	}

	catch(...){
		cerr << "Something went wrong";
	}
}