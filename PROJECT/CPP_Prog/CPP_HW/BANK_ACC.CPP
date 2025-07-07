//Bank Account

#include<iostream.h>
#include<conio.h>
#include<string.h>

static int count;
int ask_no();
int cond_underflow();

class account
{
   int acc_no,acc_type;
   float balance;
   char *name;

   public:


	  void create();
	  void deposit()
	  {
	    float amt;

	    cout<<"\n\n\tEnter the amount to be deposited:";
	    cin>>amt;

	    balance=balance+amt;
	    cout<<"\n\tMoney Deposited Successfully!!";

	    getch();
	  }

	  char * pass()
	  {
	    return name;
	  }
	  void withdraw();
	  void search(char []);
	  void disp();
	  friend account comp_name(account);

};

void account :: create()
{
  int i,m,nam;

  cout<<"\n\n\tEnter your name: ";
  cin>>nam;
  strcpu(name,nam);

l1:
  cout<<"\n\tWhat type of Account do you want to create?";
  cout<<"\n\n\t1) Saving Account \n\t2) Current Account \n\t";
  cout<<"\n\n\t\tEnter your choice: ";
  cin>>acc_type;

  if(acc_type!=2 && acc_type!=1)
  {
    cout<<"\n\n\tEnter appropriate choice";
    getch();
    goto l1;
  }
  else if(acc_type==1)
  {
      balance=500;
      cout<<"\n\tYour Saving account created successfully!!";
  }
  else
  {
      balance=1000;
      cout<<"\n\tYour Current account created successfully!!";
  }

   acc_no=count+1;

   getch();
}

void account :: withdraw()
{
  float amt;

  if(balance==0)
  {
     cout<<"\n\tYour Bank balance is zero";
  }

   cout<<"\n\tEnter amount to be withdrawn: ";
   cin>>amt;

   if(balance-amt<0)
   {
      cout<<"\n\tYou do not have sufficient balance";
      getch();
      return;
   }

   balance=balance-amt;
   cout<<"\n\tMoney Withdrawn Successfully!!";

   getch();
}

void account :: disp()
{
       cout<<"\n\tName: "<<name;
       cout<<"\n\tAccount no.: "<<acc_no;
       cout<<"\n\tBalance: "<<balance;
       if(acc_type==1)
       cout<<"\n\tAccount Type: Saving account";
       else
       cout<<"\n\tAccount Type: Current account";
}

void account :: search(char nm[])
{
    if(strcmp(name,nm)==0)
    {
	disp();
	 getch();
    }
}

void main()
{
  account acc[10];

   int n,i,j;
   char nm[10];

   do{
      clrscr();

      cout<<"\n\t\t1. Create Account";
      cout<<"\n\t\t2. Deposit";
      cout<<"\n\t\t3. Withdraw";
      cout<<"\n\t\t4. Search";
      cout<<"\n\t\t5. Display";
      cout<<"\n\t\t6. Exit";

      cout<<"\n\n\t\t\tEnter your choice: ";
      cin>>n;

      switch(n)
      {
	 case 1:
		 acc[count].create();
		 count++;
		 break;

	 case 2:
		 if(cond_underflow()==0)
		 {
		   i=ask_no();
		   acc[i-1].deposit();
		 }
		 else
		 cout<<"Data underflow";
		 break;

	 case 3:
		 if(cond_underflow()==0)
		 {
		   i=ask_no();
		   acc[i-1].withdraw();
		 }
		 else
		 cout<<"Data underflow";
		 break;

	 case 4:
		 if(cond_underflow()==0)
		 {
		   char nm[10];

		   cout<<"\n\tEnter name to search:";
		   cin>>nm;

			 for(j=0;j<count;j++)
			 {
			     acc[j].search(nm);
			 }

			 if(j==count)
			 cout<<"\n\tName not found";
		   getch();
		 }
		 else
		 cout<<"Data underflow";
		 break;

	    /*	   char nm_1[10];

		   cout<<"\n\tEnter name to search:";
		   cin>>nm_1;

		   for(j=0;j<count;j++)
		   {
		     if(strcmp(nm_1,acc[i].pass())==0)
		       break;
		   }
		   acc[i].disp();*/

	 case 5:

		 if(cond_underflow()==0)
		 {
		     for(i=0;i<count;i++)
		     acc[i].disp();

		     getch();
		 }
		 else
		 cout<<"Data underflow";
		 break;

	 case 6:
		break;

	 default:
		cout<<"\n\n\tEnter no. between 1 to 6";
		getch();
      } getch();
    }while(n!=6);
}

int ask_no()
{
   int n;

l1:
   cout<<"\n\tEnter your Account No.: ";
   cin>>n;

   if(n<1 || n>count)
   {
      cout<<"\n\tEnter correct account no.\n";
      goto l1;
   }
   return(n);
}

int cond_underflow()
{
      if(count==0)
       return 1;
      else
       return 0;
}