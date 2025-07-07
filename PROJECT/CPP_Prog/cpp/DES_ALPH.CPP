#include<iostream.h>
#include<conio.h>

static int cnt=0;

class alpha
{

   public:

   alpha()
   {
      cnt++;
      cout<<"\n object created : "<<cnt;
   }

   ~alpha()
   {
	 cout<<"\n object destroy : "<<cnt;
	 cnt--;
   }


};
void main()
{
	clrscr();
	alpha a1,a2,a3,a4;

	{
		cout<<"\n Inner Block 1";
		alpha a5;
	}

	{
		cout<<"\n Inner Block 2";
		alpha a6;
	}

	getch();
	}


