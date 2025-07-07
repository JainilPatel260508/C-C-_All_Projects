#include<iostream.h>
#include<conio.h>

class item
{
	int code;
	float price;
	public :
	   void getdata(int a, float b);
	   void putdata(void)  //by default inline
	   {
	       cout<<"\n\n\t\tItem Code:"<<code;
	       cout<<"\n\t\tItem Price:"<<price;
	   }
};
inline void item :: getdata(int a, float b)
{
	code=a;
	price=b;
}
void main()
{
	item i1,i2;
	clrscr();
	i1.getdata(10,452.35);
	i1.putdata();

	i2.getdata(20,856.55);
	i2.putdata();
	getch();
}