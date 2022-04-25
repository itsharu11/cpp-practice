#include<iostream>
using namespace std;
class fun
{
		private:
			int n,fact;
		public:
			void prime();
			void factors();
			void getdata();	
};

void fun::getdata()
{
	cout<<"\n Enter a number";
	cin>>n;
	
}
void fun::factors()
{
	int i;
	cout<<"\n The factors are ";
		for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<"\n"<<i;
			fact++;
		}
	}
}
void fun::prime()
{
	if(fact>2)
	{
			cout<<"\n This is not a prime number ";
	}
}
int main()
{
		fun x;
		x.getdata();
		x.factors();
		x.prime();
		
		return 0;
}
