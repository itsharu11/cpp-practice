/*
		In inheritence parent class alpha is  initialized first so the constructor of parent class execute first and then beta class and at 
		last the gamma class.
		In multilevel inheritence the constructors are executed in order of inheritence.
		In multiple inheritence the base classes are constructed in the order in which they appear in the declaration of the derieved class.
*/
#include<iostream>
using namespace std;
class alpha
{
		private :
			int x;
		public :
			 alpha()
			 {
			 	cout<<"\n constructor of alpha ";
			 }
			
};

class beta : public alpha
{
		private :
			int y;
		public :
			 beta()
			 {
			 	cout<<"\n constructor of beta ";
			 }
			
};

class gamma : public beta
{
		private :
			int z,w;
		public :
			 gamma()
			 {
			 	cout<<"\n constructor of gamma ";
			 }
			
};

int main()
{
		gamma g;
		
		return 0;
}
