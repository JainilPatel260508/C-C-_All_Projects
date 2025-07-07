//sum of 1-2+3-4.....N

#include<stdio.h>
#include<conio.h>

void main()

{  int i,s=0,n,k=-1;
   clrscr();
   printf("\n\n\t\tEnter a value of N:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    k=-k;
    s=s+i*k;
   }
   printf("\n\n\t\t S:%d",s);

	getch();
}