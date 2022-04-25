#include<iostream>
using namespace std;
class a
{
		int a_n1;
		public:
			int getan1();
};
class b
{
		int b_n1;
		public:
			int getbn1();		
};
class c : public a, public b
{
	public:
	void display();
};
int a::getan1()
{
	cout<<"\n Enter the value of class a : ";
	cin>>a_n1;
	return a_n1;
}
int b::getbn1()
{
	cout<<"\n Enter the value of class b : ";
	cin>>b_n1; 
	return b_n1;
}
void c::display()
{
	int x,y;
	x=getan1();
	y=getbn1();
	cout<<"\n The value entered in class a is : "<<x;
	cout<<"\n The value entered in class b is : "<<y;
	
}
int main()
{
		c c1;
		c1.display();
		return 0;
}
