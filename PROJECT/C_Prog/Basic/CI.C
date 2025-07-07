/*
      Find Compund interest and net amount
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,p;
	double r,ci,netamt;
	clrscr();
	printf("\n\n\t\tEnter a Principal Amount:");
	scanf("%d",&p);
	printf("\n\t\tEnter a No of Year:");
	scanf("%d",&n);
	printf("\n\t\tEnter a Rate of Interest:");
	scanf("%lf",&r);
	netamt=p*pow((1+r/100),n);
	ci=netamt-p;
	printf("\n\t\tCompund Interest: %.2lf",ci);
	printf("\n\t\tNet Amt: %.2lf",netamt);
	getch();

}