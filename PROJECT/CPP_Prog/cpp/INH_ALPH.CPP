#include<iostream.h>
#include<conio.h>

class alpha
{
   int a;
   public:
     alpha(int i)
     {
	a=i;
	cout<<"\n\t\tAlpha call";

     }

     void show_a()
     {
	cout<<"\n\t\tA:"<<a;
     }
};
class beta
{
   int p,q;
   public:
     beta(int i,int j):q(i),p(j+q)
     {
	//b=j;
	cout<<"\n\t\tbeta call";
     }
     void show_b()
     {
	cout<<"\n\t\tP:"<<p;
	cout<<"\n\t\tQ:"<<q;
     }
};
class gamma:public beta,public alpha
{
     float n,m;
     public:
       gamma(int a1,int b1,float n1,float m1):alpha (a1) ,beta (b1,b1),m(m1)
       {
	     n=n1;
       //	     m=m1;
	     cout<<"\n\t\tgamma call";
       }
	void show_nm()
	{
	   cout<<"\n\t\tN:"<<n;
	   cout<<"\n\t\tM:"<<m;
	}
};
void main()
{
    clrscr();
    gamma G(10,20,30.5,40.15);

    G.show_a();
    G.show_b();
    G.show_nm();
    getch();
}