/*
	pointer to member and object
*/
#include<iostream.h>
#include<conio.h>

class M
{
	int x,y;
	public:
		void setxy(int a,int b)
		{
			x=a;
			y=b;
		}
		int friend sum(M m);
};
int sum(M m)
{
      int s;
      int M::*px=&M::x;
      int M::*py=&M::y;
     M *po= &m;

      s=m.*px+po->*py;
      return s;
}

void main()
{
   M n;
   clrscr();
   void (M::*pf)(int, int)= & M::setxy;

   (n.*pf)(10,20);

   cout<<"\n\n\t\tSum:"<<sum(n);
   M *po=&n;

   (po->*pf)(20,30);

   cout<<"\n\n\t\tSum:"<<sum(n);
	getch();
}