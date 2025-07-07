#include<stdio.h>
#include<conio.h>
/*
5 4 3 2 1
  4 3 2 1
    3 2 1
      2 1
	1
*/

void main()
{
	int n,i,j,k='a',s=1;
	clrscr();
	n=5;
	for(i=n;i>=1;i--) //no of row
	{
	  for(s=i;s<n;s++)
	    printf(" ");

	   for(j=i;j>=1;j--)
	   {
	       printf(" %d",j);
	   }
	   printf("\n");
	}
	 getch();


       //	for(i=1;i<=n;i++)     //no of rows
       i=1;
       while(i<=n)
	{
	    //printf("\n I:%d",i);
	    //for(j=1;j<=i;j++)  //no of cols
	    j=1;
	    while(j<=i)
	    {
	      // printf("\n\t J:%d",j);
	     // printf(" *");
		printf(" %c",k++);
		j++;
	    }
	    printf("\n");
	    i++;
	    getch();
	}
       //	for(i=n;i>=1;i--)
       i=n;
       while(i>=1)
	{
	    //printf("\n I:%d",i);
	   // for(j=1;j<=i;j++)
	   j=1;
	   while(j<=i)
	    {
	      // printf("\n\t J:%d",j);
	     // printf(" *");
		printf(" %c",--k);
		j++;
	    }
	    printf("\n");
	    i--;
	    getch();
	}


	getch();
}