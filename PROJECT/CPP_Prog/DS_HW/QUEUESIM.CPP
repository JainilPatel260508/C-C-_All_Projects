//simple queue
#include<iostream.h>
#include<conio.h>

class simple_queue
{
     int front,rear,*q,n;
  public:
     simple_queue();
//     ~simple_queue();
     void q_insert();
     void q_delete();
     void q_display();
     void menu();
};
simple_queue :: simple_queue()
{
    front=-1;
    rear=-1;
    cout<<"\n\tEnter no. of element in queue: ";
    cin>>n;
    q=new int[n];
}
void simple_queue :: q_insert()
{
  if(rear>=n-1)
  {
    cout<<"\n\n\t\t\tData overflow...";
    cout<<"\n\t\t\tStrike any key to exit.";
    getch();
    return;
  }
  int data;
  cout<<"\n\n\tEnter data to insert: ";
  cin>>data;

  q[++rear]=data;

  if(front==-1)
    front=0;
}
void simple_queue :: q_delete()
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
    front=-1;
    rear=-1;
  }
  else
    front++;

  cout<<"\n\n\t\t\t'"<<data<<"' is deleted from queue";
  cout<<"\n\t\t\tStrike any key to re-input.";
  getch();
}
void simple_queue :: q_display()
{
  if(front==-1)
  {
    cout<<"\n\n\t\t\tData underflow...";
    cout<<"\n\t\t\tStrike any key to exit.";
    getch();
    return;
  }
  cout<<"\n\n\t\tFront->";
  for(int i=front;i<=rear;i++)
     cout<<" "<<q[i]<<" ";
  cout<<"<-Rear";
  cout<<"\n\n\t\tStrike any key to exit.";
  getch();
}

void simple_queue :: menu()
{
    int c;
 do
 {
  clrscr();
  c=0;
    cout<<"\n\n\t\t\t1)Insert";
    cout<<"\n\t\t\t2)Delete";
    cout<<"\n\t\t\t3)Display";
    cout<<"\n\t\t\t4)Exit";
    cout<<"\n\t\t\tEnter your choice: ";
    cin>>c;

    switch(c)
    {
	case 1:
		q_insert();
		break;
	case 2:
		q_delete();
		break;
	case 3:
		q_display();
		break;
	case 4:
		break;
	default:
	 cout<<"\n\n\t\t\tEnter valid choice...";
	 cout<<"\n\t\t\tStrike any key to re-input.";
	 getch();
	 break;
    }
 }while(c!=4);
}

void main()
{
  clrscr();
	simple_queue obj;
  clrscr();
	obj.menu();
  getch();
}