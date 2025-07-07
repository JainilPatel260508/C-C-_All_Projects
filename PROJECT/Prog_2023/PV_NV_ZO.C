/*
	To check the no is -ve, +ve and zero
*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int n;
   clrscr();
   printf("\n\t\tEnter a any no:");
   scanf("%d",&n);
   if(n>0)
   {
	printf("\n\n\t\t %d No is Positive",n);
   }
   else
   {
	printf("\n\n\t\t %d No is Negative",n);
   }

    getch();
}
