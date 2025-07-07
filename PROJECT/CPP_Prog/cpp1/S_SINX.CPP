/*
	sinx=x^1/1!-x^3/3!+x^5/5!-.....
	x=2
	n=6
	2-8/6+32/120
	2-1.33+0.2667
	0.933

*/
#include<iostream.h>
#include<conio.h>
#include<math.h>

class sinx
{
	int x,n;
	float sum;
		int fact(int);
	public:
		void getdata()
		{
			cout<<"\n\nEnter the value of x:";
			cin>>x;
			cout<<"\n\nEnter the value of n:";
			cin>>n;
		}
		void calc();
		void disp()
		{
		    cout<<"\n\n\t\tSum of series:"<<sum;
		}

};

void sinx :: calc()
{
	int i,k=1;
	for(i=1;i<n;i=i+2)
	{
	    sum=sum+k*(pow(x,i)/fact(i));
	    k=-k;
	}

}
int sinx :: fact(int f)
{
	int f1=1;
	for(int i=1;i<=f;i++)
	{
	   f1=f1*i;
	}
	return f1;
}
void main()
{
	sinx s;
	clrscr();
	s.getdata();
	s.calc();
	s.disp();
	getch();
}