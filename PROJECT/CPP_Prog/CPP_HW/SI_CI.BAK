/*
	Simple and Compound Intrest
*/
#include<iostream.h>
#include<conio.h>
#include<math.h>

class FD
{
    private:

    unsigned long int p;
    float r;
    int t;
    double si,net_si,net_ci,ci;

    public:

	void getdata()
	{
		  cout<<"\n Input the Principle Amount:";
		  cin>>p;
		  cout<<"\n Input the Rate Of Interest:";
		  cin>>r;
		  cout<<"\n Input the no. of Year:";
		  cin>>t;

		  calculate(p,r,t);
	}

	void calculate(unsigned long int p,float r, int t)
	{
	      si=p*r*t/100;
	      net_si=si+p;

	      net_ci=p*pow((1+r/100),t);
	      ci=net_ci-p;

	      display();
	}

	void display()
	{
	       cout<<"\n\n\t\t Simple Interest: "<<si;
	       cout<<"\n\t\t Net Amount of Simple Interest: "<<net_si;

	       cout<<"\n\n\t\t Compound Interest: "<<ci;
	       cout<<"\n\t\t Net Amount of Compound Interest: "<<net_ci;

	}

};

void main()
{
   clrscr();

	FD n;

	n.getdata();

   getch();
}
