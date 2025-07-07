/*
	Check the no is prime or not prime.
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,k;
	int i,flag=0; //This is prime flag=1-> This is not prime
	clrscr();
	printf("\n\nEnter a value of N:");
	scanf("%d",&n);
	if(n<0)
	{
	 k=n;
	 n=-n;
	 }
	 else
	 {
	 k=n;
	 }

	for(i=2;i<=(n-1)/2;i++)
	{
		if(n%i==0)
		{
		   flag=1;
		   break;
		}
	}
	if(flag==0)
	{
	  printf("\n\n\t\t %d is prime",k);
	}
	else
	{
	  printf("\n\n\t\t %d is not prime",k);
	  }
getch();
}