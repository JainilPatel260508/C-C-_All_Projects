//Circular Queue

#include<iostream.h>
#include<conio.h>

class circle_Q
{
   int *q,r,f,size,data;

   public:

   circle_Q();

   ~circle_Q()
   {
      delete q;
   }

   void menu();
   void insert();
   void del();
   void disp();


};

circle_Q :: circle_Q()
{
    cout<<"\n\tEnter size of Queue: ";
    cin>>size;

    q=new int[size];
    r=-1;
    f=-1;

    for(int i=0;i<size;i++)
      q[i]=0;
}


void circle_Q :: menu()
{
    clrscr();

    int n;

    cout<<"\n\t1. Insert";
    cout<<"\n\t2. Delete";
    cout<<"\n\t3. Display";
    cout<<"\n\t4. Exit";

    cout<<"\n\n\tEnter your choice: ";
    cin>>n;

    switch(n)
    {
       case 1:
	       insert();
	       menu();
	       break;

       case 2:
	       del();
	       menu();
	       break;

       case 3:
	       disp();
	       menu();
	       break;

       case 4:
	       break;

       default:
	       cout<<"\n\tEnter appropriate input";
	       getch();
	       menu();
    }

}


void circle_Q :: insert()
{
      if(r==size-1)
	    r=0;
	else
	    r++;


    if(f==r)
    {
	cout<<"\n\t\ Overflow";
	if(r==0)
	 r=size - 1;
	else
	 r-- ;
	return;
    }

    cout<<"\n\tEnter data: ";
    cin>>data;
    q[r]=data;

    if(f==-1)
      f=0;
}
void circle_Q :: del()
{
  if(f==-1)
  {
     cout<<"\n\tQueue is underflow";
     getch();
     return;
  }
  int p=q[f];

  q[f]=0;

  if(f==r)
  {
    f=r=-1;
   // return;
  }

  if(f==size-1)
    f=0;
  else
    f++;

    cout<<p<<" is deleted succefully";

    getch();
}
void circle_Q :: disp()
{
  if(f==-1)
  {
    cout<<"\n\tQueue is underflow";
    getch();
    return;
  }

  for(int i=0;i<size;i++)
  {
    cout<<"\n\tdata"<<i+1<<" = "<<q[i];

  }
   getch();
}

void main()
{
  clrscr();

  circle_Q q1;

  q1.menu();

  getch();
}