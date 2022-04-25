// Manipulators
/*
	manipulators are operators used for formatting the output.
	1) endl - It is used to start a new line
	2)setw - It is used to right justify the numbers.
	For manipulators we have to include iomainp.h header file 
	
		
	
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int soap = 25;
	int oil = 350;
	int pant = 2000;
	int eraser = 5;
	
	
	cout<<setw(7)<<"soap "<<setw(10)<<setfill('0')<<soap<<endl
		<<setw(7)<<"Oil "<<setw(10)<<setfill('0')<<oil<<endl
		<<setw(7)<<"Pant "<<setw(10)<<setfill('0')<<pant<<endl
		<<setw(7)<<"Eraser "<<setw(10)<<setfill('0')<<eraser;
		
		
	/*	
		cout<<"soap"<<setw(10)<<soap<<endl
		<<"Oil"<<setw(10)<<oil<<endl
		<<"Pant"<<setw(10)<<pant<<endl
		<<"Eraser"<<setw(10)<<eraser;	
	*/	
		return 0;
}
