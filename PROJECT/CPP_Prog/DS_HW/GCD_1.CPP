#include<iostream.h>
#include<conio.h>

class GCD
{
     int n1,n2;
     public:

     int fun_gcd(int ,int);

     void input()
     {
	cout<<"\n\n\tEnter 1st no.: ";
	cin>>n1;

	cout<<"\n\n\tEnter 2nd no.: ";
	cin>>n2;

	cout<<"\n\n\tGcd: "<<fun_gcd(n1,n2);
     }
};

int GCD :: fun_gcd(int m,int n)
{
   static int x;

     if(n>m)
       fun_gcd(n,m);
     else if(n==0)
       return(m);
     else
     x=fun_gcd(n,m%n);

      return x;
}

void main()
{
  clrscr();
     GCD obj;

     obj.input();
  getch();
}


