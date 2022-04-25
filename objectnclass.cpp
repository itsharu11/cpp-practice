/*
	class: in cpp, class is a user defined datatype.
		   it is just like datastructure in c.
		   it contains data and member functions.
		   in class, there are two segment private and publice.
		   by default there is private access modifiers.
		   
		   function declared in class must be defined outside the class.
		   
		   function definition outside the class as follows:
		   		   	return_type class_name::function_name(arguments)
		   			{}
		   
	Object:object is the variable of the class datatype.
			obj bind the data and member functions.
			any data or function is called by class object only
			we can create  number of object of the same class.
			but all the object refer the different value of the data.
			Syntax to create the object
				1) class_name object;
			
			functions of class call in same class by its name only(without object)
			outside of the class requires object to call function
			
		   
*/

#include<iostream>
using namespace std;
class number
{
		private:
			int a,b;
		
		public:
			//function declaration
			void getdata();  //read data from user
			
			void putdata(); //print data on screen
			void init();
			void add();
			
};
void number::getdata()
{
		cout<<"Enter two numbers  : ";
	
		cin>>a;
		cin>>b;
		
}
void number::putdata()
{
	cout<<"\na= "<<a<<"\t b= "<<b;
	
}
void number::init()
{
	a=10;
	b=34;
}
void number::add()
{
		cout<<"\n The addition is : "<<a+b;
}
int main()
{
	number x,x1;//creating object of class 
	x.getdata();//calling function using object
	x.putdata();
	
//	x1.init();
	x1.putdata();
	x.add();
		return 0;
		
}
