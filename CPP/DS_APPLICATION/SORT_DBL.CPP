//shorted when data is entered...
#include<iostream.h>
#include<conio.h>

class node
{
   int info;

   public:

   node *next;
   node *prev;
   int get_info()
   {
      return info;
   }

   node()
   {
      info=0;
      next=NULL;
      prev=NULL;
   }
   node(int x)
   {
      info=x;
      next=NULL;
      prev=NULL;
   }
   ~node()
   {
      delete next;
      delete prev;
      info=NULL;
   }
};

class linkedlist
{
   public:

   node *first,*last,*curr;
   void ins();
   void display();
   linkedlist()
   {
      first=last=curr=NULL;
   }
};

void linkedlist :: display()
{
    if(first==NULL)
     {
       cout<<"\n\t List is empty";
       getch();
       return;
     }

     node *curr = new node(0);

     curr=first;
     cout<<"\n\n\t\t";
     while(curr!=NULL)
     {
	cout<<" "<<curr->get_info();
	curr=curr->next;
     }

     curr=last;
     cout<<"\n\n\t\t";
     while(curr!=NULL)
     {
	cout<<" "<<curr->get_info();
	curr=curr->prev;
     }

   getch();
}

void linkedlist :: ins()
{
   int x;
   cout<<"\n\tEnter data:- ";
   cin>>x;

   node *temp = new node(x);

   if(first==NULL)
   {
       first=temp;
       last=temp;
       cout<<"\n\t Data inserted succefully...";
       display();
       return;
   }
   if(x<first->get_info())
   {
       temp->next=first;
       first->prev=temp;
       first=temp;
       cout<<"\n\t Data inserted succefully...";
       display();
       return;
   }
   else
   {
       curr=first;
       while(x>=curr->next->get_info() && curr->next!=NULL)
	curr=curr->next;

       if(curr->next==NULL)
       {
	  last->next=temp;
	  temp->prev=last;
	  last=temp;
       }
       else
       {
	  temp->prev=curr;
	  temp->next=curr->next;
	  temp->next->prev=temp;
	  curr->next=temp;
	}
       cout<<"\n\t Data inserted succefully...";
       display();
       return;
   }
}
void main()
{
   int n;
   linkedlist obj;

   do{
       clrscr();
       cout<<"\n\t 1.Insert";
       cout<<"\n\t 2.Display";
       cout<<"\n\t 3.Exit";

       cout<<"\n\n\t Enter your choice: ";
       cin>>n;

	switch(n)
	{
	    case 1:
		  obj.ins();
		  break;
	    case 2:
		   obj.display();
		   break;

	    case 3:
		   break;

	    default:
		   cout<<"\n\tEnter an appropriate choice";
		   getch();
		   break;
	}
     }while(n!=3);

   getch();
}