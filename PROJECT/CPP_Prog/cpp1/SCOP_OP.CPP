/*
       Global data access -> :: Scope resolation
*/
#include<iostream.h>
#include<conio.h>

int k=10;
void main()
{
     int k=20;
     clrscr();
     {
	 int m=k;
	 int k=30;
	 cout<<"\n\n\t\t Inner block";
	 cout<<endl<<endl<<"M:"<<m;
	 cout<<endl<<"K:"<<k;
	 cout<<endl<<"::K :"<<::k;
     }

	 cout<<"\n\n\t\t outer(Main) block";
//	 cout<<endl<<endl<<"M:"<<m;
	 cout<<endl<<"K:"<<k;
	 cout<<endl<<"::K :"<<::k;
  getch();

}