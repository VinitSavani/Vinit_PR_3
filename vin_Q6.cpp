#include<iostream>
using namespace std;

class A
{
	public:
		int id;
		string name;
		string role;
		double salary;
		int experience;
		string comp_name;
		string address;
		string email;
		string contact;
		
		void set1()
		{
			cout << endl << "Enter Id :- " ;
			cin >> id;
			cout << "Enter Name :- " ;
			cin >> name;
			cout << "Enter Role :- " ;
			cin >> role;
		}
};

class B : public A
{
	public:
		void set2()
		{
			cout << "Enter Salary :- " ;
			cin >> salary;
			cout << "Enter Experience :- " ;
			cin >> experience;
		}
};

class C : public B
{
	public:
		void set3()
		{
			cout << "Enter Company's name :- " ;
			cin >> comp_name;
			cout << "Enter Address :- " ;
			cin >> address;
		}
};

class D : public C
{
	public:
		void set4()
		{
			cout << "Enter Email :- " ;
			cin >> email;
			cout << "Enter Contact :- " ;
			cin >> contact;
		}
		
		void get()
		{
			cout << endl << "ID :- " << id << endl ;
			cout << "Name :- " << name << endl ;
			cout << "Role :- " << role << endl ;
			cout << "Salary :- " << salary << endl ;
			cout << "Experience :- " << experience << endl ;
			cout << "Company's name :- " << comp_name << endl ;
			cout << "Address :- " << address << endl ;
			cout << "Email :- " << email << endl ;
			cout << "Contact :- " << contact << endl ;
		}
};

int main()
{
	
	D obj;
	
	obj.set1();
	obj.set2();
	obj.set3();
	obj.set4();
	
	cout << endl << "Employee's information....." << endl ;
	
	obj.get();
	
	return 0;
}