/*
	Friend function
*/
#include<iostream.h>
#include<conio.h>

class ABC;
class XYZ
{
	int x;
	public:
		void setvalue(int i)
		{
			x=i;
		}
		void friend max(XYZ, ABC);
};
class ABC
{
	int a;
	public:
		void setvalue(int j)
		{
			a=j;
		}
		void friend max(XYZ, ABC);
};

void max(XYZ m, ABC n)
{
	if (m.x>=n.a)
	  cout<<m.x;
	else
	  cout<<n.a;
}
void main()
{
	ABC abc;
	clrscr();
	abc.setvalue(100);
	XYZ xyz;
	xyz.setvalue(20);

	cout<<"\n\n\t\tMax:"<<max(xyz,abc);
	getch();
}