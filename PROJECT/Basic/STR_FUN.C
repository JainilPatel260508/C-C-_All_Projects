/*
       one dim operation of two array.
       --> copy, concate, replace, compare

replace(s1,s2,3,4)
s1:computer
s2:mouse
comouser

*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void strcopy(char [], char []);
void strconcate(char [], char []);
int strcomp(char [],char []);
void strrep(char [],char [], int, int);

void main()
{
   char s1[20]="computer",s2[20]="Mouse",s3[30]="pendrive",s4[30]="pendrive",s5[20]="computer";
   int x;
   clrscr();

   printf("\n\n\t S1:%s",s1);
   strcopy(s1,s2);
   printf("\n\n\tafter copy S1:%s",s1);

   printf("\n\n\t S3:%s",s3);
   strconcate(s3,s2);
   printf("\n\n\t\tafter concate S3:%s",s3);

   printf("\n\n\t S3:%s",s3);
   x=strcomp(s3,s3);
   if(x==0)
   printf("\n\n\t They are same");
   else
   printf("\n\n\t They are different");


   strrep(s4,s5,4,4);
   getch();
}

void strconcate(char d[], char s[])
{
	int i,j;
	for(i=0;d[i]!='\0';i++);

	for(j=0;s[j]!='\0';j++)
	{
	   d[i+j]=s[j];
	}

	d[i+j]='\0';
}
void strcopy(char d[], char s[])
{
	int i,j,l=strlen(s);
	for(i=0;i<l;i++)
	{
	   d[i]=s[i];
	}
	d[i]='\0';
}
int strcomp(char s[], char d[])
{
	int i,flag,l1=strlen(s),l2=strlen(d),x,y;

	if(l1==l2)
	{
		 for(i=0;i<l1;i++)
		{
			 x=s[i];
			 y=d[i];
			 if(x!=y)
			 {
				 flag=1;
				 printf("\n %d",flag);
				 break;
			 }
			 else
			 flag=0;
		 }

	}
	else
	flag=1;



	return(flag);


}

void strrep(char d[],char s[], int p, int c)
{
     int i,j=0,y,l=strlen(d);

     --p;
     y=p+c;

	 for(i=0;i<l;i++)
	 {
	   if(i>=p && i<y)
	   {
	     d[i]=s[j];
	     j++;

	   }
	 }
	d[i+1]='\0';
	printf("\n\t %s",d);
}