// Stack

#include<iostream.h>
#include<conio.h>

class stack
{
   int top;
   int st[5];
   public:
	    void initial(void);
	    void menu(void);
	    void push(void);
	    void pop(void);
	    void peep(void);
	    void change(void);
	    void disp(void);
};

void stack :: initial()
{
     int i;

     top=-1;
}

//***********************************************************************************

void stack :: menu()
{
   int n;
   clrscr();

      cout<<"\n\t\t1. Push";
      cout<<"\n\t\t2. Pop";
      cout<<"\n\t\t3. Peep";
      cout<<"\n\t\t4. Change";
      cout<<"\n\t\t5. Display";
      cout<<"\n\t\t6. Exit";

      cout<<"\n\n\t\t\tEnter your choice: ";
      cin>>n;

      switch(n)
      {
	 case 1:
		 push();
		 break;

	 case 2:
		 pop();
		 break;

	 case 3:
		 peep();
		 break;

	 case 4:
		 change();
		 break;

	 case 5:
		 disp();
		 break;

	 case 6:
		break;

	 default:
		cout<<"\n\n\tEnter no. between 1 to 6";
		getch();
      }
      if(n!=6)
	 menu();
}

//**************************************************************************************

void stack :: push()
{
    int n,i;


	if(top==5)
	{
	  cout<<"\n\n\tdata overflow!!";
	  getch();
	  return;
	}

	cout<<"\n\tEnter Data: ";
	cin>>n;
	top++;

	st[top]=n;
	disp();
}

//*********************************************************************************

void stack :: pop()
{
  int n,temp;

     if(top==-1)
   {
      cout<<"\n\tData underflow!!";
      getch();
      return;
   }

      temp=st[top];
      st[top]=0;
      top--;

     cout<<"\n\t"<<temp<<" is poped succesfully\n";
     disp();
}

//************************************************************************************

void stack :: peep()
{
   int pos;

   if(top==-1)
   {
      cout<<"\n\tData Underflow!!";
      getch();
      return;
   }

   cout<<"\n\tEnter a position: ";
   cin>>pos;

//   if(pos>top+1 || pos<1)
   if(top-pos+1<0)
   {
      cout<<"\n\tData Underflow!!";
      getch();
      return;
   }

   cout<<"\n\tData: "<<st[top-pos+1];

   getch();
}

//*********************************************************************************

void stack :: change()
{
   int pos,n;

   cout<<"\n\tEnter a position: ";
   cin>>pos;

   if(pos>top+1)
   {
      cout<<"\n\tData Underflow!!";
      getch();
      return;
   }

   cout<<"\n\tEnter Data: ";
   cin>>n;

   st[top-pos+1]=n;

   disp();
}

//================================================================================

void stack :: disp()
{
  int i;

   if(top==-1)
   {
     cout<<"\n\tData Not Found";
     getch();
     return;
   }
   cout<<"\n Top -> ";
   for(i=top;i>=0;i--)
   {
      cout<<st[i]<<"\n\t";
   }

  getch();
}

void main()
{
  stack s1;

   clrscr();
	 s1.initial();
	 s1.menu();

   getch();
}