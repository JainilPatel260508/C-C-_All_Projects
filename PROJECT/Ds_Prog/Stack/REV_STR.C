/*
	reverse string using recursion
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	char rev_str(char [],int);
	char s[20];
	clrscr();
	printf("\n\n\t\tEnter the string:");
	scanf("%s",s);
	printf("\n\n\t\tReverse string:");
	rev_str(s,0);
	getch();
}
char rev_str(char s[],int m)
{
      char c;
	if(s[m]=='\0')
	{
	  return 0;
	}
	else
	{
	   c=s[m];  //push
	   rev_str(s,m+1);
	}

	printf("%c",c); //pop
	return c;
}
