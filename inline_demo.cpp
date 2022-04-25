/*
		Inline function :- To eliminate the cost of calls to small functions c++ proposes a new feature called inline function 
		An inline function is a function that is expanded in a line when it is invoked.
		
		Private access modifier 
		private data member or member function cannot be called outside the class.
		it means it is used in class only.
		In c++ default access modifier is private.
		To use private data member outside the class we have to use in public method 
		
*/

#include<iostream>
using namespace std;
class inline_demo
{
	private :
		int a,b,c;
		void multiply();
		
	public :	
			int m;// public variable 
			void getdata();
			void display();
		inline	int sum()
		{
    			return (a+b);
		//	return (i);
		}	
	
	
};

void inline_demo::getdata()
{
	cout<<"\n Enter two elements : ";
	cin>>a>>b;
}
void inline_demo::multiply()
{
	//	int c;
		c=a*b;
		cout<<"\n multiplication ="<<c;	
}
void inline_demo::display()
{
	multiply();
}

int main()
{
	inline_demo o1;
	int i;
	o1.getdata();
	i=o1.sum();
	o1.m=o1.sum();//public variable name is used outside the class
	cout<<"\n\n\n sum ="<<o1.m<<"\n\n";
//	o1.multiply(); Private function cannot be called outside the class 
	o1.display();
	cout<<"\n addition = "<<i;
	return 0;
}
