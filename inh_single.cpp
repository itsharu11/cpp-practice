/*
	class c:public d. it means it is single inheritence.
	class d
	  |
	  |
	  v
	class c
	
	The object of class c can call all the public members of the parent class d.
*/

#include<iostream>
using namespace std;
class base
{
		//int a;
		public:
			int a;
			
			int geta();
};

//class child : private base --> Object of child class cannot use the public method of base class (outside the class) since base class inherited privately. 
class child : public base // derived child class inherits the base class 
{
	int c;
	public:
		int b;
		int getb();
		void mul();
};
int base::geta()
{
	cout<<"\n Enter value a of base class : ";
	cin>>a;
	return a;
}
int child::getb()
{
	cout<<"\n Enter value b of child class : ";
	cin>>b;
	return b;
}
void child::mul()
{
	int a,b;
	a=geta();
	b=getb();
	
	c=a*b;
	cout<<"\n Multiplication is : "<<c;
	
	
}


int main()
{
	child c;
	c.mul();
	// Child class call the method of parent class.
	cout<<"\n Value of a : "<<c.geta(); 
	return 0;
}
