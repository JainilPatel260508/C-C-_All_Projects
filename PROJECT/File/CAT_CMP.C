#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    void concat(char [],char []);
    int cmpstr(char [],char []);
    char str1[50],str2[50];
    clrscr();
    printf("Enter a Fist String:");gets(str1);
    printf("Enter a Second String:");gets(str2);
    if (cmpstr(str1,str2)==1)
      {
	  printf("\nBoth string are same.\n");
      }
      else
	 printf("\nBoth string are not same.\n");
    concat(str1,str2);
    getch();
}
int cmpstr(char s1[] ,char s2[])
{
    int flag=1,i;
    if(strlen(s1)==strlen(s2))
    {
       for(i=0;s1[i]!='\0';i++)
	 {
	      if (s1[i]!=s2[i])
	      {
		   flag=0;
		   break;
	      }
	 }
    }
    else
       flag=0;

return flag;
}

//   str1[50]="string1"
//   str2[50]="string2"
//   str1[50]="string1string2"
//
void concat(char s1[],char s2[])
{
   int i,j,k;
   for(i=0;s1[i]!='\0';i++);
   for(j=0;s2[j]!='\0';j++)
      s1[i+j]=s2[j];
      s1[i+j]='\0';
   printf("Concate String : %s",s1);
}
/*
	s1="string1\0"
     i=     0      8
	s2="string2\0"
     j=     01234567
	s1="string1string2\0"
     s1[8+2]=
*/