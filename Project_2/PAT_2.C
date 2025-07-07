#include<stdio.h>
#include<conio.h>

 void main()
{
	int i,j,n,k,l,p;
clrscr();
  printf("\nEnter no. of line: ");
  scanf("%d",&n);
  printf("\n\n");

 for(i=0,p=0;i<n;i++,p++)
  {
    for(j=0;j<2*n;j++)
     {
       if(j<n-p || j>=2*n-(n-p))
       {
	printf(" *");
	}
	else
	{
	printf("  ");
	}
     }

     printf("\n");
  }


getch();
}