//De-Queue delete restricted

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
   void insert_R();
   void insert_L();
   void del();
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
    cout<<"\n\n\t1. Right Insert";
    cout<<"\n\t2. Left Insert";
    cout<<"\n\t3. Delete";
    cout<<"\n\t4. Display";
    cout<<"\n\t5. Exit";

    cout<<"\n\tEnter Your Choice: ";
    cin>>n;

    switch(n)
    {
       case 1:
	       insert_R();
	       menu();
	       break;

       case 2:
	       insert_L();
	       menu();
	       break;

       case 3:
	       del();
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

void De_Queue :: insert_R()
{
    if(r>=size-1)
    {
      cout<<"\n\tQueue Overflow!!";
      getch();
      return ;
    }

    else if(f==-1)
    {
       f=r=0;
       cout<<"\n\tEnter Data: ";
       cin>>data;

       q[r]=data;
    }

    else if(f<=r)
    {
       r++;

       if(q[r]!=0)
       {
	 r--;
	 cout<<"\n\tQueue Overflow!!";
	 getch();
	 return ;
       }

       else
       {
	  cout<<"\n\tEnter Data: ";
	  cin>>data;
	  q[r]=data;
       }

    }

    else if(f>r)
    {
       f++;

       if(q[f]!=0)
       {
	 f--;
	 cout<<"\n\tQueue Overflow!!";
	 getch();
	 return;
       }

       else
       {
	  cout<<"\n\tEnter Data: ";
	  cin>>data;
	  q[f]=data;
       }
    }


}


void De_Queue :: insert_L()
{
    if(f==0)
    {
      cout<<"\n\tQueue Overflow!!";
      getch();
      return;
    }

    else if(f==-1)
    {
       f=r=size-1;
       cout<<"\n\tEnter Data: ";
       cin>>data;

       q[r]=data;
    }

    else if(f<=r)
    {
       f--;

       if(q[f]!=0)
       {
	 f++;
	 cout<<"\n\tQueue Overflow!!";
	 getch();
	 return ;
       }

       else
       {
	  cout<<"\n\tEnter Data: ";
	  cin>>data;
	  q[f]=data;
       }

    }

    else if(f>r)
    {
       r--;

       if(q[r]!=0)
       {
	 r++;
	 cout<<"\n\tQueue Overflow!!";
	 getch();
	 return ;
       }

       else
       {
	  cout<<"\n\tEnter Data: ";
	  cin>>data;
	  q[r]=data;
       }
    }

}

void De_Queue :: del()
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
      getch();
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