/*
	find the standard deviation, mean and variance;
*/
#include<iostream.h>
#include<conio.h>
#include<math.h>

class stat
{
     float xbar,sd,var;
     int n,x[20];
     public:
	void getdata();
	void calc();
	void disp();
};
void stat :: getdata()
{
	int i=0,s=0;
	cout<<"N<20:";
	cin>>n;
	for(i=0;i<n;i++)
	{
	  cout<<"\n\t\tx["<<i<<"]:";
	  cin>>x[i];
	  s=s+x[i];
	}
	xbar=s/n;
}
void stat :: calc()
{
	float s;
	for(int i=0;i<n;i++)
	{
	   s=s+(x[i]-xbar)*(x[i]-xbar);
	}
	var=s/n;
	sd=sqrt(var);
}
void stat :: disp()
{
	cout<<"\n\n\t\t Mean:"<<xbar;
	cout<<"\n\t\t Var:"<<var;
	cout<<"\n\t\t Standard Deviation:"<<sd;
}
void main()
{
	stat s;
	clrscr();
	s.getdata();
	s.calc();
	s.disp();
	getch();

}

/*
	n=5
	x   xi-xbar
	1   1-4=-3  9
	2   2-4=-2  4
	4   4-4=0   0
	6
	7
       xbar=20/5=4

*/