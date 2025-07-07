/*
	Big3
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("\n\t\tEnter a value of A:");
	scanf("%d",&a);
	printf("\n\t\tEnter a value of B:");
	scanf("%d",&b);
	printf("\n\t\tEnter a value of C:");
	scanf("%d",&c);

	if(a>b)
	{
	      if(a>c)
		printf("\n\t\tA is big.");
	      else
		printf("\n\t\tc is big.");
	}
	else
	{
	      if(b>c)
		printf("\n\t\tb is big.");
	      else
		printf("\n\t\tc is big.");
	}
	printf("\n\n\t\t Using && (And)");
	if(a>b && a>c)
		printf("\n\t\ta is big.");
	else if(b>c)
		printf("\n\t\tb is big.");
	      else
		printf("\n\t\tc is big.");
	printf("\n\n\t\t Using condition or Ternery Operator");


//        condition?true:false;  //Ternery Operator
//	  c=a>b?a:b;
	getch();
}