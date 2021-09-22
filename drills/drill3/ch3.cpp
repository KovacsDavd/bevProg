#include "../std_lib_facilities.h"
int main()
{
	//1
	cout << "Please enter your fist name: ";
	string first_name;
	cin >> first_name;
	cout << "Hello, " << first_name;

	//1b
	cout << "\nEnter the name of the person you want to write to: ";
	string person_name;
	cin >> person_name;

	//3
	cout << "Enter the name of another friends: ";
	string friend_name;
	cin >> friend_name;

	//4
	char friend_sex=0;
	cout << "Please enter the sex of this friend (m = male, f = female): ";
	cin >> friend_sex;

	while (friend_sex!='f' && friend_sex!='m')
	{
		cout << "Please enter 'm' if male, enter 'f' if female\n";
		cin >> friend_sex;
	}
	
	//5
	cout << "Please enter age of " << person_name<<": ";
	int age;
	cin >> age;

	if (age<=0 || age>=110)
		simple_error("you're kidding!");
	else {cout<<"I hear you just had a birthday and you are " <<age<< " age years old.\n";}
	
	//7 (letter)
	cout << "\nDear "+person_name+","
		 << "\nHow are you?\n"
		 <<"I miss you. We met a long time ago.\n"
		 <<"When will we meet next time?\n"
		 << "Have you seen "+friend_name+" lately?\n";

	if (friend_sex=='m')
		cout << "If you see "+friend_name+" please ask him to call me\n";
	
	else if (friend_sex=='f')
		cout << "If you see "+friend_name+" please ask her to call me\n";

	else {cout << "Please enter 'm' if male, enter 'f' if female";}

		//6
	if (age<12)
		cout << "Next year you will be " <<age+1<<".";
	else if (age==17)
		cout << "Next year you will be able to vote.";
	else if (age>70)
		cout << "I hope you are enjoying retirement.";

	cout << "Yours sincerely, \n\n"<<first_name<<"\n";
	return 0;
}