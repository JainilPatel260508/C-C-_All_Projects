/*
	Friend fun
*/
#include<iostream.h>
#include<conio.h>

class sample
{
	int a,b;
	public :
		void getdata(int x,int y)
		{
			a=x;b=y;
		}
		friend float sum(sample s);
};
float sum(sample s)
{
	return ((s.a+s.b)/2.0);
}
void main()
{
	sample S;
	clrscr();
	S.getdata(10,60);
	cout<<"\n\n\t\t Mean :"<<sum(S);
	getch();
}