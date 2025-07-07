//Sorting linkedlist

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

   node *first,*last,*curr;
   void menu_ins();
   void begin_ins();
   void aft_ins();
   void pos_ins();
   void menu_del();
   void display();
   void create_LL();
   void begin_del();
   void end_del();
   void data_del();
   void pos_del();
   void sorting();
   linkedlist()
   {
      first=last=curr=NULL;
   }
};

void linkedlist :: create_LL()
{
   int x;

   cout<<"\n\t Enter Data: ";
   cin>>x;

   node *temp = new node(x);

   if(first==NULL)
    first=temp;
   else
     last->next=temp;

     last=temp;
     cout<<"\n\t Data entered successfully...";
     display();
}

void linkedlist :: aft_ins()
{
   int x;

   cout<<"\n\t Enter data: ";
   cin>>x;

   node *temp = new node(x);
   curr=first;

   cout<<"\n\t After which data you want to add: ";
   cin>>x;

   while(curr->get_info()!=x && curr->next!=NULL)
     curr=curr->next;

   if(curr->next==NULL && curr->get_info()!=x)
   {
      cout<<"\n\t Data not found...";
      getch();
      return;
   }
   else if(curr->next==NULL)
   {
      curr->next=temp;
      last=temp;
   }
   else
   {
      temp->next=curr->next;
      curr->next=temp;
   }

   cout<<"\n\t Data inserted succefully...";
   display();
}

void linkedlist :: pos_ins()
{
   int x,pos;

   cout<<"\n\t Enter data: ";
   cin>>x;

   node *temp = new node(x);

   curr=first;

   cout<<"\n\tEnter position no.: ";
   cin>>pos;
   for(int i=1;i<pos-1 && curr->next!=NULL;i++)
     curr=curr->next;

     if(curr->next==NULL&&i!=pos-1)
     {
	cout<<"\n\t Position invalid...";
	getch();
	return;
     }
     else if(curr->next!=NULL)
     {
       temp->next=curr->next;
       curr->next=temp;
     }

     if(i==pos-1)
     {
	 if(first==NULL)
	   first=temp;
	 else
	   last->next=temp;

	 last=temp;
     }
     cout<<"\n\t Data inserted succefully...";
     display();
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

   cout<<"\n\t Enter data: ";
   cin>>x;

   node *temp = new node(x);

     temp->next=first;
     first=temp;

    if(last==NULL)
       last=temp;

   cout<<"\n\t Data inserted successfuly...";
   display();
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
     while(curr!=NULL)
     {
	cout<<" "<<curr->get_info();
	curr=curr->next;
     }
   getch();
}

void linkedlist :: menu_del()
{
   int n;

  do{
       clrscr();
       cout<<"\n\t\t\t# Delete Menu #\n";
       cout<<"\n\t 1.Begin Delete";
       cout<<"\n\t 2.End Delete";
       cout<<"\n\t 3.Specific Data Delete";
       cout<<"\n\t 4.Specific Position Delete";
       cout<<"\n\t 5.Exit";
       cout<<"\n\n\t Enter your choice: ";
       cin>>n;

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
   node *temp = new node;
   temp=first;
   first=temp->next;
   cout<<"\n\n\t\t This '"<<temp->get_info()<<"' is deleted...";
   getch();
}

void linkedlist :: end_del()
{
   node *temp = new node;
   node *curr = new node;
   curr=first;

   while(curr->next!=last)
      curr=curr->next;
   temp=last;
   last=curr;
   last->next=NULL;
   cout<<"\n\n\t\t '"<<temp->get_info()<<"' is deleted...";
   getch();
}

void linkedlist :: data_del()
{
   int n;

   cout<<"\n\n\t Enter data to delete: ";
   cin>>n;

   node *curr = new node;
   node *temp = new node;

   if(first->get_info()==n)
   {
     begin_del();
     curr=first;
     return;
   }
   if(last->get_info()==n)
   {
     end_del();
     curr=first;
     return;
   }
   curr=first;

   while(curr->next->get_info()!=n && curr->next->next!=NULL)
      curr=curr->next;

   if(curr->next->next==NULL)
   {
      cout<<"\n\n\t Data No Found...";
      return;
   }

   temp=curr->next;
   curr->next=temp->next;
   cout<<"\n\n\t\t This '"<<temp->get_info()<<"' is deleted...";
   getch();
}

void linkedlist :: pos_del()
{
   int n;

   node *curr = new node;
   node *temp = new node;

   cout<<"\n\n\t Enter position to delete: ";
   cin>>n;

   curr=first;
   for(int i=1;i<n && curr->next!=NULL;i++)
      curr=curr->next;

   if(curr->next==NULL)
   {
      cout<<"\n\n\t Data No Found...";
      return;
   }
   temp=curr->next;
   curr->next=temp->next;
   cout<<"\n\n\t\t This '"<<temp->get_info()<<"' is deleted...";

   getch();
}

void linkedlist :: sorting()
{
   node *curr = new node;
   node *x = new node;
   int temp;
   char s;

   x=NULL;

   l1:
   cout<<"\n\t1.For ascending sort press(a)";
   cout<<"\n\t2.For descending sort press(d)";
   cin>>s;


   if(s=='A' || s=='a')
   {
     while(x!=first)
     {
       curr=first;

       while(curr->next!=x)
       {
	 if(curr->get_info() > curr->next->get_info())
	 {
	    temp=curr->get_info();
	    curr->put_info(curr->next->get_info());
	    curr->next->put_info(temp);
	 }
	 curr=curr->next;

       }
       x=curr;
     }

   }

   else if(s=='D' || s=='d')
   {
     while(x!=first)
     {
       curr=first;

       while(curr->next!=x)
       {
	 if(curr->get_info() < curr->next->get_info())
	 {
	    temp=curr->get_info();
	    curr->put_info(curr->next->get_info());
	    curr->next->put_info(temp);
	 }
	 curr=curr->next;

       }
       x=curr;
     }

   }

   else
   {
     cout<<"\n\tEnter Appropriate choice...";
     getch();
     goto l1;
   }

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
       cout<<"\n\t 5.Sorting";
       cout<<"\n\t 6.Exit";

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
		   obj.sorting();
		   break;

	    case 6:
		   break;

	    default:
		   cout<<"\n\tEnter an appropriate choice";
		   break;
	}
     }while(n!=6);

   getch();
}