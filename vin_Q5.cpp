#include<iostream>
using namespace std;

class number
{
	public:
		double num;
		void set(double num)
		{
			this->num = num ;
		}
};

class square : public number
{
	public:
		void get1()
		{
			cout << endl << "Square :- " << num * num << endl ; 
		}
};

class cube : public number
{
	public:
		void get2()
		{
			cout << endl << "Cube :- " << num * num * num << endl ; 
		}
};

int main()
{
	
	double num;
	
	cout << endl << "Enter any number :- " ;
	cin >> num ;
	
	square obj1;
	cube obj2;
	
	obj1.set(num);
	obj1.get1();
	
	obj2.set(num);
	obj2.get2();
	
	return 0;
}