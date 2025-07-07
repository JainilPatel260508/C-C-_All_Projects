/*
	in-built String function
	strcat, strcpy, strcmp, stricmp, strrev
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
     char s1[30]="cpu",s2[30]="Monitor",s3[30]="mouse";
     char t1[30],t2[30],t3[30]="MONITOR";
     clrscr();
     strcpy(t1,"monitor");
     strcpy(t2,s2);

     printf("\n\t S1: %s S2: %s",s1,s2);
     strncat(s1,s2,3);
     printf("\n\t after concate -> S1: %s S2: %s",s1,s2);

     strrev(s1);
     printf("\n\t after reverse -> S1: %s ",s1);

     printf("\n\t S2: %s S3: %s",s2,s3);
     strcpy(s2,s3);
     printf("\n\t after copy S2: %s S3: %s",s2,s3);

     if(strcmp(t1,t2)==0)
     {
	printf("\n\t %s and %s are same",t1,t2);
     }
     else
     {
	printf("\n\t %s and %s are not same",t1,t2);
     }

     if(strcmp(t1,t3)==0)
     {
	printf("\n\t %s and %s are same",t1,t3);
     }
     else
     {
	printf("\n\t %s and %s are not same",t1,t3);
     }
     if(stricmp(t1,t3)==0)
     {
	printf("\n\t %s and %s are same",t1,t3);
     }
     else
     {
	printf("\n\t %s and %s are not same",t1,t3);
     }
getch();
}