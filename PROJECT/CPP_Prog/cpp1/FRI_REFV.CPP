#include<iostream.h>
#include<conio.h>

class class1;
class class2
{
    int x;
    public:
	void getdata(int a)
	{
	    x=a;
	}
	friend void swap(class1 &,class2 &);
	void disp()
	{
	   cout<<"\n\n\t\tX:"<<x;
	}
};
class class1
{
    int y;
    public:
	void getdata(int a)
	{
	    y=a;
	}
	friend void swap(class1 &,class2 &);
	void disp()
	{
	   cout<<"\n\n\t\tY:"<<y;
	}
};
void swap(class1 & c1, class2 & c2)
{
	int t=c1.y;
	c1.y=c2.x;
	c2.x=t;
}
void main()
{
	class1 C1;
	class2 C2;
	clrscr();
	C1.getdata(100);
	C2.getdata(200);
	cout<<"\n\n\t\tBefore swap";
	C1.disp();
	C2.disp();
	swap(C1,C2);
	cout<<"\n\n\t\tAfter swap";
	C1.disp();
	C2.disp();
getch();
}
