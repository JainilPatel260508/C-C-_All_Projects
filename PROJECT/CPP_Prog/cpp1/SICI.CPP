/*
	ci=p*(1+r/100)^n
	si=p*r*n/100

*/
#include<iostream.h>
#include<conio.h>
#include<math.h>
class sici
{
     float p,n,r,si,ci,sii,cii;

     public:
	void getdata()
	{
		cout<<"\n\n\t\tEnter the principal Amt:";
		cin>>p;
		cout<<"\n\n\t\tEnter the Rate of Interest:";
		cin>>r;
		cout<<"\n\n\t\tEnter the No of Year:";
		cin>>n;
	 //	calsi();
		calci();
	}
	float calsi()
	{
		return p*r*n/100.0;
	//    si=sii+p;
	}
	void calci()
	{
	    ci=p*pow((1+r/100),n);
	    cii=ci-p;
	}
	void disp();
};

void sici::disp()
	{
		cout<<"\n\n\t\tSimple Interest:"<<calsi();
		cout<<"\n\n\t\tSimple Net Amount:"<<calsi()+p;

		cout<<"\n\n\t\tCompund Interest:"<<cii;
		cout<<"\n\n\t\tCompund Net Amount:"<<ci;
	}

void main()
{
	sici s1;
	clrscr();
	s1.getdata();
     //	s1.calsi();
      //	s1.calci();
	s1.disp();
	getch();
}