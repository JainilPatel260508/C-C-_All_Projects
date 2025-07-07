#include<iostream.h>
#include<conio.h>

class M
{
	protected:
	int m;
	public:
	   void get_m(int x)
	   {
	      m=x;
	   }
	  void disp()
	  {
	      cout<<"\n\t\t M:"<<m;
	  }

};
class N
{
    protected:
       int n;
       public:
	  void get_n(int y)
	  {
	    n=y;
	  }
	  void disp()
		 {
	      cout<<"\n\t\t N:"<<n;
	  }
};
class P: public M,public N
{
   public:
	void disp();

};
void P:: disp()
{
    cout<<"\n\n\t\t M:"<<m;
    cout<<"\n\n\t\t N:"<<n;
    cout<<"\n\n\t\t m*n:"<<m*n;
}
void main()
{
	P p;
	clrscr();
	p.get_m(10);
	p.get_n(20);
	p.M::disp();
	p.N	::disp();
	p.disp();
	getch();
}
