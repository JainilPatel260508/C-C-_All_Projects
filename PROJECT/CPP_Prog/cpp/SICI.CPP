#include<iostream.h>
#include<conio.h>
#include<math.h>
class sici
{
	long int p,y;
	float r;

	public:
		void getdata()
		{
			cout<<"\n\n\t\tPrincipal Amount:";cin>>p;
			cout<<"\n\t\tRate Of Interest:";cin>>r;
			cout<<"\n\t\tNo of Year:";cin>>y;
		}
		float si(long p,long y=2, float r=10)
		{
		   return p*r*y/100.0;
		}
		float ci(long p,long y, float r=12)
		{
		   return p*pow(1+r/100,y);
		}
		void putsi()
		{
			cout<<"\n\n\t\tSimple Interest:"<<si(p,y,r);
			cout<<"\n\t\tNet Amount :"<<si(p,y,r)+p;
		}
		void putci()
		{
			cout<<"\n\n\t\tCompound Interest:"<<ci(p,y,r)-p;
			cout<<"\n\t\tNet Amount :"<<ci(p,y,r);
		}
};
void main()
{
	sici s;
	clrscr();
	s.getdata();
	s.putsi();
	s.putci();
	getch();
}