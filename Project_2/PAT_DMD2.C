#include<stdio.h>
#include<conio.h>

void main()
{
  int i,j,n,k,l;

  clrscr();

  printf("\nEnter no. of line: ");
  scanf("%d",&n);
  printf("\n");



  for(i=n;i>0;i--)
  {
    for(j=i;j>0;j--)
    {
	printf(" ");
    }
    for(k=0;k<=n-i;k++)
    {
	printf(" *");
    }
     printf("\n");
  }

   for(i=1;i<=n;i++)
  {
     printf("  ");
    for(j=0;j<i;j++)
    {
	printf(" ");
    }
    for(k=n;k>i;k--)
    {
	printf("* ");
    }
   printf("\n");
  }

 getch();
}