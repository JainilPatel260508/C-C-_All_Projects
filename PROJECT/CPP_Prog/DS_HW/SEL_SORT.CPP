//selection sort
#include<conio.h>
#include<iostream.h>

class sel_sort
{
    int *arr,n;
 public:
    sel_sort(int);
    ~sel_sort();
    void input();
    void ascend();
    void display();
};

sel_sort :: sel_sort(int x)
{
    arr = new int[x];
    n=x;
}
sel_sort :: ~sel_sort()
{
    delete arr;
}

void sel_sort :: input()
{
    cout<<"\n\n\t\t Enter data one by one: ";

    for(int i=0;i<n;i++)
       cin>>arr[i];
}
void sel_sort :: ascend()
{
  int x,pos,temp;
     for(int i=0;i<n;i++)
     {
	  for(int j=i,x=arr[j];j<n;j++)
	  {
	       if(x>arr[j+1])
	       {
		 x=arr[j+1];
		 pos=j+1;
	       }
	  }
	  if(arr[i]>x)
	  {
	      temp=arr[i];
	      arr[i]=x;
	      arr[pos]=temp;
	  }
     }
}
void sel_sort :: display()
{
  cout<<"\n\n\t\t";
     for(int i=0;i<n;i++)
       cout<<" "<<arr[i]<<" ";
}

void main()
{
clrscr();

   int x;

   cout<<"\n\n\t\t Enter no. maximum element: ";
   cin>>x;

   sel_sort obj(x);

   obj.input();

   cout<<"\n\n\t\t Before sorting: \n";
   obj.display();

   obj.ascend();
   cout<<"\n\n\t\t After sorting: \n";
   obj.display();

getch();
}