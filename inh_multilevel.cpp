/*
	it means it is multilevel inheritence
	class b:public a. 
	class c:public class b. 
	  
	class a
	  |
	  |
	  V
	class b
	  |
	  | 
	  V
	class c
	  	
	The object of class c can call all the public members of the parent class a and b.
	
*/

#include<iostream>
using namespace std;
class grand
{
		//int a;
		public:
			int a;
			
			int geta();
};

//class child : private base --> Object of child class cannot use the public method of base class (outside the class) since base class inherited privately. 
class parent : public grand // derived child class inherits the base class 
{
	int c;
	public:
		int b;
		int getb();
		void mul();
};
class child : public parent
{
	int d;
	public:
		int getd();
		void add();
		
};
int grand::geta()
{
	cout<<"\n Enter value a of base class : ";
	cin>>a;
	return a;
}
int parent::getb()
{
	cout<<"\n Enter value b of child class : ";
	cin>>b;
	return b;
}
void parent::mul()
{
	int a,b;
	a=geta();
	b=getb();
	
	c=a*b;
	cout<<"\n Multiplication is : "<<c;
	
}
int child::getd()
{
	cout<<"\n Enter the value of d : ";
	cin>>d;
	return d;
}
void child::add()
{
	int l,m,n,o;
	l=geta(); // Method of grand class
	m=getb(); // Method of parent class 
	n=getd(); // Method of child class 
	o=a+b+n;
	cout<<"\n Addition is : "<<o;
	
}

int main()
{
	child c;
//	c.mul();  // Method of parent class
	c.add();  
	// Child class call the method of parent class.
//	cout<<"\n Value of a : "<<c.geta(); 
	return 0;
}
