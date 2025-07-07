// stack
#include<iostream.h>
#include<conio.h>

class stack
{
    int s[20],top,n;
   public:
    void menu(void);
    void initial()
    {
	cout<<"\n\n\t\tEnter no. of maximum element in array: ";
	cin>>n;
	n-=2;
	top=-1;
    }

    void stack :: push(int data)
    {
	top++;
	s[top]=data;
	cout<<"\n\t\tData: "<<data<<" pushed sucessfully...";
	display();
    }

    int is_underflow()
    {
	if(top==-1)
	{
	  cout<<"\n\n\t\tStack is Underflow!!!";
	  getch();
	  return 1;
	}
	return 0;
    }

    void pop()
    {
	top-=1;
	cout<<"\n\n\t\tData: "<<s[top+1]<<" Popped sucessfully...";
	display();
    }

    void peep(int loc)
    {
	cout<<"\n\n\t\tData: "<<s[top-loc+1]<<" \n\t\tPeeped sucessfully...";
	getch();
    }

    int is_loc_exist(int loc)
    {
	if(top-loc+1<0 || loc<=0)
	{
	   cout<<"\n\n\t\tStack Underflow on Peep!!!";
	   getch();
	   return 1;
	}
	return 0;
    }

    void change(int data, int loc)
    {
	s[top-loc+1]=data;
	cout<<"\n\n\t\tData: "<<data<<" changed on "<<loc<<" location";
	display();
    }
    void display(void);
};

void stack :: menu()
{
  clrscr();
     int data=0,loc=0,sw=0;

	cout<<"\t\t\t\t #Stack Operation#";
	cout<<"\n\n1)Push";
	cout<<"\n2)Pop";
	cout<<"\n3)Peep";
	cout<<"\n4)Change";
	cout<<"\n5)Display";
	cout<<"\n6)Exit";
	cout<<"\n\nEnter your choice: ";
	cin>>sw;

	switch(sw)
	{
	    case 1:
		      if(top>n)
		      {
			cout<<"\n\n\t\tStack Overflow!!!";
			getch();
			break;
		      }
		      cout<<"\n\n\t\tEnter data to push: ";
		      cin>>data;
		      push(data);
		      break;
	    case 2:
		     if(is_underflow())
		       break;
		     pop();
		     break;
	    case 3:
			if(is_underflow())
			  break;
			cout<<"\n\n\t\tEnter location for Peep: ";
			cin>>loc;
			if(is_loc_exist(loc))
			  break;
			peep(loc);
			break;
	    case 4:
		     if(is_underflow())
		       break;
		       cout<<"\n\t\tEnter location for Change: ";
		       cin>>loc;
			if(is_loc_exist(loc))
			  break;
		       cout<<"\n\n\t\tEnter data for Change: ";
		       cin>>data;
		      change(data,loc);
		      break;
	    case 5:
		     display();
		     break;
	    case 6:
		     break;
	    default :
		     cout<<"\n\n\t\tEnter choice between 1 to 6";
		     getch();
		     break;
	}

	if(sw!=6)
	{ menu(); }
}

void stack :: display()
{
    int i=0;
	if(is_underflow())
	return;
	cout<<"\n\n\t\tTop==>  "<<s[top];
	for(i=top-1;i>=0;i--)
	  cout<<"\n\t\t        "<<s[i];
    getch();
}

void main()
{
clrscr();
   stack obj;

	  obj.initial();
	  obj.menu();
}