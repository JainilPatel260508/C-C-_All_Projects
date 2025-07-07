/*
Function Type:
		1.  No arg and No Return value
		2.  No arg but Return value
		3.  arg but No Return value
		4. arg and Return value
*/
#include<stdio.h>
#include<conio.h>
void main()
{
void  printline(char,int);
clrscr();
printline('*',60);
printf("\nRecursive function .....");
printline('-',75);
printline('=',45);
getch();
}
void printline(char c,int n)
//char c;
//int n;
{
	int i;
	printf("\n");
	for(i=1;i<=n;i++)
	printf("%c",c);
//	printf("\n");
//return 0;
}