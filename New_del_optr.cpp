//NEW AND DELETE OPERATOR
/*
	In c language malloc is used for allocation of memory dynamically at run time and calloc is also used for memory allocation.
	 Free function used to release memory.
	-In c++ new and delete oprators perform allocation and release memory.
	-object can be created by new and destroyed by delete operator.
	
	syntax :- *variable = new data type;
	syntax :- delete variable(pointer);
	
*/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char *a ="Today is Tuesday";
	int len=strlen(a);
	char *p;
	p= new char[len+1];
	strcpy(p,a);
	cout<<p;
	delete p;
	cout<<"\n"<<p;
	
	
	
	return 0;
}

