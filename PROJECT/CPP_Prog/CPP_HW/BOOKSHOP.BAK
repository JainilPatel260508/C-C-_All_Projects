/*  Book store

    1. insert
	 -> ID
	 -> Title
	 -> Author
	 -> Publisher
	 -> price
	 -> stock
    2. sell
    3. display
    4. update price
    5. status
*/

#include<iostream.h>
#include<conio.h>
#include<string.h>

static int st, ust;

class book
{
    int *id, *stock, n, count;
    char **title, **author, **pub;
    float *price;

    public:

    book(int );
    void menu(void);
    void insert(void);
    void sell(void);
    void update_price(void);
    void update_stock(void);
    void display(void);
};

book :: book(int x)
{
   n=x;
   id = new int[n];
   stock = new int[n];
   price = new float[n];
   title = new char*[n];
   author = new char*[n];
   pub = new char*[n];
   count = ust = st = 0;
   for(int i=0; i<n; i++)
   {
      title[i] = new char[15];
      author[i] = new char[15];
      pub[i] = new char[15];
   }

   for(i=0; i<n; i++)
   {
      id[i]=stock[i]=price[i]=0;
   }
}

void book :: menu(void)
{
   int n;
   do
   {
   clrscr();

      cout<<"\n\t\t1. Insert";
      cout<<"\n\t\t2. Sell";
      cout<<"\n\t\t3. Update Price";
      cout<<"\n\t\t4. Update Stock";
      cout<<"\n\t\t5. Status";
      cout<<"\n\t\t6. Display";
      cout<<"\n\t\t7. Exit";

      cout<<"\n\n\t\t\tEnter your choice: ";
      cin>>n;

      switch(n)
      {
	 case 1:
		 insert();
		 break;

	 case 2:
		 sell();
		 break;

	 case 3:
		 update_price();
		 break;

	 case 4:
		 update_stock();
		 break;

	 case 5:
		 cout<<"\n\t Total Transaction "<<st+ust;
		 cout<<"\n\t Successfull Transaction"<<st;
		 cout<<"\n\t Unsuccessfull Transaction"<<ust;
		 break;

	 case 6:
		 display();
		 break;

	 case 7:
		break;

	 default:
		cout<<"\n\n\tEnter no. between 1 to 6";
		getch();
      }
    }while(n!=7);
}

void book :: insert(void)
{
   if(count>n)
   {
      cout<<"\n\t No. of book has reached at maximum...";
      getch();
      return;
   }

   cout<<"\n\t Enter Id no.: ";
   cin>>id[count];

   cout<<"\n\t Enter Title of book: ";
   cin>>title[count];

   cout<<"\n\t Enter Author of book: ";
   cin>>author[count];

   cout<<"\n\t Enter Publisher of book: ";
   cin>>pub[count];

   cout<<"\n\t Enter Price of book: ";
   cin>>price[count];

   cout<<"\n\t Enter Stock of book: ";
   cin>>stock[count];

   cout<<"\n\t Book inserted successfully...";
   count++;
   getch();
}

void book :: sell()
{
    char t[15],aut[15],c;
    int x=-1;
    cout<<"\n\t Enter Title of book you want: ";
    cin>>t;
    cout<<"\n\t Enter Author of book: ";
    cin>>aut;

    for(int i=0;i<count;i++)
    {
       if(stricmp(t,title[i])==0 && stricmp(aut,author[i])==0)
       {
	  x=i;
	  break;
       }
    }
    if(x==-1)
    {
	cout<<"\n\t Book not Found...";
	getch();
	return;
    }
    cout<<"\n\n\t Price of '"<<t<<"' : "<<price[x];
    cout<<"\n\t Stock of '"<<t<<"' : "<<stock[x];
    cout<<"\n\n\t Enter no. of book you want: ";
    cin>>x;
    if(x>stock[i])
    {
	cout<<"\n\n\t Required no. of books not available...";
l1:	cout<<"\n\t Do you want '"<<stock[i]<<"' books?";
	cout<<"\n\t total price is "<<price[i]*stock[i]<<" (yes(Y),no(N))";
	cin>>c;
	if(c=='y'||c=='Y')
	{
		cout<<"\n\t Transaction is successfully completed !!!";
		cout<<"\n\t Total transaction is "<<price[i]*stock[i];
		st++;
		stock[i]=0;
		getch();
	}
	else if (c=='n'|| c=='N')
	{
		cout<<"\n\t Sorry for the inconvinience...";
		ust++;
		getch();
	}
	else
	{
		cout<<"\n\t Enter appropriate key";
		getch();
		goto l1;
	}
    }
    else
    {
		cout<<"\n\t Transaction is successfully completed !!!";
		cout<<"\n\t Total transaction is "<<price[i]*x;
		st++;
		stock[i]=stock[i]-x;
		getch();
    }
}

void book :: update_price()
{
   int id_1=0,x=-1;
   cout<<"\n\t Enter Id no.: ";
   cin>>id_1;

   for(int i=0;i<count;i++)
   {
      if(id_1==id[i])
      {
	x=i;
	break;
      }
   }

   if(x==-1)
   {
      cout<<"\n\t Book not found...";
      getch();
      return;
   }

   cout<<"\n\t Enter new price: ";
   cin>>price[i];
   cout<<"Price inserted successfully";
}

void book :: update_stock(void)
{
   int id_1=0,x=-1;
   cout<<"\n\t Enter Id no.: ";
   cin>>id_1;

   for(int i=0;i<count;i++)
   {
      if(id_1==id[i])
      {
	x=i;
	break;
      }
   }

   if(x==-1)
   {
      cout<<"\n\t Book not found...";
      getch();
      return;
   }
   cout<<"\n\t Current stock: "<<stock[i];
   cout<<"\n\t Enter new stock: ";
   cin>>x;
   stock[i]=stock[i]+x;
   cout<<"\n\t New stock: "<<stock[i];

}

void book :: display(void)
{
     cout<<"\n\nId\tTitle\t\tAuthor\t\tPublisher\tPrice\t\tStock";
     cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

     for(int i=0;i<count;i++)
      cout<<"\n"<<id[i]<<"\t"<<title[i]<<"\t\t"<<author[i]<<"\t\t"<<pub[i]<<"\t\t"<<price[i]<<"\t\t"<<stock[i];

     getch();
}


void main()
{
   int n;

   clrscr();

   cout<<"\n\t Enter maximum no. of books: ";
   cin>>n;

   book obj(n);

   obj.menu();

   getch();
}
