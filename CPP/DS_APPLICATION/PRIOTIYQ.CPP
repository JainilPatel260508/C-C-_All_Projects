// priority queue
#include<iostream.h>
#include<conio.h>

class priority_Q
{
     int *f,*r,**q,n,m;
  public:
     priority_Q(int,int);
    ~priority_Q();
     void menu();
     void insert();
     void my_delete();
     void display();
};
priority_Q :: priority_Q(int x, int y)
{
  int i,j;
    n=x;
    m=y;
    q=new int *[n];
    for(i=0;i<m;i++)
      q[i]= new int[m];
    r=new int [n];
    f=new int [n];
    for(i=0;i<n;i++)
    {
      f[i]=r[i]=-1;
      for(j=0;j<m;j++)
	q[i][j]=0;
    }
}
priority_Q :: ~priority_Q()
{
   delete q,r,f;
}
void priority_Q :: menu()
{
    int sw;
 do
 {
  clrscr();
  sw=0;
    cout<<"\n\n1)Insert";
    cout<<"\n2)Delete";
    cout<<"\n3)Display";
    cout<<"\n4)Exit";
    cout<<"\nEnter your choice: ";
    cin>>sw;

    switch(sw)
    {
	case 1:
		insert();
		break;
	case 2:
		my_delete();
		break;
	case 3:
		display();
		break;
	case 4:
		break;
	default:
	 cout<<"\n\n\tEnter valid choice...";
	 cout<<"\n\tStrike any key to re-input.";
	 getch();
	 break;
    }
 }while(sw!=4);
}

void priority_Q :: insert()
{
  int p,x;
l1:
   cout<<"\n\n\tEnter priority(1 to "<<n<<"): ";
   cin>>p;
   if(p<1 || p>n)
   {
      cout<<"\n\n\tEnter valid priority...";
      cout<<"\n\tStrike any key to exit.";
      getch();
      goto l1;
   }
   p--;
   if(r[p]==m-1)
     r[p]=0;
   else
     r[p]++;

   if(f[p]==r[p])
   {
      cout<<"\n\n\tData overflow...";
      cout<<"\n\tStrike any key to exit.";
      getch();
     if(r[p]==0)
     {
       r[p]=m-1;
     }
     else
       r[p]--;
    return;
   }

  int data;
  cout<<"\n\tEnter data to insert: ";
  cin>>data;
  q[p][r[p]]=data;

  if(f[p]==-1)
    f[p]=0;
  display();
}
void priority_Q :: my_delete()
{
  int flag=0;
  for(int i=0;i<n;i++)
  {
   if(f[i]!=-1)
     flag=1;
  }
  if(flag==0)
  {
    cout<<"\n\n\t\tData underflow...";
    cout<<"\n\t\tStrike any key to exit.";
    getch();
    return;
  }

  for(i=0;i<n;i++)
  {
   if(f[i]!=-1)
     break;
  }

  int data=0;
  data=q[i][f[i]];
  q[i][f[i]]=0;

  if(f[i]==r[i])
     f[i]=r[i]=-1;

  else if(f[i]==m-1)
  {
     if(q[i][0]==0)
       f[i]=-1;
     else
       f[i]=0;
  }
  else
     f[i]++;

  cout<<"\n\n\t'"<<data<<"' is deleted from queue";
  cout<<"\n\tStrike any key to exit.";
  getch();
  display();
}
void priority_Q :: display()
{
  int flag=0;
  for(int i=0;i<n;i++)
  {
   if(f[i]!=-1)
     flag=1;
  }
  if(flag==0)
  {
    cout<<"\n\n\tData underflow...";
    cout<<"\n\tStrike any key to exit.";
    getch();
    return;
  }

  cout<<"\n\n    Priority";
  for(i=0;i<n;i++)
  {
    cout<<"\n\n\t"<<i+1<<"\t";
    for(int j=0;j<m;j++)
      cout<<" "<<q[i][j]<<" ";
  }
  cout<<"\n\n\t\tStrike any key to exit.";
  getch();
}

void main()
{
clrscr();
   int r,c;

   cout<<"\n\tEnter no. of priority queue you want: ";
   cin>>r;
   cout<<"\n\tEnter no. of maximum element you want in one queue: ";
   cin>>c;

   priority_Q obj(r,c);
   obj.menu();
}