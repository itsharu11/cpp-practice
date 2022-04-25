#include<iostream>
using namespace std;

class a
{
	//	int n1,n2;
		public:
			int mul();
			int add();
};
int a::add()
{
		int x,y,z;
		cout<<"\n Enter two numbers of class 'a' to add : ";
		cin>>x>>y;
		z=x+y;
		return z; 
}
int a::mul()
{
	int x,y,z;
	cout<<"\n Enter two numbers of class 'a' to multiply : ";
	cin>>x>>y;
	z=x*y;
	return z;
}

class b : public a
{
//	int a1;
	public:
		void display();
};

void b::display()
{
		int x;
		x=add();
		cout<<"\n The addition is : "<<x;
}

class c : public a
{
//	int a2;
	public:
		void show();
};

void c::show()
{
		int x;
		x=mul();
		cout<<"\n The Multiplication is : "<<x;
}

int main()
{
		b ob_b;
		c ob_c;
		ob_b.display();
		ob_c.show();
		return 0;
}
