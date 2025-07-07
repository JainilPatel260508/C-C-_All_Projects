/*
	proper case with pointer.
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	char n[30],*ptr;
	int i,j;
	clrscr();

	ptr=&n[0];

	printf("\n\n\t\tEnter a line: ");
	for(i=0;i!=10;i++)
	{
	  scanf("%c",ptr);
	  ptr++;
	}

	*ptr=n[0];
	for(i=0;n[i]!='\0';i++)
	{
	  if(i==0 || *ptr==32)
	  {
	      if(i==0)
	      {
		 if(*ptr>=92 && *ptr<=122)
		 {
		    *ptr-=26;
		 }
	      }

	      ptr++;
	      if(*ptr>=92 && *ptr<=122)
	      {
		 *ptr-=26;
	      }
	  }
	  else if(*ptr>=65 && *ptr<=90)
	  {
	      *ptr+=26;
	  }
	  ptr++;
	}

	printf("\n\n\t\tResult: ");


	getch();
}
