//De-Queue input restricted

#include<iostream.h>
#include<conio.h>

class De_Queue
{
    int *q,f,r,size,data;

    public:

    De_Queue();

   ~De_Queue()
   {
     delete q;
   }

   void menu();
   void insert();
   void del_R();
   void del_L();
   void display();
};

De_Queue :: De_Queue()
{
    clrscr();

    cout<<"\n\tEnter size of Queue: ";
    cin>>size;

    q=new int[size];
    r=-1;
    f=-1;

    for(int i=0; i<size; i++)
    q[i]=0;

}


void De_Queue :: menu()
{
    int n;

    clrscr();
    cout<<"\n\n\t1. Insert";
    cout<<"\n\t2. Right Insert";
    cout<<"\n\t3. Left Delete";
    cout<<"\n\t4. Display";
    cout<<"\n\t5. Exit";

    cout<<"\n\tEnter Your Choice: ";
    cin>>n;

    switch(n)
    {
       case 1:
	       insert();
	       menu();
	       break;

       case 2:
	       del_R();
	       menu();
	       break;

       case 3:
	       del_L();
	       menu();
	       break;

       case 4:
	       display();
	       menu();
	       break;

       case 5:
	       break;

       default:
	       cout<<"\n\tEnter appropriate input";
	       getch();
	       menu();
    }
}

void De_Queue :: insert()
{
  if(r>=size-1)
   {
     cout<<"\n\tQueue Overflow!!";
     getch();
     return ;
   }

   else
   {
     cout<<"\n\tEnter Data: ";
     cin>>data;
     r++;

     q[r]=data;

     if(f==-1)
	f=0;

     cout<<"\n\tData inserted successfully!";
     display();
   }
}

void De_Queue :: del_R()
{
  int p;

  if(f==-1)
   {
      cout<<"Queue Overflow!!";
      getch();
      return ;
   }

   else
   {
      p=q[f];
      q[f]=0;

      if(f==r)
      {
	 f=-1;
	 r=-1;
      }
      else
	 f++;

      cout<<"\n\t"<<p<<" deleted successfully!!";
      display();
   }
}

void De_Queue :: del_L()
{
  int p;

  if(f==-1)
   {
      cout<<"Queue Overflow!!";
      getch();
      return ;
   }

   else
   {
      p=q[r];
      q[r]=0;

      if(f==r)
      {
	 f=-1;
	 r=-1;
      }
      else
	 r--;

      cout<<"\n\t"<<p<<" deleted successfully!!";
      display();
   }
}

void De_Queue :: display()
{
   if(f==-1)
   {
      cout<<"\n\tQueue Underflow!!";
      getch();
      return ;
   }

   else
   {
     cout<<"\n\n\t";
     for(int i=0;i<size;i++)
       cout<<" "<<q[i];

   }
   getch();
}


void main()
{
   De_Queue obj;

   clrscr();

   obj.menu();

   getch();
}