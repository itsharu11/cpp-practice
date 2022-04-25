#include<iostream>
using namespace std;
class abc; //forward declaration
class xyz
{
	private:
	int x;
	public:
		void setvalue(int i){x=i;}
		friend void max(xyz,abc);
};
class abc
{
	int a;
	public:
		void setvalue(int i){a=i;}
		friend void max(xyz,abc);
};
void max(xyz m,abc n)
{
	if(m.x >= n.a)
		cout<<m.x;
	else
		cout<<n.a;
		
}
int main()

{
	abc ABC;
	ABC.setvalue(10);
	xyz XYZ;
	XYZ.setvalue(20);
	max(XYZ,ABC);
	return 0;
}
