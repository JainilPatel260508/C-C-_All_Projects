/*
		reverse string using recusing.
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	void strrev(char [],int);
	char s[20];
	clrscr();
	printf("\n\n\t\tEnter a string :");
	gets(s);
	printf("\n\n\t\tRevese string :");
	strrev(s,0);
	getch();
}
void strrev(char s[20],int n)
{
	char c;
	if(s[n]=='\0')
	  return ;
	else
	{
	  c=s[n]; //push
	  strrev(s,n+1);
	}
	printf("%c",c);  //pop
     return ;

}