/*
	Find compound interest and net amount using simple interest formula.
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	float p,ci,netamt;
	int n,r,i;
	clrscr();
	printf("\n\t\tEnter a Principal value:");
	scanf("%f",&p);
	printf("\n\t\tEnter a Rate of interest:");
	scanf("%d",&r);
	printf("\n\t\tEnter a No of Year");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    ci=p*r/100.0;
	    netamt=ci+p;
	    printf("\n\t Year:%d  P:%.2f CI:%.2f NetAmt:%.2f",i,p,ci,netamt);
	    p=netamt;

	}
  getch();
}