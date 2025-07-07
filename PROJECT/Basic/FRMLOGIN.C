/*
		Login form
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	char userid[30], userpwd[30];
	char c;
	int i=0;
	clrscr();

	printf("\n\n\t\tEnte a User Id :");
	scanf("%s",userid);
	printf("\n\n\t\tEnte a Password :");
	do
	{
	  c=getch();
//	  putchar(c);
//	  putchar('\b');
	  putchar('*');
	  userpwd[i++]=c;
	 }while(c!='*');

	 userpwd[--i]='\0';

	 printf("\n\tUser Id:%s",userid);
	 printf("\n\tUser pwd:%s",userpwd);
getch();

}