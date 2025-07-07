#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,l;
	clrscr();

	printf("ENTER a number:");
	scanf("%d",&i);

	for(j=1;j<=i;)
	{
	   printf("\n");
		for(k=i,l=1;k>=1;k--,l++)
		{
		printf("%2d",l);
		}
		i=i-1;
	}

	getch();

}
