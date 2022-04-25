#include<iostream>
using namespace std;
class fun
{
		private:
			int n,fact;
		public:
			void prime(int n);
			int factors();
			void getdata();	
			void display();
			
};

void fun::getdata()
{
	cout<<"\n Enter a number : ";
	cin>>n;
	
}
int fun::factors()
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
	return fact;
}
void fun::prime(int fact)
{
	if(fact>2)
	{
			cout<<"\n This is not a prime number ";
	}
	else 
	{
		cout<<"\n The number is prime";
	}
}

void fun::display()
{
		getdata();
		prime(factors());
		
}
int main()
{
		fun x;
		
		x.getdata();
		int a = x.factors();
		x.prime(a);
		cout<<"\n\ndisplay fun";
		x.display();
		return 0;
}
