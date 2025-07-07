//Priority Queue

#include<iostream.h>
#include<conio.h>


class Pr_queue
{
    int **q,f[5],r[5],size,data,flag;

    public:

    Pr_queue();

   ~Pr_queue()
   {
     delete q;
   }

   void menu();
   void insert();
   void del();
   void disp();
   int underflow();

};

Pr_queue :: Pr_queue()
{
   clrscr();

   cout<<"\n\tEnter size of Queue: ";
   cin>>size;

   q=new int *[5];
   for(int i=0;i<5;i++)
     q[i]= new int[size];

   for(i=0;i<5;i++)
   {
     for(int j=0;j<size;j++)
       q[i][j]=0;
   }

   for(i=0;i<5;i++)
   {
     f[i]=-1;
     r[i]=-1;
   }

   flag=0;
}

void Pr_queue :: menu()
{
    clrscr();

    int n;

    cout<<"\n\t1. Insert";
    cout<<"\n\t2. Delete";
    cout<<"\n\t3. Display";
    cout<<"\n\t4. Exit";

    cout<<"\n\n\tEnter your choice: ";
    cin>>n;

    switch(n)
    {
       case 1:
	       insert();
	       menu();
	       break;

       case 2:
	       del();
	       menu();
	       break;

       case 3:
	       disp();
	       menu();
	       break;

       case 4:
	       break;

       default:
	       cout<<"\n\tEnter appropriate input";
	       getch();
	       menu();
    }

}

int Pr_queue :: underflow()
{
   for(int i=0;i<5;i++)
   {
      if(f[i]!=-1)
      {
	flag=1;
	break;
      }
   }

   return i;
}

void Pr_queue :: insert()
{
    int pr;

     cout<<"\n\tEnter Priority(0 to 4): ";
     cin>>pr;

     if(pr<0 || pr>4)
     {
	cout<<"\n\tEnter appropriate priority";
	getch();
	return;
     }

    if(r[pr]==size-1)
	    r[pr]=0;
	else
	    r[pr]++;


    if(f[pr]==r[pr])
    {
	cout<<"\n\t"<<pr<<" Queue Overflow";
	if(r[pr]==0)
	 r[pr]=size-1;
	else
	 r[pr]--;
	 getch();
	return;
    }

    cout<<"\n\tEnter data: ";
    cin>>data;
    q[pr][r[pr]]=data;

    if(f[pr]==-1)
      f[pr]=0;

     cout<<"\n\tData inserted successfully!";
     underflow();
     disp();


}

void Pr_queue :: del()
{
   int i,p;

     i=underflow();

     if(flag==1)
     {
       int p=q[i][f[i]];

       q[i][f[i]]=0;

       if(f[i]==r[i])
	 f[i]=r[i]=-1;

       if(f[i]==size-1)
	 f[i]=0;
       else
	 f[i]++;

       cout<<"\n\t"<<p<<" is deleted succefully\n\t";

       disp();

     }


     else
     {
       cout<<"\n\tQueue Underflow!!";
       getch();
       return;
     }

     if(f[0]==-1 && f[1]==-1 && f[2]==-1 && f[3]==-1 && f[4]==-1)
       flag=0;
}

void Pr_queue :: disp()
{
   if(flag==0)
   {
     cout<<"\n\tQueue Underflow!!";
     getch();
     return;
   }

   cout<<"\n\tPriority:  Front:  Rear:  Queue:";
   cout<<"\n\t~~~~~~~~   ~~~~~   ~~~~   ~~~~~\n\t";
   for(int i=0;i<5;i++)
   {
     cout<<"   "<<i<<"\t     "<<f[i]<<"\t    "<<r[i]<<"\t   ";
     for(int j=0;j<size;j++)
     {
       cout<<q[i][j]<<"\t";
     }
     cout<<"\n\t";
   }
   getch();
}


void main()
{
  Pr_queue obj;

  clrscr();

  obj.menu();

  getch();

}




