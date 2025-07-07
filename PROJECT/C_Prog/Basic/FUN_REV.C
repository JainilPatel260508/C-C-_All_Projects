/*
	reverse string
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	char c[20];
	clrscr();

	printf("\n\nInput any string:");
	gets(c);
	rev(c);
	rev_str(c);
	printf("\n\n Rev string: %s",c);
	getch();
}

int rev_str(char x[])
{
	int i,len,j;
    for(len=0;x[len]!='\0';len++);
   // printf("\n\n\t\t Len : %d",len);
  //  --len;
    for(i=--len,j=0;j<len/2;i--,j++)
    {   char c=x[i];
	x[i]=x[j];
	x[j]=c;
    }
    x[++len]='\0';
    return(0);
}

int rev(char x[])
{
	int i,n;
    for(n=0;x[n]!='\0';n++);

	for(i=n;i>=0;i--)
    {
	printf("%c",x[i]);
    }
    return(0);
}
/*
	 0 1 2 3 4 5 6 7
	 c o m p u t e r
	       j i
	 r e t u p m  o c

	 0 1 2 3 4
	 s h r e y
	   j   i
	 y e r h s

	 c=r
	 x[i]=x[j]=c
	 x[j]=r
*/