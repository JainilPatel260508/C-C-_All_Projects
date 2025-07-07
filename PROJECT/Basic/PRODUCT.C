//product of 1*2*3.....*N

#include<stdio.h>
#include<conio.h>

void main()

{  int i,s=1,n;
   clrscr();
   printf("\n\n\t\tEnter a value of N:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    s=s*i;
   }
   printf("\n\n\t\t S:%d",s);

	getch();
}