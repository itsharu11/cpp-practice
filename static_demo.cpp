#include<iostream>
using namespace std;
class static_demo
{
	private :
		static int count;
		int a,b;
	public :
		void counter();
		void display();
		static show_count()
		{
			cout<<"\n "<<count;
		}
		
};
void static_demo::counter()
{
	
	++count;
}

void static_demo::display()
{
	cout<<"\n"<<count;
}

int static_demo::count;

int main()
{
		
		static_demo o1,o2;
		o1.counter();
		//o1.display();
		o1.show_count();
		
		o2.counter();
		
		//o2.display();
		static_demo::show_count();    // Static member function can be called using the class name with scope resolution operator(::).
		return 0;
}

