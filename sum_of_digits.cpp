#include<iostream>
using namespace std;
class sum_digit
{
		private:
			int sum;
		public:
			void sum_fun(int);
};
void sum_digit::sum_fun(int num)
{
		sum=0;
		int temp;
		while(temp!=0)
		{
				temp=num%10;
				sum=sum+temp;
				num=num/10;
		}
		cout<<"\n The sum of digits is : ";
		cout<<sum;
}



int main()
{
		sum_digit sd;
		int num;
		cout<<"\n Enter the number : ";
		cin>>num;
		sd.sum_fun(num);
		
		return 0;
		
}
