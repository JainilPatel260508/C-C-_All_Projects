/*
Function Type:
		1.  No arg and No Return value
		2.  No arg but Return value
		3.  arg but No Return value
		4. arg and Return value
		5. return multiple value
*/
#include<stdio.h>
#include<conio.h>
void main()
{
float sinterest(int p,int n,float r);
float si;
   int p,n;
   float r;
   clrscr();
   printf("\nEnter Principal Amount:");
   scanf("%d",&p);
   printf("\nEnter No of Year:");
   scanf("%d",&n);
   printf("\nEnter rate of Interest:");
   scanf("%f",&r);
//   si=sinterest(p,n,r);
   printf("Result:%.2f",sinterest(p,n,r));
getch();
}
float sinterest(int p,int n, float r)
{
   float res;
   res=(p*r*n)/100;
   return res+p;
}
