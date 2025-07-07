#include<iostrea	m.h>
#include<conio.h>

enum days
{
	sun=1,mon,tue,wed,thr,fri,sat
};
void main()
{
	enum days fd=sun,ld=sat,d3;
	int d;
	clrscr();
	cout<<"\n\n\t\tFirst Day:"<<fd;
	cout<<"\n\n\t\tLast Day:"<<ld;

	cout<<"\n\n\t\tEnter the day:";cin>>d;
//	if(d>=fd && d<=ld)
//	{
		switch(d)
		{
		     case sun:
				cout<<"\n\n\t\t Holiday....";
				break;
		     case mon:
				cout<<"\n\n\t\t Working....";
				break;
		     case tue:
				cout<<"\n\n\t\t Ganpati bapa moriya....";
				break;
		     case wed:
				cout<<"\n\n\t\t Free Days....";
				break;
		     case thr:
				cout<<"\n\n\t\t Jay Sainath....";
				break;
		     case fri:
				cout<<"\n\n\t\t New Movie days....";
				break;
		     case sat:
				cout<<"\n\n\t\t Jay Bajrangbali....";
				break;
		     default :
				cout<<"\n\n\t\t Wrong Day....";
				break;

		}
//	}
	getch();
}
