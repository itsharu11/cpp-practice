#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
using namespace std;
struct account_holders
{
	string name;
	int account_no;
	int avl_bal;
	int password;
	
};

int main()
{
		ofstream data;
		data.open("account_details.txt");
		ofstream outf("account_details");
		
		int n;
		account_holders a[50];
		int i=0;
		
		cout<<"\n Enter the number of accounts to enter : ";
		cin>>n;
		
		for(i=0;i<n;i++)
		{
			cout<<"\n Enter the name of account holder : ";
			gets(a[i].name);
			cout<<"\n Enter the account number : ";
			cin>>a[i].account_no;
			cout<<"\n Enter the 4 digit password : ";
			cin>>a[i].password;
			cout<<"\n Enter the balance : ";
			cin>>a[i].avl_bal;
			// Writing in the file.
			
			data<<a[i].name<<"\n";
			data<<a[i].account_no<<"\n";
			data<<a[i].avl_bal<<"\n";
			data<<a[i].password<<"\n";
			
			cout<<"\n Congratulations! Your account is created ";
		}
		
		
}
