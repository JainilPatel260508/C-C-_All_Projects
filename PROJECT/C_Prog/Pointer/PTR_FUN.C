#include<stdio.h>
#include<conio.h>

void outArr(int *);
void inArr(int *);
int n=5;
void main()
{
  int arr[50];

  clrscr();

  inArr(&arr[0]);
  printf("\n\tBefor sorting\n");
  outArr(&arr[0]);
//  bubbsort(&arr[0]);
//  printf("\n\tAfter sorting\n");
//  outArr(&arr[0]);
 getch();
}
void inArr(int *a) //a=&arr[0]
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
void outArr(int *a)
{
   int i;
   for(i=0;i<n;i++)
   {
      printf("\n\t  %d",*a);
      a++;
   }
}