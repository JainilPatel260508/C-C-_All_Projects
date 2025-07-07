/*
	class within array
*/
#include<iostream.h>
#include<conio.h>
const n=25;
class item
{
	int icode[n];
	int price[n];
	int cnt;
	public:
	    void count()
	    {
	      cnt=0;
	    }
	    void getdata();
	    void dispsum();
	    void remove();
	    void disp();
};
void item :: getdata()
{
	cout<<"\n\n\t\tEnter a item code:";
	cin>>icode[cnt];
	cout<<"\n\t\tEnter a item price:";
	cin>>price[cnt];
	cnt++;
}
void item :: dispsum()
{
	int s=0;
	for(int i=0;i<cnt;i++)
	{
		s=s+price[i];
	}
	cout<<"\n\n\t\tTotal :"<<s;
	cout<<"\n\t\t=====================";
}
void item :: remove()
{
	int ic;//,f=0;
	cout<<"\n\n\t\tEnter Remove item code:";
	cin>>ic;

	for(int i=0;i<cnt;i++)
	{
		if(icode[i]==ic)
		 {
		    price[i]=0;
		 //   f=1;
		    break;
		 }
	}
//	 if(f==1)
	 if(i!=cnt)
	 {
		cout<<"\n\n\t\titem is Removed from your list.";
	 }
	 else
		cout<<"\n\n\t\titem does not exist.";
}
void item :: disp()
{
	int s=0;
	cout<<"\n\n\t\tItem code\tPrice";
	cout<<"\n\t\t===============================";

	for(int i=0;i<cnt;i++)
	{
	   if (price[i]!=0)
	   { cout<<"\n\t\t"<<icode[i]<<"\t\t"<<price[i];
	     s=s+price[i];
	   }
	}
	cout<<"\n\t\t===============================";
	cout<<"\n\n\t\t\tTotal :"<<s;
	cout<<"\n\t\t===============================";

}
void main()
{
	item obj;
	int ch;
	obj.count();
	do
	{
		clrscr();
		cout<<"\n\n\t\t 1. Insert item";
		cout<<"\n\t\t 2. Display sum";
		cout<<"\n\t\t 3. Remove Item";
		cout<<"\n\t\t 4. Display item";
		cout<<"\n\t\t 5. Exit";
		cout<<"\n\t\t Enter a your choice:";
		cin>>ch;
		switch(ch)
		{
		    case 1:  obj.getdata(); break;
		    case 2:  obj.dispsum(); break;
		    case 3:  obj.remove(); break;
		    case 4:  obj.disp(); break;
		    case 5:   break;
		    default:
			     cout<<"\n\n\t\t Wrong choice. Try again!";
			  break;
		}
		getch();
	}while(ch!=5);
}
