#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length,breadth,area;
	public:
		void getdata();
		void area_rectangle();
		
};
void rectangle::getdata()
{
		cout<<"\n Enter the length and breadth :\n";
		cin>>length>>breadth;
}
void rectangle::area_rectangle()
{
		cout<<"\n The area of the rectangle is ";
		area=length*breadth;
		cout<<area;
}
int main()
{
		rectangle r;
		r.getdata();
		r.area_rectangle();
		
		return 0;
}
