#include<iostream>
using namespace std;
int count=0;
class test
{	public:
		test()
		{
				
		
			count++;
			cout<<"\n created "<<count;
		}

		~test()
		{
			//count--;
			cout<<"\n Destroyed "<<count;
			count--;
		}
};
int main()
{
	cout<<"\n Inside the main block ";
	cout<<"\n\n Creating first object t1.. ";
	test t1;//constructor of t1 is called 
	{
			cout<<"\n Inside the block 1..";
			cout<<"\n\n Creating two more objects t2 and t3 ..";
			test t2,t3;// constructor of t2 after that constructor of t3 is called 
			cout<<"\n\n Leaving block 1..";
	}//first object t3 is destroyed then object t2.
	cout<<"\n\n  Back Inside the main block..";
	return 0;
}//object t1 is destroyed



