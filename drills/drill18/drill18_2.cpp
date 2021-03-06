#include "../std_lib_facilities.h"

vector<int>gv = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(vector<int> v){
	vector<int> lv(v.size());

	for (int i = 0; i < v.size(); ++i)
		lv[i] = gv[i];

	cout << "lv: ";
	for(int i = 0; i < lv.size(); ++i)
		cout << lv[i] << " ";
	cout << endl;

	vector<int> lv2 = v;
	cout << "lv2: ";
	for (int i = 0; i < lv2.size(); ++i)
		cout << lv2[i] << " ";
	cout << endl << endl;
}

int main()
{
	f(gv);
	vector<int> vv= {1, 2*1, 3*2*1, 4*3*2*1, 5*4*3*2*1, 6*5*4*3*2*1, 7*6*5*4*3*2*1, 8*7*6*5*4*3*2*1, 9*8*7*6*5*4*3*2*1, 10*9*8*7*6*5*4*3*2*1};
	f(vv);

	return 0;
}