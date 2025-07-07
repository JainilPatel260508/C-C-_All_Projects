/*
	bubble sort
*/
#include<conio.h>
#include<stdio.h>

void main()
{
	int i,j,arr[10]={55,66,88,33,22,44,77,99,11,22},n=10,t,k;
	clrscr();

	for(i=0;i<n-2;i++)
	{
	    for(j=0;j<n-i-1;j++)
		{    if(arr[j]>arr[j+1])
			  {
				t=arr[j];
				arr[j ]=arr[j+1];
				arr[j+1]=t;
				}
			printf("\n");
			for(k=0;k<n;k++)
			{
				printf(" %d",arr[k]);
			}
			getch();
		}
	}
	for(k=0;k<n;k++)
	{
		printf(" %d",arr[k]);
	}
   getch();
}
