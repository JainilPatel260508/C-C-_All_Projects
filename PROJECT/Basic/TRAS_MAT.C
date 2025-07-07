#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,m[3][3];

    clrscr();

    printf("\n\n\tEnter the matrix:");
      for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
	scanf("%d",&m[i][j]);
      }
    }

     printf("\n\n\t");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
	printf("%d  ",m[i][j]);


      }
	printf("\n\t");
    }

    printf("\n\n\t");

    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
	printf("%d  ",m[j][i]);


      }
	printf("\n\t");
    }




    getch();
}