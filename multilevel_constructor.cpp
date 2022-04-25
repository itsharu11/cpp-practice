/*
		In inheritence parent class alpha is  initialized first so the constructor of parent class execute first and then beta class and at 
		last the gamma class.
		In multilevel inheritence the constructors are executed in order of inheritence.
		In multiple inheritence the base classes are constructed in the order in which they appear in the declaration of the derieved class.
		When we call the parametrize constructors of child class then defaul constructor is automatically executed
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
			 alpha(int i)
			 {
			 	x=i;
			 	
			 }
			 void showx()
			 {
			 	cout<<"\n x= "<<x;
			 	
			 }
			
};

class beta 
{
		private :
			int y;
		public :
			 beta()
			 {
			 	cout<<"\n constructor of beta ";
			 }
			 beta(int j)
			 {
			 	y=j;
			 }
			 void showy()
			 {
			 	cout<<"\n y= "<<y;
			 }
			
};

class gamma : public alpha,public beta
{
		private :
			int z,w;
		public :
			
			 gamma()
			 {
			 	cout<<"\n constructor of gamma ";
			 }
			
			 gamma(int l,int m,int a,int b):alpha(a),beta(b) // parametrize constructor of parent class are called according to the order
			 {
			 	z=l;
			 	w=m;
			 }
			 void showzw()
			 {
			 	cout<<"\n z=  : "<<z;
			 	cout<<"\n w=  : "<<w;
			 	
			 }
			
			
};


int main()
{
//		gamma g; 

		gamma g1(33,12,90,77);
		g1.showx();
		g1.showy();
		g1.showzw();
		return 0;
}
