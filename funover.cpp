#include<iostream>
using namespace std;
class funover
{
	private:
	float r,l,b;
	int len;
	public:
	void getdata(int);
	void area(int);
	void area(float,float);
	void area(float);
};
void funover::getdata(int ch)
{
/*		
	int ch;
		cout<<"\n Enter your choice : ";
		cout<<"\n 1. +Square \n 2. Rectangle \n 3. Circle ";
		cin>>ch;  
		
	*/
		if(ch==1)
		{
				cout<<"\n Enter length : ";
				cin>>len;
				area(len);
		}
				else if(ch==2)
		{
				cout<<"\n Enter length and breadth : ";
				cin>>l>>b;
				area(l,b);
		}
				else if(ch==3)
		{
				cout<<"\n Enter radius : ";
				cin>>r;
				area(r);
		}
}
void funover::area(int len)
{
	cout<<"\n The area of square is : "<<(len*len);
	
}
void funover::area(float,float)
{
	cout<<"\n The area of rectangle is : "<<(l*b);
	
}
void funover::area(float)
{
		cout<<"\n The area of circle : "<<(3.14*r*r);
}

int main()
{
		funover x;
		int ch;
		cout<<"\n Enter your choice : ";
		cout<<"\n 1. Square \n 2. Rectangle \n 3. Circle ";
		cin>>ch;		
		x.getdata(ch);
		
		return 0;
}
