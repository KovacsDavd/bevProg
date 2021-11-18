#include "my.h"
#include <iostream>

void swap_v(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	print(a);
	print(b);
}

void swap_r(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	print(a);
	print(b);
}

void swap_cr(const int& a, const int& b)
{
	int temp;
	temp = a;
	//a = b;
	//b = temp; //read-only, const does not to allow change the values.
	print(a);
	print(b);
}

namespace X 
{
	using namespace std;
	int var;
	void print()
	{
		cout << var << endl;
	}
}

namespace Y 
{
	using namespace std;
	int var;
	void print()
	{
		cout << var << endl;
	}
}

namespace Z 
{
	using namespace std;
	int var;
	void print()
	{
		cout << var << endl;
	}
}

int foo;
int main()
{

	X::var = 7;
	X::print();
	using namespace Y;
	var = 9;
	print();
	{
		using Z::var;
		using Z::print;
		var = 11;
		print();
	}
	print();
	X::print();


//	int x = 7;
//	int y = 9;

//	swap_v(x,y);
//	swap_r(x,y);
//	swap_cr(x,y); not working, const

//	swap_v(7,9);
//	swap_r(7,9); not working 
//	swap_cr(7,9); not working, const

//	const int cx = 7;
//	const int cy = 9;
//	swap_v(cx,cy); not working, const
//	swap_r(cx,cy); not working, const
//	swap_cr(cx,cy); not working, const

//	int dx=7.7;
//	int dy=9.9;
//	swap_v(dx,dy);
//	swap_r(dx,dy);
//	swap_cr(dx,dy); not working, const
	
	
	return 0;
}