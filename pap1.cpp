#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
		int a=1,b=2;
		int a1,b1;
		int &a=a1;
		int &b=b1;
		swap(a1,b1);
		return 0;
}
void swap(int a1,int b1)
{
	int temp;
	temp=a1;
	a1=b1;
	b1=temp;
}
