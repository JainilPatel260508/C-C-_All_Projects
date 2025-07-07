#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

ostream & curr(ostream & output)
{
	output<<"Rs.";
	return output;
}

ostream & form(ostream & output)
{
	output.setf(ios::showpos);
	output.setf(ios::showpoint);
	output.fill('*');
	output.precision(2);
	output<<setiosflags(ios::fixed)
	//<<setiosflags(ios::left)
	      <<setw(10);
	return output;
}
void main()
{
	clrscr();
	cout<<curr<<form<<7864.5;
	getch();
}
