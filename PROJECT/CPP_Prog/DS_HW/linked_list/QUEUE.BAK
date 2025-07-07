// queue using linked list
#include<iostream.h>
#include<conio.h>

class node
{
   int info;

   public:

   node *next;
   int get_info()
   {
      return info;
   }

   node()
   {
      info=0;
      next=NULL;
   }
   node(int x)
   {
      info=x;
      next=NULL;
   }
   ~node()
   {
      delete next;
      info=NULL;
   }
};

class queue
{
   public:
      node *front,*rear;

   queue()
   {
      front=rear=NULL;
   }
   void ins();
   void disp();
   void del();
};

void  queue :: ins()
{
   int x;

   cout<<"\n\t Enter Data: ";
   cin>>x;

   node *temp = new node(x);

   if(front==NULL)
    front=temp;
   else
     rear->next=temp;

     rear=temp;
     cout<<"\n\t Data entered successfully...";
     disp();
}

void  queue :: del()
{
   if(front==NULL)
   {
      cout<<"\n\tQueue is empty";
      getch();
      return;
   }
   node *temp = new node;
   temp=front;
   front=temp->next;
   cout<<"\n\n\t\t This '"<<temp->get_info()<<"' is deleted...";
   getch();
}

void  queue :: disp()
{
     if(front==NULL)
     {
       cout<<"\n\tQueue is empty";
       getch();
       return;
     }

     node *curr = new node(0);

     curr=front;
     cout<<"\n\n\t\t Front =>";
     while(curr!=NULL)
     {
	cout<<" "<<curr->get_info();
	curr=curr->next;
     }
     cout<<" <= Rear";
   getch();
}

void main()
{
   int n;
   queue obj;

   do{
       clrscr();
       cout<<"\n\t 1.Insert";
       cout<<"\n\t 2.Delete";
       cout<<"\n\t 3.Display";
       cout<<"\n\t 4.Exit";

       cout<<"\n\n\t Enter your choice: ";
       cin>>n;

	switch(n)
	{
	    case 1:
		  obj.ins();
		   break;

	    case 2:
		   obj.del();
		   break;

	    case 3:
		   obj.disp();
		   break;

	    case 4:
		    break;

	    default:
		   cout<<"\n\tEnter an appropriate choice";
		   break;
	}
     }while(n!=4);

   getch();
}