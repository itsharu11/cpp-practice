#include<iostream>
using namespace std;

class arr_obj
{
		private :
			char name[10];
			int age;
		public :
			void getdata();
			void putdata();
			void display(arr_obj);
};

void arr_obj::getdata()
{
		cout<<"\n Enter you name  : ";
		cin>>name;
		cout<<"\n Enter your age : ";
		cin>>age;
		
}

void arr_obj::putdata()
{
		cout<<"\n\n The name is "<<name;
		cout<<"\n The age is "<<age;
		
}

void arr_obj::display(arr_obj ao)
{
		ao.putdata();
}
int main()
{
	arr_obj o1[2];
	int i=0;
	while(i<2)
	{
	o1[i].getdata();
	o1[i].putdata();
	i++;
	}
	o1[0].display(o1[0]);
	
	return 0;
}
