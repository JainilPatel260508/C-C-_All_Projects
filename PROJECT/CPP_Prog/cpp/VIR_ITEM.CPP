#include<iostream.h>
#include<conio.h>

class item
{
	int icode;
	float price;
	public:
	   void getdata()
	   {
	      cout<<"\n\t\tEnter Item Code:";
	      cin>>icode;
	      cout<<"\n\t\tEnter a price:";
	      cin>>price;
	   }
	   void putdata()
	   {
	      cout<<"\n\n\t\t Item Code:"<<icode;
	      cout<<"\n\t\t Item Price:"<<price;
	   }
};
void main()
{
	item *it = new item[3];
	item *ptr=it;
	clrscr();
	int i;
	for(i=0;i<3;i++)
	{
		ptr->getdata();
		ptr++;
	}
	ptr=it;
	for(i=0;i<3;i++)
	{
		ptr->putdata();
		ptr++;
	}
	getch();
}