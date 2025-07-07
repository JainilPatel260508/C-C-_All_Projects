/*
Palindrom str. check
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int j=0,l,x,flag=0,k;
	char s[30],t[30];
	clrscr();

	printf("\n\tEnter string:");
	gets(s);

	l=strlen(s);
	l=l-1;
	x=l;

	for(l,j=0;l>=0;l--,j++)
	{
		t[j]=s[l];
	}
	t[++j]='\0';

	for(k=0;k<=x;k++)
	{
		if(t[k]!=s[k])
		{
			printf("\n\tThis is not Palindrom.");
			flag=1;
			break;
		}
	}

	if(flag==0)
	{
		printf("\n\tThis is Palindrom.");
	}

	getch();

}
