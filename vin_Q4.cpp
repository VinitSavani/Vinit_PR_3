#include<iostream>
using namespace std;

class personInfo
{
	public:
		string name;
		int age;
		
		void set1()
		{
			cout << endl << "Enter person's name :- " ;
			cin >> name ;
			cout << "Enter person's age :- " ;
			cin >> age ;
		}
		
		void get1()
		{
			cout << endl << "Name :- " << name << endl ;
			cout << "Age :- " << age << endl ;
		}
};

class employeeInfo : public personInfo
{
	public:
		int id;
		string role;
		double salary;
		
		void set2()
		{
			cout << "Enter employee's ID :- " ;
			cin >> id ;
			cout << "Enter employee's Role :- " ;
			cin >> role ;
			cout << "Enter employee's Salary :- " ;
			cin >> salary ;
		}
		
		void get2()
		{
			cout << "ID :- " << id << endl ;
			cout << "Role :- " << role << endl ;
			cout << "Salary :- " << salary << endl ;
		}
};

class employer : public employeeInfo
{
	public:
		
		void readInfo()
		{
			set1();
			set2();
		}
		
		void printInfo()
		{
			get1();
			get2();
		}
};

int main()
{
	employer obj;
	
	obj.readInfo();
	
	cout << endl << "Print employee Info..." << endl ;
	
	obj.printInfo();
	
	return 0;
}