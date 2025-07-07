#include<stdio.h>
#include<conio.h>

void main()
{
	void cpy(char *, char *);
	char *str1,*str2;
	clrscr();
	str1="computer";
	str2="Cpu";
	printf("\nBefore str1--> %s \t str2--> %s",str1,str2);
	cpy(str1,str2);
	printf("\nAfter str1--> %s \t str2--> %s",str1,str2);
getch();
}
void cpy(char *cptr1, char *cptr2)
{
	while(*cptr2!='\0')
	{
	   *cptr1 = *cptr2;
	   cptr1++;
	   cptr2++;
	}
	*cptr1='\0';
}