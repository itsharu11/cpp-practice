#include<iostream>
using namespace std;
class static_data
{
	private:
		static int x;
	public:
		static void put()
		{
				cout<<"\n The value of x : "<<x;
		}
		static void get(int)
		{
				cout<<"\n Enter the value of X : ";
				cin>>x;
		}
};
int static_data::x;

int main()
{
	static_data a,b,c;
	a.put();
	b.put();
	c.put();
	
	a.get();
	b.get();
	c.get();
	
	cout<<"After reading data : ";
	
	a.put();
	b.put();
	c.put();
	
	return 0;		
}
