/*
       operation of one dim chdar array.
       -->add, edit, remove, extract, reverse

*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void strcedit(char[],int,char);
void strcadd(char [],int,char);
void strextract(char [],int, int);
void strrem(char [], int, int);

void main()
{
	char s1[50]="computer",s2[20]="Shrey",s3[30]="Pendrive",s4[30]="computer";
	clrscr();
	printf("\nS1:%s",s1);
	strcadd(s1,1,'@');
	printf("\nafter added char S1:%s",s1);
	strcedit(s2,3,'s');
	printf("\nafter edit:%s",s2);

	strextract(s2,1,5);
	strrem(s4,4,4);
	getch();
}

void strrem(char s[], int p, int cnt)
{

	int i,x,y,l=strlen(s);

	--p;
	for(i=0;i<l;i++)
	{
		if(i>=p)
		{
		   s[i]=s[i+cnt];
		}
	}
	s[i+1]='\0';
	printf("\n\t\t%s",s);

}
void strextract(char s[],int p,int cnt)
{
    int l=strlen(s),i,c=1;
    --cnt;
    printf("\n");
    for(i=--p;i<=l;i++,c++)
    {
	 printf("%c",s[i]);
	 if(c>cnt)
	  break;

    }
//getch();
}
void strcadd(char s[],int p,char c)
{
   /*   01234567
	computer
	    puter
	com puter
	len=8
	pos=3
	len-pos=8-3=5
   */

   int m,m1,i,l=strlen(s);
   char t;
	if(p<0)
	{
	 printf("\n\t\t\Position is not allowed.");
	 return;
	 }
   p--;
   m=l-p-1;
   for(i=0,m1=l;i<=m;i++,m1--)
   {
	 //t=s[m1];
	 s[m1+1]=s[m1];

   }
   s[++m1]=c;
   s[l+1]='\0';
}

/*
	int m=5,p=6;
	++m  or m++		--p  or p--
	m=6     m=6             p=5     p=5
	x=++m   x=m++		x=--p   x=p--
	x=6     x=5             x=5     x=6
	m=6     m=6             p=5     p=5

*/

void strcedit(char s[],int x, char y)
{
    s[--x]=y;
}

