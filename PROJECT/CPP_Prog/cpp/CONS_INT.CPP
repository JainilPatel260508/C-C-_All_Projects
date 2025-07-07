#include<iostream.h>
#include<conio.h>

class integer
{
	int a,b;
	public:
	  integer()
	  {
	     a=0,b=0;
	  }
	  integer(int,int);
	  integer(integer & x)  //Copy constructor
	  {
	     a=x.a;
	     b=x.b;
	  }
	  void disp()
	  {
	    cout<<"\n\n\t\t A:"<<a<<"  B:"<<b;
	  }
};
integer :: integer(int x,int y)
 {
	a=x;
	b=y;
  }


void main()
{
    integer i1,i2(10,20),i3(i2);//Implicity
    clrscr();

    i1.disp();
    i1 = integer(20,30);   //Explicity
    i1.disp();
    i2.disp();
    i3.disp();
    integer i4=i1; //call the copy constructor if exist
//    i4=i1; //dont call copy constructor
    i4.disp();
fgetch();
}