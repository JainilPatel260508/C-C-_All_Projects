/*
	name chararr
	bubble sort
*/

#include<stdio.h>
#include<conio.h>

void charsort(char[]);
void outArr(char[]);
void inArr(char[]);

void main()
{
	char s1[50];
	clrscr();
       inArr(s1);
       printf("\nBefore : %s",s1);
      charsort(s1);

      printf("\nAfter : %s",s1);
	getch();
}

void charsort(char s[])
{
     int t,j,i,l=strlen(s);

     for(i=0;i<l-1;i++)
   {
       for(j=0;j<l-i-1;j++)
       {
	    if(s[j]>s[j+1])
	    {
		t=s[j];
		s[j]=s[j+1];
		s[j+1]=t;
	    }

	}
     }
}

void inArr(char a[])
{
	int i;
   printf("\n\tEnter a Name:");
   gets(a);
}

void outArr(char s[])
{
 /*    int i,l=strlen(s);

     for(i=0;i<l;i++)
     {
       printf("%c",&s[i]);
     }
   */

    printf("%s",s);
     getch();
}