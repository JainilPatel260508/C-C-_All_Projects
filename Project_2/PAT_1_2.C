#include<stdio.h>
#include<conio.h>

void main()
{
  int i,j,n,k,l;

  clrscr();

  printf("\n\tEnter no. of line: ");
  scanf("%d",&n);


  for(i=n;i>0;i--)
  {
    for(j=i;j>0;j--)
    {
	printf("  ");
    }
    for(k=0;k<=n-i;k++)
    {
	printf(" *");
    }
     printf("\n");
  }

  getch();
}