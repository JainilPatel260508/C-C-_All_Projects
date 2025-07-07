/*Stack
    ->push
    ->pop
    ->peep
    ->display*/

#include<iostream.h>
#include<conio.h>


class node
{
   int info;

   public:

   node *prev;

   int get_info()
   {
      return info;
   }

   node()
   {
      info=0;
      prev=NULL;
   }
   node(int x)
   {
      info=x;
      prev=NULL;
   }

   ~node()
   {
      delete prev;
      info=NULL;
   }
};

class stack
{
   public:

   node *bottom,*top;

   void push();
   void pop();
   void peep();
   stack()
   {
      bottom=top=NULL;
   }
   void display();

};

void stack :: push()
{
   int x;

   cout<<"\n\t Enter Data: ";
   cin>>x;

   node *temp = new node(x);

   if(top==NULL)
    bottom=temp;
   else
     top->prev=temp;

     top=temp;
     cout<<"\n\t Data entered successfully...";
     display();

}

void stack :: pop()
{
   node *temp = new node;
   node *curr = new node;
   curr=bottom;

   while(curr->prev!=top)
      curr=curr->prev;
   temp=top;
   top=curr;
   top->prev=NULL;

   cout<<"\n\t '"<<temp->get_info()<<"' is deleted";
   getch();
}

void stack :: peep()
{
   int pos;

//   node *temp = new node(0);
   node *curr = new node(0);
   curr=bottom;

   cout<<"\n\tEnter position no.: ";
   cin>>pos;
   for(int i=1;i<pos && curr->prev!=NULL;i++)
     curr=curr->prev;

     if(curr->prev==NULL&&i!=pos)
     {
	cout<<"\n\t Position invalid...";
	getch();
	return;
     }

     cout<<"\n\t "<<curr->get_info();

     getch();
}

void stack :: display()
{
     if(bottom==NULL)
     {
       cout<<"\n\tStack is empty";
       getch();
       return;
     }

     node *curr = new node(0);

     curr=bottom;
     cout<<"\n\n\t\t Bottom =>";
     while(curr!=NULL)
     {
	cout<<" "<<curr->get_info();
	curr=curr->prev;
     }
     cout<<" <= Top";
   getch();
}


void main()
{
   int n;
   stack obj;

   do{
       clrscr();
       cout<<"\n\t 1.Push";
       cout<<"\n\t 2.Pop";
       cout<<"\n\t 3.Peep";
       cout<<"\n\t 4.Display";
       cout<<"\n\t 5.Exit";

       cout<<"\n\n\t Enter your choice: ";
       cin>>n;

	switch(n)
	{
	    case 1:
		  obj.push();
		   break;

	    case 2:
		   obj.pop();
		   break;

	    case 3:
		   obj.peep();
		   break;

	    case 4:
		   obj.display();
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


