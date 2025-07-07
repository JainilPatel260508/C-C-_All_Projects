#include<iostream.h>
#include<conio.h>

class FD
{
	long int p;
	int yr;
	float rvalue,r;
	public:
	    FD(){}
	    FD(long int p1,int y, float R=0.12);
	    FD(long int p1,int y, int R);
	    void disp()
	    {
	       cout<<"\n\n\t\t Principal Amt:"<<p;
	       cout<<"\n\t\t Return value:"<<rvalue;
	    }
};
FD :: FD(long int p1, int y, float R)
{
	p=p1;
	yr=y;
	r=R;
	rvalue=p;
	for(int i=1;i<=yr;i++)
	{
	  rvalue=rvalue*(1+r);
	}
}

FD :: FD(long int p1, int y, int R)
{
	p=p1;
	yr=y;
	r=R;
	rvalue=p;
	for(int i=1;i<=yr;i++)
	{
	  rvalue=rvalue*(1+r/100.00);
	}
}
void main()
{
	FD fd1,fd2,fd3;
	int pamt,rate,yr;
	float Rate;
	clrscr();
	cout<<"\nFD 1";
	cout<<"\n\t\tEnter Principla Amt:";
	cin>>pamt;
	cout<<"\n\t\tEnter Rate of Interest(FLoat):";
	cin>>Rate;
	cout<<"\n\t\tEnter No of Year:";
	cin>>yr;

	fd1=FD(pamt,yr,Rate); //explicit call

	cout<<"\nFD 2";
	cout<<"\n\t\tEnter Principla Amt:";
	cin>>pamt;
	cout<<"\n\t\tEnter Rate of Interest:";
	cin>>rate;
	cout<<"\n\t\tEnter No of Year:";
	cin>>yr;

	fd2=FD(pamt,yr,rate);

	cout<<"\nFD 3";
	cout<<"\n\t\tEnter Principla Amt:";
	cin>>pamt;
	cout<<"\n\t\tEnter No of Year:";
	cin>>yr;

	fd3=FD(pamt,yr);

	fd1.disp();
	fd2.disp();
	fd3.disp();
getch();
}