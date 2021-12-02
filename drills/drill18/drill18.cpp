#include "../std_lib_facilities.h"

int ga[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

/*int factorial(int n) {
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
*/
void f(int* array, int n){
	int la[10];

	for (int i = 0; i < 10; ++i)
		la[i]=ga[i];
	cout << "la: ";
	for(int i = 0; i < 10; ++i)
		cout << la[i] << " ";
	cout << endl;

	int* p = new int[n];
	for (int i = 0; i < 10; ++i)
		p[i] = array[i];
	cout << "p: ";
	for (int i = 0; i < 10; ++i)
		cout << p[i] << " ";
	cout << endl << endl;

	delete[] p;
}

int main()
{
	f(ga, 10);
	int aa[10] = {1, 2*1, 3*2*1, 4*3*2*1, 5*4*3*2*1, 6*5*4*3*2*1, 7*6*5*4*3*2*1, 8*7*6*5*4*3*2*1, 9*8*7*6*5*4*3*2*1, 10*9*8*7*6*5*4*3*2*1};

	/*for (int i = 1; i<=10; i++) {
        aa[i] = factorial(i);
    }*/
	f(aa, 10);

	return 0;
}