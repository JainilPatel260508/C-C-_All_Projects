#include<iostream.h>
#include<conio.h>

int m=10;

void main()
{
	int m=20;
	int *p = new int(25);
	float *q=new float(7.5);
	clrscr();
	{
	   int k=m;
	   int m=30;
	   cout<<"\n\n\t\tInner Local M:"<<m;
	   cout<<"\n\t\tK:"<<k;
	   cout<<"\n\t\t::m:"<<::m;
	}

	   cout<<"\n\n\t\touter Local M:"<<m;
//	   cout<<"\n\t\tK:"<<k;
	   cout<<"\n\t\t::m:"<<::m;
	   cout<<"\n\t\t*p:"<<*p;
	   cout<<"\n\t\t*q:"<<*q;
	   delete p,q;
//	   delete q;
    getch();
}

