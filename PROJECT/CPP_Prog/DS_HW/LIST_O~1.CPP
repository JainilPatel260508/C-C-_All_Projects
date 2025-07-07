//menu driven list opretion
#include<iostream.h>
#include<conio.h>

class list_op
{
	int n[5],count;

   public :
	void menu(void);
	int insert(int,int);
	int fun_delete(int);
	void display(int);
	void sort(void);
	void cnt(void)
	{ count=0; }
};

void list_op :: menu()
{
   int sw=0,x=0,y=0;

	  do
	 {
	    sw=0,x=0,y=0;
	    clrscr();
	    cout<<"\t\t\t\t #List Operation#";
	    cout<<"\n\n1)Insert Data";
	    cout<<"\n2)Delete Data";
	    cout<<"\n3)Sort Data";
	    cout<<"\n4)Display Data";
	    cout<<"\n5)Exit";

	    cout<<"\n\n\tEnter Your choice: ";
	    cin>>sw;

	    switch(sw)
	    {
		case 1:
		{
		   clrscr();
		   if(count>=5)
		   {
		    cout<<"\n\n\t\tData is Overflow!!!";
		    cout<<"\n\t\tEnter any key to exit";
		    getch();
		    break;
		   }
		    do
		    {  y=0;
		       clrscr();
			     cout<<"\n\n\t\t Enter location(1 to "<<count+1<<") to insert data: ";
			     cin>>x;

			     if(x>count+1 || (x>5 || x<1) )
			     {
				  cout<<"\n\n\t\t Invalid location";
				  cout<<"\n\t\t 1 to "<<count+1<<" location is more prefrable";
				  cout<<"\n\t\tEnter any key to Re-Input.";
				  getch();
				  y=1;
			     }
		    }while(y==1);
		    y=0;
			cout<<"\n\t\tEnter data: ";
			cin>>y;
			insert(y,x);
			break;
		}
		case 2:
		{
		 clrscr();
		 l1: if(count!=0)
		     {
			cout<<"\n\n\t\t Enter location(1 to "<<count<<") to Delete data: ";
			cin>>x;
			 if((x<1 || x>5) || x>count)
			 {
			    cout<<"\n\n\t\tEnter Valid location to Delete";
			    cout<<"\n\t\t Enter location(1 to "<<count<<") to Delete data.";
			    cout<<"\n\t\tEnter any key to Re-Input.";
			    getch();
			    goto l1;
			 }
			fun_delete(x);
			break;
		     }
		     else if(count==0)
		     {
			cout<<"\n\n\t\tData is Under flow!!";
			cout<<"\n\t\tFirst insert data.";
			cout<<"\n\t\tEnter any key to exit.";
			getch();
			break;
		     }
		}
		case 3:
		      {   clrscr();
			      if(count==0)
			      {
				  cout<<"\n\n\t\tNo Data Is Inserted There !!";
				  cout<<"\n\t\tEnter any key to exit.";
				  getch();
				  break;
			      }
			      else if(count !=0)
			      {
				  sort();
				  break;
			      }
			}
		case 4:
			{   clrscr();
			      if(count==0)
			      {
				  cout<<"\n\n\t\tNo Data Is Inserted There !!";
				  cout<<"\n\t\tEnter any key to exit.";
				  getch();
				  break;
			      }
			      else if(count !=0)
			      {
				  display(1);
				  break;
			      }
			}
		case 5:
			break;

		default:
			cout<<"\n\n\t\tEnter valid choice(1 to 5)";
			getch();
			break;
	    }

	 }while(sw!=5);
}

// Function for inserting data in array
int list_op :: insert(int data,int loc)
{
   int i=0;

       --loc;
	 for(i=(count-loc-1);i>=0;i--)
	 {
		n[i+1]=n[i];
	 }
	  n[loc]=data;
	  count++;
	  cout<<"\n\n\t\t Data Inserted sucessfully!!";
	  cout<<"\n\t\t Data: "<<data<<" is inserted at this "<<loc+1<<" location";
	  display(0);
	  cout<<"\n\n\t\tEnter any key to exit.";
	  getch();
	  return 0;
}

//function for delete data
int list_op :: fun_delete(int loc)
{
    int i=0,del_data,j;
	loc--;

	   del_data=n[loc];
	    for(j=loc,i=0;i<(count-loc-1);i++,j++)
	    {
		n[j]=n[j+1];
	    }
	    n[j]=0;
	    count--;
	    cout<<"\n\n\t\tData Deleted Sucessfully!!";
	    cout<<"\n\t\tData: "<<del_data<<" is deleted from this "<<loc+1<<" locataion";
	    display(0);
	    cout<<"\n\n\t\tEnter any key to exit.";
	    getch();
	    return 0;
}
//displaying array
void list_op :: display(int flag)
{
    int i=0;
       cout<<"\n\n\t\tIndex    ->    Data";

	for(i=0;i<count;i++)
	{
	    cout<<"\n\t\t    "<<i+1<<"    ->    "<<n[i];
	}
	if(flag==1)
	{
	cout<<"\n\n\t\tEnter any key to exit";
	getch();
	}
}
//sorting funtion
void list_op :: sort()
{
  int i,j,op;
  clrscr();
  do
  {
      op=0;
      j=0;
      cout<<"\n\n\t\tWhich Shorting do you want in your data: ";
      cout<<"\n\t\t1)Ascending\n\t\t2)Dsecending";
      cout<<"\n\t\tEnter Operation(1 or 2): ";
      cin>>op;

	if(op!=1 && op!=2)
	{
	   cout<<"\n\n\t\tEnter Valid No. (1 or 2)";
	   cout<<"\n\t\tEnter any key to re-enter no.";
	   getch();
	   j=1;
	}
  }while(j==1);

  cout<<"\n\n\t\tBefore Sorting";
  display(0);

  for(i=0;i<count-1;i++)
   {
       for(j=0;j<count-i-1;j++)
       {
	    if(n[j]<n[j+1])
	    {
		n[j+1]+=n[j];
		n[j]=n[j+1]-n[j];
		n[j+1]-=n[j];
	    }
       }
   }

   if(op==1)
   {
       for(i=(count-1),j=0;j<(count-1)/2;i--,j++)
      {
	n[j]+=n[i];
	n[i]=n[j]-n[i];
	n[j]-=n[i];
      }
	cout<<"\n\n\t\tData Sorted in ascending Sucessfully!!";
   }
   else
	cout<<"\n\n\t\tData Sorted in descending Sucessfully!!";

  cout<<"\n\n\t\tAfter Sorting";
  display(0);
  cout<<"\n\n\t\tEnter any key to exit.";
  getch();

}

void main()
{
clrscr();
	list_op obj;

	obj.cnt();
	obj.menu();
}