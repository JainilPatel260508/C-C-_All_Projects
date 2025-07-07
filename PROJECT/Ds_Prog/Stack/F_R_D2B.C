#include<stdio.h>
#include<conio.h>

void main()
{
	 void d2b(int);
	 int n;
	 clrscr();
	 printf("Enter No. in Decimal :");
	 scanf("%d",&n);
	 printf("\n\n\t\tBinary:");d2b(n);
getch();
}
void d2b(int n)
{
	int r=0;
	 if(n==0)
	    return ;
	 else
	 {   r=n%2;

	     d2b(n/2);
	  }
 printf("%d",r);
 return ;
}
/*
	n=10
	r=0
	d2b(n/2)
	n=5
	r=1
	d2b(n/2)
	n=2
	r=0
	d2b(n/2)
	n=1
	r=1
	d2b(n/2)
	n=0

*/