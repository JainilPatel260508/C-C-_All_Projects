#include<iostream.h>
#include<conio.h>

class GCD
{
     int n1,n2;

     public:

     int gcd(int ,int);

     void input(void)
     {
	int res;
	cout<<"\n\n\t\tEnter no. 1: ";
	cin>>n1;

	cout<<"\n\n\t\tEnter no. 2: ";
	cin>>n2;

	cout<<"\n\tGCD:"<<gcd(n1,n2);

     }

};


int GCD :: gcd(int m,int n)
{
	static int x=1;
	 if(n>m)
	 {
	    gcd(n,m);
	 }
	 else if(n==0)

	 return m;
	    //cout<<"\n\t"<<m<<" is Greatest Common Divisor";
	 else
	 {
	   x=gcd(n,m%n);
//	   cout<<"Push x:"<<x;
	   }

	 cout<<"\npop x:"<<x;
	 return x;

}


void main()
{
   clrscr();

	GCD obj;

	  obj.input();
   getch();
}
