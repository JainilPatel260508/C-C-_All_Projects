/*
	object as arg.
*/
#include<iostream.h>
#include<conio.h>

class time
{
	int h,m;
	public:
	   void getdata(int h1, int m1)
	   {
		h=h1;
		m=m1;
	   }
	   void putdata()
	   {
		cout<<"\n\n\t\tH:"<<h<<"   M:"<<m;
	   }
	   void sum(time,time);
};
void time :: sum(time t1, time t2)
{
	m=t1.m+t2.m;
	h=m/60;
	m=m%60;
	h=h+t1.h+t2.h;
}
void main()
{
	time T1,T2,T3;
	clrscr();
	T1.getdata(3,45);
	T2.getdata(2,30);
	T3.sum(T1,T2);

	T1.putdata();
	T2.putdata();
	T3.putdata();
	getch();
}
