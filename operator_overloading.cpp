#include<iostream>
using namespace std;
class complex
{
	private:
		float x,y;
		
	public:
		complex(){}
		complex(float real,float imag)
		{
			x=real;
			y=imag;
		}
		void display();	
		complex operator+(complex);
		
};
complex complex::operator+(complex c)
{
	complex temp;
	temp.x = x + c.x;
	temp.y = y + c.y;
	
	return temp;
	
}

void complex::display()
{
	cout<<x<<" + i "<<y;
	
}
int main()
{
	complex c1,c2,c3;
	c1=complex(2.5,3.5);
	c2=complex(1.8,3.1);
	c3=c1+c2;// c3 = c1.operator+(c2);cx
	
	cout<<"\nc1 = : ";
	c1.display();
	cout<<"\nc2 = : ";
	c2.display();
	
	cout<<"\n------------------------";
	cout<<"\nc3 = : ";
	c3.display();	
}

