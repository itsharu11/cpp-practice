#include<iostream>
using namespace std;
class rect
{
	private:
		int l,b;
	public:
		rect(){l=2;b=2;}
		rect(int,int);
		rect(rect &re2)
		{
			l=re2.l;
			b=re2.b;
			cout<<"\n Addition is : "<<(l+b);
		}
		
		void display();
		
};
rect::rect(int len,int bre)
{
/*		cout<<"\n Enter the length : ";
		cint>>l;
		cout<<"\n Enter the breadth : ";
		cin>>b;
*/
	l=len;
	b=bre;
}
//rect::rect(rect &re2)


void rect::display()
{
	cout<<"\n The area of rectangle is : "<<l*b;
}
int main()
{
	
	rect r1;
	rect r2(4,3);
	rect r3(r2);
	
	r2.display();
	r1.display();
	
	r1=r2;
	r1.display();
	return 0;
}
