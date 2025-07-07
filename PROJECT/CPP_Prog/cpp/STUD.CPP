#include<iostream.h>
#include<conio.h>

class Stud
{
	int rno,m1,m2,m3,tot;
	int per;
	char name[10],*grd;
	public:
	     void getdata()
	     {
		cout<<"\n\n\t\tEnter a RollNo:";cin >>rno;
		cout<<"\n\t\tEnter a Name:";cin >>name;
		cout<<"\n\t\tEnter a M1:";cin >>m1;
		cout<<"\n\t\tEnter a M2:";cin >>m2;
		cout<<"\n\t\tEnter a M3:";cin >>m3;
	     }
	     void calculate();
	     void putdata()
	     {
		calculate();
		cout<<"\n\n\t\tRollno:"<<rno;
		cout<<"\n\t\tName:"<<name;
		cout<<"\n\n\t\tM1:"<<m1;
		cout<<"\n\n\t\tM2:"<<m2;
		cout<<"\n\n\t\tM3:"<<m3;
		cout<<"\n\n\t\tTotal:"<<tot;
		cout<<"\n\n\t\tPer:"<<per;
		cout<<"\n\n\t\tGrade:"<<grd;
	     }
};
void Stud :: calculate()
  {
		tot=m1+m2+m3;
		per=tot/3.0;
		switch(per/10)
		{
		    case 9:
		    case 8: grd="A+";break;
		    case 7: grd="A";break;
		    case 6: grd="B+";break;
		    case 5:
		    case 4: grd="B";break;
		    default :
			    grd="C";break;
		}
   }
void main()
{
	Stud s1;
	clrscr();
	s1.getdata();
      //	s1.calculate();
	s1.putdata();

	getch();
}
