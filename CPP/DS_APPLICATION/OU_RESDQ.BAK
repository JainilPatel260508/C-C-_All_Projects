// input restricetd d queue
#include<iostream.h>
#include<conio.h>

int flag=0;
class output_restricted_dQ
{
   int front,rear,*q,n;
  public:
   void menu(void);
   output_restricted_dQ(int);
   ~output_restricted_dQ(void);
   void my_delete(void);
   void display(void);
   void insert(int);
};
output_restricted_dQ :: output_restricted_dQ(int x)
{
   n=x;
   q=new int[n];
   rear=front=-1;
   for(int j=0;j<n;j++)
   { q[j]=0;}
}
output_restricted_dQ :: ~output_restricted_dQ()
{
   delete q;
}
void output_restricted_dQ :: menu()
{
  int sw;
  do{
     sw=0;
     clrscr();
     cout<<"\n\n1)Right Insert";
     cout<<"\n2)Left Insert";
     cout<<"\n3)Delete";
     cout<<"\n4)Display";
     cout<<"\n5)Exit";
     cout<<"\n\nEnter Your Choice: ";
     cin>>sw;
     switch(sw)
     {
	 case 1:
	     insert(sw);
	     break;
	 case 2:
	     insert(sw);
	     break;
	 case 3:
	     my_delete();
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
void output_restricted_dQ :: display()
{
   cout<<"\n\n\t\t";
   for(int j=0;j<n;j++)
   { cout<<" "<<q[j]<<" ";}
   cout<<"\n\n\t\tStrike any key to exit";
   getch();
}
void output_restricted_dQ :: my_delete()
{
  if(front==-1)
  {
    cout<<"\n\n\t\t\tData underflow...";
    cout<<"\n\t\t\tStrike any key to exit.";
    getch();
    return;
  }
  int data=0;
  data=q[front];

  if(front==rear)
  {
    q[front]=0;
    front=rear=-1;
  }
  else
    q[front++]=0;

  if(front>=n+1)
    front=-1;
  cout<<"\n\n\t\t\t'"<<data<<"' is deleted from queue";
  display();
}
void output_restricted_dQ :: insert(int x)
{
   if(x==2&&q[0]!=0)
   {
    cout<<"\n\n\t\t\tData underflow...";
    cout<<"\n\t\t\tStrike any key to exit.";
    getch();
    return;
   }
   if(x==1&&q[n-1]!=0)
   {
    cout<<"\n\n\t\t\tData underflow...";
    cout<<"\n\t\t\tStrike any key to exit.";
    getch();
    return;
   }

    int data;
    cout<<"\n\n\tEnter data to insert: ";
    cin>>data;

   if(x==1)
   {
     q[++rear]=data;

     if(front==-1)
     front=0;
   }
   else if(x==2)
   {
      if(rear==-1)
      {
	rear=front=n-1;
	q[front]=data;
      }
      else
      q[--front]=data;
   }
   display();
}

void main()
{
  clrscr();

   int n;
   cout<<"Enter no. of max data: ";
   cin>>n;

   output_restricted_dQ obj(n);

   obj.menu();
}