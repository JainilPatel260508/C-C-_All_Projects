#include<stdio.h>
#include<conio.h>

void main()
{
   float a,b,c;
   int n,p,q;


	do
	{
	clrscr();

	  printf("\n 1) Addition \n 2) Subtraction \n 3) Division \n 4) Multiplication \n 5) Exit");
	  printf("\n\nEnter no. to do mathematic operation: ");
	  scanf("%d",&n);

	if(n>=1 && n<=4)
	{
	 printf("\nEnter 1st no.:");
	 scanf("%f",&a);
	 printf("\nEnter 2nd no.:");
	 scanf("%f",&b);
	 }

	 switch(n)
	 {
	  case 1:
	  printf("\n%.2f+%.2f=%.2f",a,b,a+b);
	  break;

	  case 2:
	  printf("\n%.2f-%.2f=%.2f",a,b,a-b);
	  break;

	  case 4:
	  printf("\n%.2f*%.2f=%.2f",a,b,a*b);
	  break;

	  case 3:
	  printf("\n%.2f/%.2f=%.2f",a,b,a/b);
	  p=a;
	  q=b;
	  printf("\nmod(%.2f,%.2f)=%d",a,b,(p%q));
	  break;

	  case 5:
	  break;

	  default:
	  printf("Enter a correct option");
	  break;

	 }
	 getch();
	}while(n!=5);


}