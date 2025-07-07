#include<stdio.h>
#include<conio.h>

int main()
{
  int i,j,k,n;

 clrscr();

  printf("Enter no. of line: ");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
    {
      printf("* ");

    }
     printf("\n");
  }

  for(i=n-1;i>0;i--)
  {
    for(j=i;j>0;j--)
    {
	printf("* ");
    }

    printf("\n");
  }



 getch();
}