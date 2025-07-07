#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<math.h>

class invest
{
      float p,netamt,yr;
      float rate;
      public:
	  void getdata()
	  {
		cout<<"\n\n\t\tUpto Principal Amt:";
		cin>>p;
		cout<<"\n\t\tUpto No of Year:";
		cin>>yr;
		cout<<"\n\t\tRate of Interest:";
		cin>>rate;
	  }
	  void putdata();
};
 void invest :: putdata()
	  {
		int i;
		float pi;
		cout<<"\nYear ::>";
		for(i=1;i<=yr;i++)
		  cout<<"\t"<<i;
		cout<<"\nPricipal Amt";
	       //cout<<setprecision(2);
		for(pi=1000;pi<=p;pi+=1000)
		{
		   cout<<"\n"<<pi<<"\t";

		    for(i=1;i<=yr;i++)
		    {

		       cout<<setw(9)<<setprecision(2)<<setiosflags(ios::fixed)<<pi*pow((1+rate),i);
		    }
		}
	  }

void main()
{
    invest i1;
	clrscr();
       i1.getdata();
       i1.putdata();
	getch();
}