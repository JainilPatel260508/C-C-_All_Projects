/*
	   1-D Array Sorting
	   Bubble sort Technique(Method)
*/
#include<stdio.h>
#include<conio.h>

void bubbsort(int *);
void inArr(int *);
void outArr(int *);
int n=5;
void main()
{
  int arr[50];
  clrscr();

  inArr(&arr[0]);
  printf("\n\tBefor sorting\n");
  outArr(&arr[0]);
  bubbsort(&arr[0]);
  printf("\n\tAfter sorting\n");
  outArr(&arr[0]);
 getch();
}
void bubbsort(int *a)
{
   int i,j,t,*p1,*p2;

   for(i=0;i<n-1;i++)
   {
    p1=a;
    p2=a;
    p2++;

       for(j=0;j<n-i-1;j++)
       {
	    if(*p1>*p2)
	    {
		t=*p1;
		*p1=*p2;
		*p2=t;
	    }
	    p1++;
	    p2++;
	   //outArr(a);
       }
   }
}
void outArr(int *a)
{
   int i;
   printf("\n\tArr : ");

   for(i=0;i<n;i++)
   {
      printf(" %d",*a);
      a++;
   }
   getch();
}
void inArr(int *a)
{
	int i;
   printf("\n\tEnter a length of Arr:");
   scanf("%d",&n);

     for(i=0;i<n;i++)
   {
      scanf("%d",&(*a));
      a++;
   }
}