/* 
	- Constructor is a special member function which enbales an object to initialize itself when it is created.
	- That means automatic initialization of objects.
	- it is used to initialize variables.
	- Name of constructor and name of class must be same.
	- More than one constructor of a class is called constructor overloading(polymorphism).
	- Constructor should be declared must be declared in public section.
	- Constructor does not return any value not even void.
	- It is invoked automatically when the objects are created.
	- Constructor cannot be inherited.
	- Constructor have default values.
	- We cannot refer to their addresses.
	- They make implicit calls to the opertors NEW.
*/
#include<iostream>
using namespace std;
class student
{
		private:
			char name[20];
			int age;
			int no;
		public:
			student(); // DEFAULT CONSTRUCTOR 
		//	student(int,int); // Constructor
			void getdata(); 			
			void display();
};
student::student()
{
	/*
	cout<<"\n Default constructor is called \n'\n";
		cout<<"\n Enter name : ";
		cin>>name;
		cout<<"\n Enter age : ";
		cin>>age;
		cout<<"\n Enter no : ";
		cin>>no;
	*/		
	student s1;
	s1.getdata();
	s1.display();
	
}

void student::getdata()
{
	cout<<"\n Default constructor is called \n'\n";
		cout<<"\n Enter name : ";
		cin>>name;
		cout<<"\n Enter age : ";
		cin>>age;
		cout<<"\n Enter no : ";
		cin>>no;
}
/*
student::student(int a,int n)
{
	cout<<"\n paramaetrized constructor is called \n'\n";
//	name=nm;
		cout<<"\n Enter name : ";
		cin>>name;
	age=a;
	no=n;
	
//	cout<<"Name : "<<name<<"age :"<<age<<"no :"<<no;
	
}
*/
void student::display()
{
	cout<<"Name : "<<name<<"\t age :"<<age<<"\t no :"<<no;		
}
int main()
{
		student s1;// When object s1 is created then default constructor student is automatically invoked.
	//	student s2(20,23);
	/*
		cout<<"\n\n\n";
		s1.display();
		cout<<"\n\n\n";
		s2.display();
		student s3= student();
		s3.display();
	*/	
}
