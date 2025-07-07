/*
	   1-D Array Sorting
	   Bubble sort Technique(Method)
*/
#include<stdio.h>
#include<conio.h>

void bubbsort(int []);
void inArr(int []);
void outArr(int []);
int n=5;
void main()
{
  int arr[50];
  clrscr();

  inArr(arr);
  printf("\n\tBefore sorting\n");
  outArr(arr);
  bubbsort(arr);
  printf("\n\tAfter sorting\n");
  outArr(arr);
 getch();
}
void bubbsort(int a[])
{
   int i,j,t;
   for(i=0;i<n-1;i++)
   {
       for(j=0;j<n-i-1;j++)
       {
	    if(a[j]<a[j+1])
	    {
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
	    }
	   //outArr(a);
       }
   }
}
void outArr(int a[])
{
   int i;
   printf("\n\tArr : ");
   for(i=0;i<n;i++)
   {
      printf(" %d",a[i]);
   }
   getch();
}
void inArr(int a[])
{
	int i;
   printf("\n\tEnter a length of Arr:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
}
