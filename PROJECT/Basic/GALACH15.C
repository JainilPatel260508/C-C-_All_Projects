#include<stdio.h>
#include<conio.h>

void main()
{
	int marks[5],i;
	float j=1;
	clrscr();

	printf("Enter marks of 5 student:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);

		j=j*marks[i];
	}
	for(i=0;i<5;i++)
	{
	    printf("\nthe marks of %d - %d",i,marks[i]);
	}
	printf("\nvalue:-%.0f  ",j);
	getch();
}
