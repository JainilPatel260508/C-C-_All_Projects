#include<stdio.h>
#include<conio.h>

void main()
{

/*	printf("\nHi How r u ......");
	getch();
	main();*/
	int rfact(int);
	int n;
	clrscr();
	printf("\n\n\t\tEnter a No:");
	scanf("%d",&n);
	printf("\n\n\t\t Rec Fact:%d",rfact(n));
	getch();
}
int rfact(int n)
{
	int f=1;
	if (n==1)
	  return 1;
	else
	  f=n*rfact(n-1);

  printf("\nF: %d",f);
return f;
}