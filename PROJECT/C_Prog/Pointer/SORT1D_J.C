/*
	char shotr 1D
	bubble sort by pointer
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void charsort(char *,int);
void outArr(char *);
void inArr(char *);

void main()
{
	char s1[50],*ptr;
	int l;

	clrscr();
       inArr(&s1[0]);
       printf("\n\n\tBefore Shorted: %s",s1);
       l=strlen(s1);
      charsort(&s1[0],l);

      printf("\n\tAfter Shorted : %s",s1);
	getch();
}

void charsort(char *ptr, int l)
{
     int j,i;
     char t,*ptr_1,*ptr_2;

     for(i=0;i<l-1;i++)
   {
      /* ptr_1=&(ptr);
       ptr_2=&(ptr+1); */

       for(j=0;j<l-i-1;j++)
       {
	    if(*ptr>*(ptr+1))
	    {
		t=*ptr;
		*ptr=*(ptr+1);
		*(ptr+1)=t;
	    }
	/*  ptr_1++;
	  ptr_2++;*/
	  ptr++;
	}
	 for(;j!=0;j--)
	 ptr--;
    }
}

void inArr(char *ptr)
{
	int i;
   printf("\n\tEnter any String: ");

	scanf("%s",ptr);

}

void outArr(char *ptr)
{

      for(;*ptr!='\0';ptr++)
      {
      printf("%c",ptr);
      }

     getch();
}