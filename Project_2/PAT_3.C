#include<stdio.h>
#include<conio.h>

void main()
{
  int i,j,n,k;

  clrscr();

  printf("\nEnter no. of line: ");
  scanf("%d",&n);
  printf("\n\n");

  for(i=0;i<n;i++)
  {
     for(j=0;j<=i;j++)
     {
	printf("%2d",j+1);
     }
     printf("\n");
  }

  getch();
}