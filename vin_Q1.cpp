#include<iostream>
using namespace std;

class shape
{
	public:
		float width;
		float height;
		float area;
		
		set( float width , float height )
		{
			this->width=width; 
			this->height=height;
			this->area=area;	
		}
};

class triangle : public shape
{
	public:
		area1()
		{
			area = ( width * height ) / 2;
			cout << endl << "Area of triangle is :- " << area ;
		}
};

class rectangle : public shape
{
	public:
		area2()
		{
			area = ( width * height ) ;
			cout << endl << "Area of rectangle is :- " << area ;
		}
};

int main()
{
	float width;
	float height;
	float area;
	
		cout << "Enter Width :- " ;
		cin >> width ;
		cout << "Enter Height :- " ;
		cin >> height;
			
	triangle objA ;
	rectangle objB ;
	
	objA.set(width,height);
	objA.area1();
	
	objB.set(width,height);
	objB.area2();
	
	return 0;
}
