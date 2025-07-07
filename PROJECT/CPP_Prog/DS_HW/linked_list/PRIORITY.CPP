// priority queue
#include<iostream.h>
#include<conio.h>

class node
{
   int info;
   int p;
   public:

   node *next;
   int get_info()
   {  return info;  }
   int get_p()
   {  return p;  }

   node()
   {
      info=0;
      p=0;
      next=NULL;
   }
   node(int x,int y)
   {
      info=x;
      p=y;
      next=NULL;
   }
   ~node()
   {
      delete next;
      info=NULL;
   }
};

class priority_Q
{
   public:
      node *front,*rear;

   priority_Q()
   {
      front=rear=NULL;
   }
   void ins();
   void disp();
   void del()
   {
      if(front==NULL)
      {
	 cout<<"\n\n\tData underflow...";
	 getch();
	 return;
      }
      node *temp = new node;
      temp=front;
      front=temp->next;
      cout<<"\n\n\t\t This '"<<temp->get_info()<<"' is deleted...";
      getch();
   }
};

void priority_Q :: ins()
{
   int x,pr;

   cout<<"\n\tEnter priority: ";
   cin>>pr;

   cout<<"\n\t Enter data: ";
   cin>>x;

   if(pr<0)
   {
      cout<<"\n\tEnter a valid priority...";
      getch();
      return;
   }

   node *temp = new node(x,pr);
   node *curr = new node(0,NULL);

   if(front==NULL)
   {
      front=temp;
      rear=temp;
     cout<<"\n\t Data inserted succefully...";
     getch();
     return;
   }

   if(temp->get_p() < front->get_p())
   {
      temp->next=front;
      front=temp;
      cout<<"\n\t Data inserted succefully...";
      getch();
      return;
   }

   if(temp->get_p() >= rear->get_p())
   {
       rear->next=temp;
       rear=temp;
       cout<<"\n\t Data inserted succefully...";
       getch();
       return;
   }

   curr=front;

   while(temp->get_p() >= curr->next->get_p())
     curr=curr->next;

   temp->next=curr->next;
   curr->next=temp;
   cout<<"\n\t Data inserted succefully...";
   getch();
   return;
}

void priority_Q :: disp()
{
   int i;
   node *curr = new node();
   curr=front;

  if(front==NULL)
  {
    cout<<"\n\n\tData underflow...";
    getch();
    return;
  }

  cout<<"\n\n    Priority\tQueue";
  while(curr!=NULL)
  {
    cout<<"\n\n\t"<<curr->get_p()<<"\t";
    i=curr->get_p();
    while(curr->get_p()==i)
    {
      cout<<"\t"<<curr->get_info();
      curr=curr->next;
    }
  }
  cout<<"\n\n\t\tStrike any key to exit.";
  getch();
}

void main()
{
   int n;
   priority_Q obj;

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