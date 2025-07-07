/*
	To find big value among three values.
*/
#include<iostream.h>
#include<conio.h>

class Big
{
   int x,y,z;
   int largest();
   public:
	void getdata(int a,int b,int c)
	{
		x=a;
		y=b;
		z=c;
	}
	void disp();
};
int Big :: largest()
{
	int p = x>y && x>z?x:y>z?y:z;  //conditional opertor or tarnary operator
	return p;
}
void Big :: disp()
{
	cout<<"\n\n\t\t Big :"<<largest();
}
void main()
{
	Big b;
	int p,q,r;
	clrscr();
	cout<<"\n\nEnter a P:";
	cin>>p;
	cout<<"\n\nEnter a q:";
	cin>>q;
	cout<<"\n\nEnter a r:";
	cin>>r;
	b.getdata(p,q,r);
      //	cout<< b.largest();
	b.disp();
getch();

}
