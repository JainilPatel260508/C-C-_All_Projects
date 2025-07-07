//Circular Doubly Linked list

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
   void menu_ins();
   void begin_ins();

   void pos_ins();
   void aft_ins();
   void menu_del();
   void display();
   void create_LL();
   void begin_del();
   void end_del();
   void data_del();
   void pos_del();
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
     while(curr->next!=first)
     {
	cout<<" "<<curr->get_info();
	curr=curr->next;
     }
     cout<<" "<<curr->get_info();

     curr=last;
     cout<<"\n\n\t\t";
     while(curr->prev!=last)
     {
	cout<<" "<<curr->get_info();
	curr=curr->prev;
     }
     cout<<" "<<curr->get_info();
   getch();
}

void linkedlist :: menu_ins()
{
   int n;

   do{
       clrscr();
       cout<<"\n\t\t\t# Insert Menu #\n";
       cout<<"\n\t 1.Begin Insert";
       cout<<"\n\t 2.End Insert";
       cout<<"\n\t 3.After Data Insert";
       cout<<"\n\t 4.Specific Position Insert";
       cout<<"\n\t 5.Exit";
       cout<<"\n\n\t Enter your choice: ";
       cin>>n;

       switch(n)
       {
	  case 1:
		   begin_ins();
		   break;

	  case 2:
		   create_LL();
		   break;

	  case 3:
		   aft_ins();
		   break;

	  case 4:
		   pos_ins();
		   break;
	  case 5:
		   break;

	  default :
		   cout<<"\n\t Enter an appropriate choice";
		   getch();
       }
     }while(n!=5);

   getch();
}

void linkedlist :: begin_ins()
{
     int x;

     cout<<"\n\t Enter Data: ";
     cin>>x;

     node *temp = new node(x);

     if(first==NULL)
     {
	first=temp;
	last=temp;
     }

     temp->prev=last;
     temp->next=first;
     first->prev=temp;
     last->next=temp;
     first=temp;

     display();
     getch();
}

void linkedlist :: create_LL()
{
    int x;

    cout<<"\n\t Enter Data: ";
    cin>>x;

    node *temp = new node(x);

    if(first==NULL)
     {
	first=temp;
	last=temp;
     }

     temp->prev=last;
     temp->next=first;
     first->prev=temp;
     last->next=temp;
     last=temp;

     display();
     getch();

}

void linkedlist :: aft_ins()
{
    int x,n;

    cout<<"\n\t\tAfter which data you want to insert: ";
    cin>>n;

    node *curr = new node(0);

    curr=first;
    while(curr->get_info()!=n && curr->next!=first)
    curr=curr->next;

    if(curr->next==first && curr->get_info()!=n)
    {
       cout<<"\n\tData Not Found...";
       getch();
       return;
    }
    else if(curr->next==first)
    {
      create_LL();
      return;
    }
    else
    {
       cout<<"\n\t Enter Data: ";
       cin>>x;

       node *temp = new node(x);

	temp->prev=curr;
	temp->next=curr->next;
	temp->next->prev=temp;
	curr->next=temp;
    }
    display();
}

void linkedlist :: pos_ins()
{
    int x,pos;

    cout<<"\n\tEnter position: ";
    cin>>pos;

    if(pos==1)
    {
       begin_ins();
       return;
    }

    node *curr = new node(0);

    curr=first;
    for(int i=1 ; i<pos-1 && curr->next!=first ; i++)
    curr=curr->next;

    if(curr->next==first && i!=pos-1)
    {
       cout<<"\n\tPosition invalid...";
       getch();
       return;
    }
    else if(curr->next==first)
    {
      create_LL();
      return;
    }
    else
    {
       cout<<"\n\t Enter Data: ";
       cin>>x;

       node *temp = new node(x);

	temp->prev=curr;
	temp->next=curr->next;
	temp->next->prev=temp;
	curr->next=temp;
    }
    display();
}
void linkedlist :: menu_del()
{
   int n;

  do{
       if(first==NULL)
      {
	 cout<<"\n\n\t\tLinked List is Empty..";
	 getch();
	 return;
      }
       clrscr();
       cout<<"\n\t\t\t# Delete Menu #\n";
       cout<<"\n\t 1.Begin Delete";
       cout<<"\n\t 2.End Delete";
       cout<<"\n\t 3.Specific Data Delete";
       cout<<"\n\t 4.Specific Position Delete";
       cout<<"\n\t 5.Exit";
       cout<<"\n\n\t Enter your choice: ";       cin>>n;

       switch(n)
       {
	  case 1:
		   begin_del();
		   break;

	  case 2:
		   end_del();
		   break;

	  case 3:
		   data_del();
		   break;

	  case 4:
		   pos_del();
		   break;
	  case 5:
		   break;

	  default :
		   cout<<"\n\t Enter an appropriate choice";
		   getch();
     }
   }while(n!=5);

}
void linkedlist :: begin_del()
{
     if(last==first)
     {
	 cout<<"\n\n\t\t '"<<first->get_info()<<"' is deleted...";
	 first=last=curr=NULL;
	 getch();
	 return;
      }
	node *temp = new node(0);

	temp=first;
	temp->next->prev=last;
	last->next=temp->next;
	first=temp->next;

	cout<<"\n\t"<<temp->get_info()<<" is successfully deleted";

	display();
}
void linkedlist :: end_del()
{
     if(last==first)
     {
	 cout<<"\n\n\t\t '"<<first->get_info()<<"' is deleted...";
	 first=last=curr=NULL;
	 getch();
	 return;
      }
    node *temp = new node(0);

    temp=last;
    temp->prev->next=first;
    first->prev=temp->prev;
    last=temp->prev;

    cout<<"\n\t"<<temp->get_info()<<" is successfully deleted";

    display();
}

void linkedlist :: data_del()
{
      int n;

   cout<<"\n\n\t Enter data to delete: ";
   cin>>n;

   if(first->get_info()==n)
   {
     begin_del();
     return;
   }
   if(last->get_info()==n)
   {
     end_del();
     return;
   }

   node *curr = new node;

   curr=first;

   while(curr->next->get_info()!=n && curr->next!=first)
      curr=curr->next;

   if(curr->next==first && curr->next->get_info()!=n)
   {
      cout<<"\n\n\t Data No Found...";
      getch();
      return;
   }

   node *temp = new node;
   temp=curr->next;
   temp->next->prev=curr;
   curr->next=temp->next;
   cout<<"\n\n\t\t '"<<temp->get_info()<<"' is deleted...";
   getch();

   display();
}

void linkedlist :: pos_del()
{
   int n;

   node *curr = new node;

   cout<<"\n\n\t Enter position to delete: ";
   cin>>n;

   if(n==1)
   {
      begin_del();
      return;
   }

   curr=first;
   for(int i=1;i<n-1 && curr->next!=first;i++)
      curr=curr->next;

   if(curr->next->next==first && i!=n-1)
   {
      cout<<"\n\n\t position invalid...";
      getch();
      return;
   }
   else if(curr->next->next==first)
   {
      end_del();
      return;
   }
   node *temp = new node;

   temp=curr->next;
   temp->next->prev=curr;
   curr->next=temp->next;
   cout<<"\n\n\t\t This '"<<temp->get_info()<<"' is deleted...";

   getch();
   display();
}


void main()
{
   int n;
   linkedlist obj;

   do{
       clrscr();
       cout<<"\n\t\t\t# Main Menu #\n";
       cout<<"\n\t 1.Create Linked List";
       cout<<"\n\t 2.Insert";
       cout<<"\n\t 3.Delete";
       cout<<"\n\t 4.Display";
       cout<<"\n\t 5.Exit";

       cout<<"\n\n\t Enter your choice: ";
       cin>>n;

	switch(n)
	{
	    case 1:
		  obj.create_LL();
		   break;

	    case 2:
		   obj.menu_ins();
		   break;

	    case 3:
		 obj.menu_del();
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

}