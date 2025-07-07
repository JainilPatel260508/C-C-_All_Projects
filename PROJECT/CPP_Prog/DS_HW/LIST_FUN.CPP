/*
insert, delete, sort & display
*/
#include<conio.h>
#include<iostream.h>

class list
{
   private:

   int count,arr[5];

   public:

	    void initial(void);
	    void insert(void);
	    void disp(void);
	    void remove(void);
	    void sort(void);
	    void menu(void);

};

void list :: initial()
{
     int i;

     count=0;

     for(i=0;i<5;i++)
     {
	 arr[i]=0;
     }

}
void list :: menu()
{
   int n;
   clrscr();

      cout<<"\n1. Insert";
      cout<<"\n2. Display";
      cout<<"\n3. Delete";
      cout<<"\n4. Sort";
      cout<<"\n5. Exit";

      cout<<"\n\n\tEnter your choice: ";
      cin>>n;

      switch(n)
      {
	 case 1:
		 insert();
		 menu();
		 break;

	 case 2:
		 disp();
		 menu();
		 break;

	 case 3:
		 remove();
		 menu();
		 break;

	 case 4:
		 sort();
		 menu();
		 break;

	 case 5:
		break;

	 default:
		cout<<"\n\n\tEnter no. between 1 to 5";
      }
}

void list :: insert()
{
    int pos,i,n,j;


	if(count==5)
	{
	  cout<<"\n\n\tdata overflow!!";
	  getch();
	  return;
	}

    cout<<"\n\tEnter a no. between (1 to "<<count+1<<"): ";
    cin>>pos;

	if(pos>(count+1))
	{
	  cout<<"\n\tInvalid position input";
	  getch();
	  return;
	}

       else if (pos==(count+1))
	{
	  cout<<"\n\tEnter a data: ";
	  cin>>n;
	  count++;

	  arr[pos-1]=n;
	}

	else if(pos<(count+1))
	{
	  cout<<"\n\tEnter a data: ";
	  cin>>n;
	  count++;

	  for(i=count;i!=(pos-2);i--)
	  {
	    arr[i]=arr[i-1];
	  }

	  arr[pos-1]=n;
	}
     disp();
}

void list :: remove()
{
  int n,pos,i,temp;

     if(count==0)
   {
      cout<<"Data underflow!!";
      getch();
      return;
   }

      cout<<"Enter position no. between (1 to "<<count<<"): ";
      cin>>pos;

   if(pos>count)
   {
	cout<<"\n\tData doesnt exist in this position";
	getch();
   }

   else if(pos==count)
   {
	temp=arr[pos-1];
	arr[pos-1]=0;
	count--;
   }

   else if(pos<count)
   {
	temp=arr[pos-1];
	for(i=pos-1;i<count-1;i++)
	{
	     arr[i]=arr[i+1];
	}
	arr[count-1]=0;
	count--;
   }
     cout<<temp<<" is deleted succesfully";
     disp();
}

void list :: sort()
{
    int i,j;

    if(count==0)
    {
      cout<<"No data To be sorted";
      getch();
      return;

    }

    for(i=0;i<count-1;i++)
    {
       for(j=0;j<count-i-1;j++)
       {
	 if(arr[j]<arr[j+1])
	 {
	    arr[j+1]+=arr[j];
	    arr[j]=arr[j+1]-arr[j];
	    arr[j+1]-=arr[j];
	    }
       }
   }
    cout<<"\n\tData Sorted Successfully!!";

     disp();
}

void list :: disp()
{
  int i;

   if(count==0)
   {
     cout<<"\n\tData Not Found";
     getch();
     return;
   }

   cout<<"\n\tPosition:\tData:";
   cout<<"\n\t--------------------------";

   for(i=0;i<count;i++)
   {
      cout<<"\n\t"<<i+1<<"\t\t"<<arr[i];
   }
   cout<<"\n\t--------------------------";

  getch();
}


void main()
{
   list arr;

   clrscr();
	 arr.initial();
	 arr.menu();

   getch();
}