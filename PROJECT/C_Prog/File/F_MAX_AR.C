#include<stdio.h>
#include<conio.h>
void main()
{
	int i,arr[10];
	int max(int [],int);
	clrscr();
	for(i=0;i<10;i++)
	{
	   printf("arr[%d]:",i);
	   scanf("%d",&arr[i]);
	}
/*	for(i=0;i<10;i++)
	{
	   printf("\narr[%d]:%d",i,arr[i]);
	}*/
	printf("\nMax of Arr: %d",max(arr,10));
//	max(arr,10);
	getch();
}
int max(int varr[],int n)
{
	int i,max=-100;
	for(i=0;i<n;i++)
	{
	  if (max<varr[i])
	      max=varr[i];
	}
	return max;
}