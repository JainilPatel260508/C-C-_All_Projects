#include<iostream.h>
#include<conio.h>

class math
{
	public:
	   float mul(float p, float q)   // by default inline
	   {
	      return p*q;
	   }
	   float div(float x, float y);
};

inline float math :: div(float x, float y)  // generate the inline
{
	if (y==0)
	 return 0;
	else
	 return x/y;
}
void main()
{
	math m;
	clrscr();
	cout<<"\n\n\t\tMul:"<<m.mul(125.5,5.25);
	cout<<"\n\n\t\tDiv:"<<m.div(125.5,5.0);
	getch();
}