/*
	constructor
*/
#include<iostream.h>
#include<conio.h>

class integer
{
	int m,n;
	public:

		integer(void)
		{
			m=0;
			n=0;
		}

		integer(int x,int y); //parameterize constructor
		void disp()
		{
			cout<<"\n\n\t\t M:"<<m;
			cout<<"\n\n\t\t N:"<<n;
		}
		integer(integer & i) //copy constructor
		{
			m=i.m;
			n=i.n;
		}
};
/*integer :: integer(void)
{
	m=0;
	n=0;
} */
integer :: integer(int x,int y)
{
	m=x;
	n=y;
}

void main()
{
	integer i2(5,6),i4(10,20),i5,i1(i4);  //implicit calling
	integer i3= integer(10,200);   //explicit calling
	clrscr();
	cout<<"\n I1:";
	i1.disp();
	cout<<"\n I2:";
	i2.disp();
	cout<<"\n I3:";
	i3.disp();
	i5=integer(100,200);    //explicit calling
	cout<<"\n I4:";
	i4.disp();
	cout<<"\n I5:";
	i5.disp();
       // i6=i4;  // just assigne the value
	integer i6=i4; //copy constructor call
	cout<<"\n I6:";
	i6.disp();
	getch();
}
