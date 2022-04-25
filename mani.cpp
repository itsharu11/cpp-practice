// Manipulators
/*
	manipulators are operators used for formatting the output.
	1) endl - It is used to start a new line
	2)setw - It is used to right justify the numbers.
	For manipulators we have to include iomainp.h header file 
	
		
	
*/
#include<iostream>
#include<iomanip.h>
using namespace std;
int main()
{
	int soap = 25;
	int oil = 350;
	int pant = 2000;
	int eraser = 5;
	
	cout<<setw(10)<<"soap "<<setw(10)<<soap<<endl
		<<setw(10)<<"Oil "<<setw(10)<<oil<<endl
		<<setw(10)<<"Pant "<<setw(10)<<pant<<endl
		<<setw(10)"Eraser "<<setw(10)<<eraser;	
		
		return 0;
}
