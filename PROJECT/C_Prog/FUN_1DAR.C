/*
	call function with 1-D arr
*/
#include<stdio.h>
#include<conio.h>
void getarr(int []);
void disparr(int []);
void count_sum(int [],int);
int n;
void main()
{
   int arr[20],midval;
   clrscr();
   getarr(arr);
   disparr(arr);
   printf("\n\n Enter an any middle value:");
   scanf("%d",&midval);
   count_sum(arr,midval);
getch();
}
void count_sum(int a[],int mv)
{
   int i,acnt=0,asum=0,bcnt=0,bsum=0,mvp;

   for(i=0;i<n;i++)
   {
       if(a[i]==mv)
	{
		mvp=i;
		break;
	}
   }
   for(i=0;i<n;i++)
   {
       if(i<mvp)
	{
	    acnt++;
	    asum+=a[i];
	}
	else if(i!=mvp)
	{
	    bcnt++;
	    bsum+=a[i];

	}
   }
   printf("\n\n\t\t above no of count: %d and Sum : %d",acnt,asum);
   printf("\n\n\t\t below no of count: %d and Sum : %d",bcnt,bsum);


}
void getarr(int a[])
{
   int i;
   printf("\n\t\tHow many enter the elements:");
   scanf("%d",&n);
   printf("\n\n\t\tEnter a value of arr:");
   for(i=0;i<n;i++)
   {
	scanf("%d",&a[i]);
     }
}
void disparr(int a[])
{
   int i;
   printf("\n\tInputed value:");
   for(i=0;i<n;i++)
   {
	printf("\n %d",a[i]);
   }
}