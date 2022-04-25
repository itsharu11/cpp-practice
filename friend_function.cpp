#include<iostream>
using namespace std;
class student_detail
{
	private:
		char name[10];
		int roll;
	public:
		void getdata();
		void putdata();
			
};



void student_detail::getdata()
{
		cout<<"\n Enter name of the stuent : ";
		cin>>name;
		cout<<"\n Enter number ";
		cin>>roll;
}

void student_detail::putdata()
{
	cout<<"\n\n name : "<<name<<"\tRoll :"<<roll;
}

class student_result
{
	private:
		int maths,science,english,ss;
	public:
	void getdata();
	void putdata(student_detail);	
};

void student_result::getdata()
{
	cout<<"\n Enter the marks of each subject \n maths : ";
	cin>>maths;
	cout<<"\n Science :";
	cin>>science;
	cout<<"\n English :";
	cin>>english;
	cout<<"\n Social studies :";
	cin>>ss;
	
}
void student_result::putdata(student_detail sd)
{
//	cout<<"\n The result of the student is :";
	sd.putdata();
	cout<<"\n Maths : "<<maths;
	cout<<"\n science : "<<science;
	cout<<"\n english : "<<english;
	cout<<"\n Social studies : "<<ss;
}

int main()
{
	int i;
	student_detail o1[2];
	student_result o2[2];
	for(i=0;i<2;i++)
	{
	
	o1[i].getdata();
//	o1.putdata();
	o2[i].getdata();
	//o2[i].putdata(o1);// passing object as an argument
	}
	for(i=0;i<2;i++)
	{
		o2[i].putdata(o1[i]);
	}
	
	return 0;
}
