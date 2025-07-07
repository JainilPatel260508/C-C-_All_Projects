#include<conio.h>
#include<stdio.h>

void main()
{
  int i,j,n,k;

  clrscr();

  printf("\nEnter no. of line: ");
  scanf("%d",&n);
  printf("\n\n");

  for(i=n;i>0;i--)
  {
     for(j=i,k=n;j>0;j--,k--)
     {
	printf("%2d",k);
     }
     printf("\n");
  }

  getch();
}