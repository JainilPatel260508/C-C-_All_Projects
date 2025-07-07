/*
	pass by object
*/
#include<iostream.h>
#include<conio.h>

class Time
{
	int h,m;
	public:
		void getdata(int h1,int m1)
		{
			h=h1;
			m=m1;
		}
		void disp()
		{
			cout<<"\n\n\t\t H :"<<h<<"  M:"<<m;
		}
		void sum(Time, Time);
};
void Time :: sum(Time t1, Time t2)
{
	m=t1.m+t2.m;
	h=m/60;
	m=m%60;
	h=h+t1.h+t2.h;
}
void main()
{
	Time T1,T2,T3;
	clrscr();
	T1.getdata(2,45);
	T2.getdata(3,30);
	T3.sum(T1,T2);

	T1.disp();
	T2.disp();
	T3.disp();
	getch();

}
