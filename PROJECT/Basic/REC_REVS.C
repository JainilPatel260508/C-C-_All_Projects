#include<stdio.h>
#include<conio.h>
char str_rev(char []);

void main()
{
 char s1[30];
 clrscr();
 printf("\n\tEnter String:");
 gets(s1);
 printf("\n\n\t\t reverse String : ");
 str_rev(s1);
 getch();
}
char str_rev(char s1[])
{
       char c;
       static int i=0;
       if(s1[i]=='\0')
	 return 0;
       else
       {
	 c=s1[i];
	 i++;
	 str_rev(s1);
       }
       printf("%c",c);
       return c;
}