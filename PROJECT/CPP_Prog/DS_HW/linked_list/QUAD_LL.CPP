// Quadratic Linked List Addition

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
   void put_info(int x)
   {
      info=x;
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

class linkedlist
{
   public:

   node *first,*last,*curr,*first2,*curr2,*last2;
   void display();
   void create_LL(int);
   void create_LL2(int);
   void add_LL(linkedlist &);
   linkedlist()
   {
      first=last=curr=NULL;
      first2=last2=curr2=NULL;
   }
};

void linkedlist :: create_LL( int x)
{
   node *temp = new node(x);

   if(first==NULL)
    first=temp;
   else
     last->next=temp;

     last=temp;
}

void linkedlist :: create_LL2( int x)
{
   node *temp = new node(x);

   if(first2==NULL)
    first2=temp;
   else
     last2->next=temp;

     last2=temp;
}

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
	 if(curr->get_info()!=0)
	cout<<" "<<curr->get_info()<<"x^2 ";
	curr=curr->next;

	if(curr->get_info()>0)
	   cout<<"+";
	   if(curr->get_info()!=0)
	   cout<<" "<<curr->get_info()<<"x ";
	   curr=curr->next;


	if(curr->get_info()>0)
	cout<<"+";
	if(curr->get_info()!=0)
	cout<<" "<<curr->get_info();

   getch();
}
void linkedlist :: add_LL( linkedlist &y)
{
  curr=first;
  curr2=first2;

  curr->put_info(curr->get_info() + y.curr2->get_info());
}

void main()
{
   int n;
   linkedlist obj,obj2;

   clrscr();

   int a,b,c,d,e,f;

   cout<<"\n\t Enter co-eff. of x^2: ";
   cin>>a;
   obj.create_LL(a);
   cout<<"\n\t Enter co-eff. of x: ";
   cin>>b;
   obj.create_LL(b);
   cout<<"\n\t Enter constant term: ";
   cin>>c;
   obj.create_LL(c);

 //  obj.display();

   cout<<"\n\t Enter co-eff. of x^2: ";
   cin>>d;
   obj2.create_LL2(d);
   cout<<"\n\t Enter co-eff. of x: ";
   cin>>e;
   obj2.create_LL2(e);
   cout<<"\n\t Enter constant term: ";
   cin>>f;
   obj2.create_LL2(f);

//   obj2.display();
//   obj2.create_LL();
   obj.add_LL(obj2);
   obj.display();


   getch();
}