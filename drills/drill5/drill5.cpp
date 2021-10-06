#include "../std_lib_facilities.h"

int main()
{
	try
	{
		/*//1
			cout << "Succes!\n";
		//2
			cout << "Succes!\n";
		//3
			cout << "Succes!" << endl;
		//4
			cout << "Succes!" << endl;
		//5
			int res=7;
			vector<int> v(10);
			v[5]=res;
			cout << "Succes!\n";
		//6
			vector<int> v(10);
			v[5]=7;
			if (v[5]==7)
				cout << "Succes!\n";
		//7
			int cond=0;
			if (cond==0)
				cout << "Succes!\n";
			else
				cout << "Fail!\n";
			
		//8
			bool c=true;
			if (c)
				cout << "Succes!\n";
			else
				cout << "Fail!\n";
		//9
			string s="ape";
			string c="fool";
			if (c>s)
				cout << "Succes!\n";
		//10
			string s="ape";
			if (s!="fool")
				cout << "Succes!\n";
		//11
			string s="ape";
			if (s!="fool")
				cout << "Succes!\n";
		//12
			string s = "ape";
			s += "fool";
			if (s=="apefool")
				cout << "Success!\n";
		//13
			vector<char> v(5);
			for (int i=0; i<v.size(); ++i)
				cout << "Succes!\n";
		//14
			vector<char> v(5);
			for (int i=0; i<=v.size(); ++i);
			cout << "Success!\n";
		//15
			string s = "Success!\n"; 
			for (int i=0; i<=8; ++i) 
			cout << s[i];
		//16
			if (true) 
			cout << "Success!\n";
			else cout << "Fail!\n";
		//17
			int x = 2000;
			char c = x;
			if (c!=2000) cout << "Success!\n";
		//18
			string s = "Success!\n";
			for (int i=0; i<=8; ++i) cout << s[i];
		//19
			vector<int> v(5); 
			for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
		//20
			int i=0; 
			int j = 9; 
			while (i<10) i++;
			{
	 			if (j<i) cout << "Success!\n";
			}
		//21
			int x = 2;
			double d = (5.0/x+2);
			if (d==2*x+0.5)
				cout << "Success!\n";
		//22
			string s = "Success!\n";
			for (int i=0; i<=8; ++i)
				cout << s[i];
		//23
			int i=0;
			int j=9;
			while (j<10) ++j;
			{
				if (j>i)
					cout << "Success!\n";
			}
		//24
			int x = 4; 
			double d = 5.0/(x-2)+0.5; 
			if (d=2*x+0.5) cout << "Success!\n";
		//25
			cout << "Success!\n";*/

		return 0;
	}

	catch (exception& e)
	{
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...)
	{
		cerr << "Oops: unknow exception!\n";
		return 2;
	}
}