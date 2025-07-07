#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	char name[20],city[20];
	clrscr();
	printf("\n\n\t\t\tAscii Chart ");
	for(i='A',j='a';i<('A'+26);i++,j++)
	{
	    printf("\n\t Ascii : %d  Char : %c\t\tAscii : %d  Char : %c",i,i,j,j);
	    getch();
	}

/*	for(i=65;i<(65+26);i++)
	{
	    printf("\n\t Ascii : %d  Char : %c",i,i);
	    getch();
	}
	printf("\n\n\t\t\tAscii Chart Small letter\n");
	for(i=(65+32);i<(97+26);i++)
	{
	    printf("\n\t Ascii : %d  Char : %c",i,i);
	    getch();
	}*/

	printf("\n\n\t\tEnter a your name:");
	scanf("%s",name);
	printf("\n\n\t\t Your name is :%s",name);
	flushall();
	printf("\n\n\t\tEnter a your City:");
	gets(city);
	printf("\n\n\t\t Your city is :");
	puts(city);

	getch();
}