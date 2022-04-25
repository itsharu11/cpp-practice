#include<iostream>
using namespace std;
void swap(int &x,int &y);

int main()
{
	int a=10,b=20;
	cout<<"\n Before interchaning the variables :"<<a<<b;
	swap(a,b);
	
	return 0;
	
}

void swap(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"\n After swapping the variables "<<x<<y;
}
