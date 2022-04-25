/*
	:: is called scope resolution operator. The scope of the global variable is not avail in the function.
	the local variable has higher priority than global variable ,Thus it overwrites.
*/
#include<iostream>
using namespace std;
const int y=10;
int x =20;
int main()
{
		int x;
		//y=30;
		cout<<"enter value x";
		cin>>x;
		cout<<"x="<<x<<endl;
		cout<<"x= "<<::x;
		cout<<"y="<<y;
		return 0;
}
