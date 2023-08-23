#include<iostream>
using namespace std;

class mother
{
	public:
		void disp1()
		{
			cout << "Hello I'm Mother......" ;
		}
};

class daughter : public mother
{
	public:
		void disp2()
		{
			cout << "Hello I'm Daughter......" ;
		}
};

int main()
{
	
	daughter obj;
	
	obj.disp1();
	obj.disp2();
	
	return 0;
}
