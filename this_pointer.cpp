#include<iostream>
using namespace std;
class add
{
		private:
			int a,b;
		public:
			void getdata(int,int);
			void putdata();
			
};
void add::getdata(int a,int b)
{
		
		this->a=a;
		this->b=b;
		
}
void add::putdata()
{
		cout<<"\n A= "<<a;
		cout<<"\n B= "<<b;
}
int main()
{
	add o;
	o.getdata(5,10);
	o.putdata();
	return 0;
}
