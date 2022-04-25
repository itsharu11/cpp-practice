#include<iostream>
using namespace std;
class bank 
{
	private:
		int acc_no;
		
	public:
		void getdata();
		void putdata();
			
};
void bank::getdata()
{
	a[0]=101;
	cin>>acc_no;
}

void bank::putdata()
{
	cout<<acc_no;
}
int main()
{
	bank b1;
	int a[3]={1000,1001,1002},i;
	cout<<"\n Enter your account number :";
	b1.getdata();
	for(i=0;i<3;i++)
	{
		if(a[i]==acc_no)
		{
			cout<<"account found ";
			goto jump;
		}
		else
		{
			cout<<"account not found ";
		}
	}
//	b1.putdata();
	jump:
		
	return 0;
}
