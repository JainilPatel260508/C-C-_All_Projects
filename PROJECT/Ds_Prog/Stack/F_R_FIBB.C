#include<stdio.h>
#include<conio.h>

int fibbo(int);
int main()
{

	int n,c,i=1;
	clrscr();
	printf("\n\n\t\tEnter a No::");
	scanf("%d",&n);
	printf("fibbo series :");
	for(c=1;c<=n;c++)
	{
	   printf(" %d",fibbo(i));
	   i++;
	}
 //	   printf("\nx: %d",fibbo(n));
getch();
}

int fibbo(int n)
{
	int x,y;
	if(n==0)
	{
	 return(0);
	}
	else if(n==1)
		 {
		 return(1);
		 }
		else
		 {
		   x=fibbo(n-1);
		   y=fibbo(n-2);
		 //  printf("\nx: %d y: %d",x,y);
		   return x+y;
		 }

}
 /*
	n=5
       x=4  y=2
       x=1  y=0

 */





