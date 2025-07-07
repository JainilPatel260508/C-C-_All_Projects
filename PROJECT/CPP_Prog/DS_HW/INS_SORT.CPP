/*Insertion sort*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class sort
{
  int *arr,size;

  public:

  sort(int );
  void insert();
  void ins_sort();
  void display();

};

sort :: sort(int n)
{
   size=n;
   arr = new int[size];

   for(int i=0;i<n;i++)
   arr[i]=0;
}

void sort :: insert()
{
	cout<<"\n\tEnter the data : ";
     for(int i=0;i<size;i++)
	cin>>arr[i];

}
void sort :: ins_sort()
{
	for(int i=0;i<size;i++)
	{
	   for(int j=i;arr[j]>arr[j+1] && j>=0;j--)
	   {
		arr[j]=arr[j]+arr[j+1];
		arr[j+1]=arr[j]-arr[j+1];
		arr[j]=arr[j]-arr[j+1];
	   }
	}
}

void sort :: display()
{
	cout<<"\n\t   ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<"\n\n\t\tSorted successfully";
	getch();
}

void main()
{
   int n;

  clrscr();
  flushall();
   cout<<"\n\tEnter size of array: ";
   cin>>n;

   sort obj(n);

   obj.insert();
   obj.ins_sort();
   obj.display();

  getch();
}