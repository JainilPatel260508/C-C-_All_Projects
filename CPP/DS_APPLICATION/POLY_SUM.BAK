//add of polynomial
#include<iostream.h>
#include<conio.h>

class node
{
   int cof,pow;

   public:

   node *next;
   int get_cof()
   {
      return cof;
   }
   int get_pow()
   {
      return pow;
   }
   node()
   {
      cof=NULL;
      pow=NULL;
      next=NULL;
   }
   node(int x,int y)
   {
      pow=x;
      cof=y;
      next=NULL;
   }
   ~node()
   {
      delete next;
      pow=NULL;
      cof=NULL;
   }
};

class linkedlist
{
   public:

   node *first,*last,*curr;
   linkedlist()
   {
      first=last=curr=NULL;
   }
   int get_first_cof()
   {
      return(first->get_cof());
   }
   void display();
   void input();
   linkedlist sum(linkedlist &);
};

void linkedlist :: display()
{
     if(first==NULL)
     {
       cout<<"\n\t List is empty";
       getch();
       return;
     }

   //  node *curr = new node();

     curr=first;
     cout<<"\n\n\t\t";
     while(curr!=NULL)
     {
	cout<<"("<<curr->get_cof()<<"x^"<<curr->get_pow()<<")+";
	curr=curr->next;
     }
     cout<<"\b ";
}

void linkedlist :: input()
{
  int x,y;

l1: do
    {
    clrscr();
       cout<<"\n\tEnter cofficient of term:(0 for terminate input) ";
       cin>>x;
       if(x==0)
	break;
       cout<<"\n\tEnter power of x: ";
       cin>>y;
       node *temp=new node(y,x);

       if(first==NULL)
       {
	   first=temp;
	   last=temp;
       }
       else if(y>=first->get_pow())
       {
	   if(first->get_pow()==y)
	   {
	      cout<<"\n\tYou have alread inpute that power...";
	      cout<<"\n\tStrike any key to re-input term...";
	      getch();
	      goto l1;
	   }
	 temp->next=first;
	 first=temp;
       }
       else
       {
	   curr=first;
	   while(curr->next->get_pow()>=y && curr->next!=NULL)
	   {   curr=curr->next;

	     if(curr->get_pow()==y)
	     {
		cout<<"\n\tYou have alread inpute that power...";
		cout<<"\n\tStrike any key to re-input term...";
		getch();
		goto l1;
	      }
	   }
	   if(curr->next==NULL)
	   {
	       curr->next=temp;
	       last=temp;
	   }
	   else
	   {
	       temp->next=curr->next;
	       curr->next=temp;
	   }
       }

    }while(x!=0);
}

linkedlist linkedlist :: sum(linkedlist &p2)
{
   linkedlist p3;
   int flag=0;

   curr=first;
   p2.curr=p2.first;

   while(curr!=NULL && p2.curr!=NULL)
   {
       node *temp=new node();
       if(curr->get_pow()==p2.curr->get_pow())
       {
	 /* node*/ *temp=node(curr->get_pow(),curr->get_cof()+p2.curr->get_cof());
	  curr=curr->next;
	  p2.curr=p2.curr->next;
       }
       else if(curr->get_pow()>p2.curr->get_pow())
       {
	  temp=curr;
	  curr=curr->next;
       }
       else
       {
	   temp=p2.curr;
	   p2.curr=p2.curr->next;
       }
       if(flag==0)
       {
	  // temp->next=p3.first;
	   p3.first=temp;
	   p3.last=temp;
	   p3.curr=p3.last;
	   flag=1;
       }
       else
       {
	  p3.curr->next=temp;
	  p3.last=temp;
	  p3.curr=p3.last;
       }
    //flag++;
   }

   while(curr!=NULL)
   {
	node *temp=new node();
	temp=curr;
	p3.curr->next=temp;
	p3.last=temp;
	p3.curr=p3.last;
	curr=curr->next;
   }

   while(p2.curr!=NULL)
   {
      node *temp=new node();
      temp=p2.curr;
      p3.curr->next=temp;
      p3.last=temp;
      p3.curr=p3.last;
      p2.curr=p2.curr->next;
   }

    return(p3);
}

void main()
{
   int n;
   linkedlist p1,p2,s;

   do{
       clrscr();
       cout<<"\n\t\t\t# Polynomial #\n";
       cout<<"\n\t 1.1st Polynomial";
       cout<<"\n\t 2.2nd Polynomial";
       cout<<"\n\t 3.Display";
       cout<<"\n\t 4.Sumation";
       cout<<"\n\t 5.Exit";

       cout<<"\n\n\t Enter your choice: ";
       cin>>n;

	switch(n)
	{
	    case 1:
		   p1.input();
		   break;

	    case 2:
		   p2.input();
		   break;

	    case 3:
		   if(p1.get_first_cof()!=NULL)
		     p1.display();


		   if(p2.get_first_cof()!=NULL)
		     p2.display();

		   if(s.get_first_cof()!=NULL)
		     s.display();

		   getch();
		   break;
	    case 4:
		   if(p1.first!=NULL && p2.first!=NULL)
		   {
		     s=p1.sum(p2);
		     cout<<"\n\n\tPoly_1: ";
		     p1.display();
		     cout<<"\n\tPoly_2: ";
		     p2.display();
		     cout<<"\n\n\tSum: ";
		     s.display();
		     getch();
		   }
		   else
		   {
		     cout<<"\n\n\t Enter two polynomial for sumation...";
		     cout<<"\n\t strike any key to input...";
		     getch();
		   }
		   break;

	    case 5:
		   break;

	    default:
		   cout<<"\n\tEnter an appropriate choice";
		   break;
	}
     }while(n!=5);

   getch();
}