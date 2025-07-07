// input restricetd d queue
#include<iostream.h>
#include<conio.h>

class input_restricted_dQ
{
   int front,rear,*q,n;
  public:
   void menu(void);
   input_restricted_dQ(int);
   ~input_restricted_dQ(void);
   void insert(void);
   void display(void);
   void my_delete(int);
};
input_restricted_dQ :: input_restricted_dQ(int x)
{
   n=x;
   q=new int[n];
   rear=front=-1;
   for(int j=0;j<n;j++)
   { q[j]=0;}
}
input_restricted_dQ :: ~input_restricted_dQ()
{
   delete q;
}
void input_restricted_dQ :: menu()
{
  int sw;
  do{
     sw=0;
     clrscr();
     cout<<"\n\n1)Insert";
     cout<<"\n2)Right Delete";
     cout<<"\n3)Left Delete";
     cout<<"\n4)Display";
     cout<<"\n5)Exit";
     cout<<"\n\nEnter Your Choice: ";
     cin>>sw;
     switch(sw)
     {
	 case 1:
	     insert();
	     break;
	 case 2:
	     my_delete(sw);
	     break;
	 case 3:
	     my_delete(sw);
	     break;
	 case 4:
	     display();
	     break;
	 case 5:
	     break;
	 default:
	     cout<<"\n\n\tEnter correct choice!!!";
	     cout<<"\n\tStrike any key to exit.";
	     getch();
	     break;
     }
  }while(sw!=5);
}
void input_restricted_dQ :: insert()
{
   int data;
   if(rear>=n-1)
   {
     cout<<"\n\n\t\tQueue Overflow!!!";
     cout<<"\n\t\tStrike any key to exit.";
     getch();
     return;
   }
   cout<<"\n\n\t\tEnter your data: ";
   cin>>data;
   q[++rear]=data;

   if(front==-1)
     front=0;

   display();
}
void input_restricted_dQ :: my_delete(int x)
{
  int data;

  if(front==-1)
  {
    cout<<"\n\n\t\tQueue Underflow!!!";
    cout<<"\n\t\tStrike any key to exit.";
    getch();
    return;
  }
  if(x==2)
  {
    data=q[front];
    if(front==rear)
    {
      q[front]=0;
      front=rear=-1;
    }
    else
      q[front++]=0;
  }
  else if(x==3)
  {
    data=q[rear];
    if(front==rear)
    {
      q[front]=0;
      front=rear=-1;
    }
    else
      q[rear--]=0;
  }
  cout<<"\n\n\t'"<<data<<"' data is deleted.";
  display();
}
void input_restricted_dQ :: display()
{
  if(front==-1)
  {
    cout<<"\n\n\t\tQueue Underflow!!!";
    cout<<"\n\t\tStrike any key to exit.";
    getch();
    return;
  }
   cout<<"\n\n\t\t";
   for(int j=0;j<n;j++)
   { cout<<" "<<q[j]<<" ";}
   cout<<"\n\n\t\tStrike any key to exit";
   getch();
}
void main()
{
  clrscr();

   int n;
   cout<<"Enter no. of max data: ";
   cin>>n;

   input_restricted_dQ obj(n);
   obj.menu();
}