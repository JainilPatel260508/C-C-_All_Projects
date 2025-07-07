#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,j;
	clrscr();
	n=7;
	for(i=1;i<=n;i++)     //no of rows
	{
	    //printf("\n I:%d",i);
	    for(j=1;j<=i;j++)  //no of cols
	    {
	      // printf("\n\t J:%d",j);
	      printf(" *");
	     //	printf(" %d",j);
	    }
	    printf("\n");
	    getch();
	}
	for(i=n-1;i>=1;i--)
	{
	    //printf("\n I:%d",i);
	    for(j=1;j<=i;j++)
	    {
	      // printf("\n\t J:%d",j);
	      printf(" *");
	     //	printf(" %d",j);
	    }
	    printf("\n");
	    getch();
	}


	getch();
}