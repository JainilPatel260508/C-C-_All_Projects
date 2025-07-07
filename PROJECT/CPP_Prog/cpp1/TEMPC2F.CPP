#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class temp
{
	float cel,fer;
	public:
		void getcel()
		{
		   cout<<"\n\n\t\t Enter a Cel:";
		   cin>>cel;
		   putfer();
		}
		void getfer()
		{
		   cout<<"\n\n\t\t Enter a Fer:";
		   cin>>fer;
		   putcel();
		}
		void putfer();
		void putcel();
		void disp();
};

  void temp :: putfer()
  {
	fer=cel*1.8+32;
  }
  void temp :: putcel()
  {
	cel=(fer-32)/1.8;
  }
  void temp :: disp()
  {     cout<<setprecision(2);
	cout<<"\n\n\t\t Cel:"<<setw(8)<<int(cel);
	cout<<"\n\n\t\t Fer:"<<setw(8)<<int(fer);
  }
void main()
{
	temp t1,t2;
	clrscr();
	t1.getcel();
	t1.disp();
	t2.getfer();
	t2.disp();
	getch();
}
