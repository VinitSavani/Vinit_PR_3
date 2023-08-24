#include<iostream>
using namespace std;

class animal
{
	public:
		string name;
		int age;
		
		void set()
		{
			cout << endl << "Enter animal's name :- " ;
			cin >> name;
			cout << "Enter animal's age :- " ;
			cin >> age;	
		}
};

class zebra : public animal
{
	public:
		void get1()
		{
			cout << endl << "Name of Zebra :- " << name << endl ;
			cout << "Age of Zebra :- " << age << endl ;
			cout << "Zebra's origine place :- Africa " << endl ;
		}
	
};

class dolphin : public animal
{
	public:
		void get2()
		{
			cout << endl << "Name of Dolphin :- " << name << endl ;
			cout << "Age of Dolphin :- " << age << endl ;
			cout << "Dolphin's origine place :- Oceans " << endl ;
		}
};

int main()
{
	string name;
	int age;
		
	
	
	zebra obj1;
	dolphin obj2;
	
	obj1.set();
	obj1.get1();
	
	obj2.set();
	obj2.get2();
	
	return 0;
}