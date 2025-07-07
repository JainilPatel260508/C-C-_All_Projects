/*
Function Type:
		1.  No arg and No Return value
		2.  No arg but Return value
		3.  arg but No Return value
		4. arg and Return value
*/
#include<stdio.h>
#include<conio.h>
void main()
{
void  printline(char,int);
float sinterest();
float si;
clrscr();
	si=sinterest();
	printf("Resumt:%.2f",si);

getch();
}
float sinterest()
{
   int p,n;
   float r,res;
   printf("\nEnter Principal Amount:");
   scanf("%d",&p);
   printf("\nEnter No of Year:");
   scanf("%d",&n);
   printf("\nEnter rate of Interest:");
   scanf("%f",&r);
   res=(p*r*n)/100;
   return res;
}
