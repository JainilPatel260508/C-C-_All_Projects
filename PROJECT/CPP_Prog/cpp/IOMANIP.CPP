#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

void main()
{
	clrscr();
	cout.setf(ios::showpoint);
	cout<<setw(5)<<"n"
	    <<setw(15)<<"Inverse_of_n"
	    <<setw(20)<<"Sum_of_terms\n\n";

	double term,sum=0;

	for(int n=1;n<=10;n++)
	{
		term=1.0/float(n);
		sum=sum+term;

		cout<<setw(5)<<n
		    <<setw(14)<<setprecision(2)
		    <<setiosflags(ios::scientific)<<term
		    <<setw(13)<<resetiosflags(ios::scientific)<<setprecision(2)
		    <<sum<<endl;
	}
	getch();
}
