#include<iostream>
using namespace std;
int b=5;
class a
{
	public	:
		void putdata();
};

inline void a::putdata()
{
	cout<<"the value of a is : "<<b;
	
}

int main()
{
	a a1;
	
	a1.putdata();
	return 0;
}
