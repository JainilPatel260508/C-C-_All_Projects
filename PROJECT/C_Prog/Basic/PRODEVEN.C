//product of 2*4*6....N

#include<stdio.h>
#include<conio.h>

void main()

{  int i,s=1,n;
   clrscr();
   printf("\n\n\t\tEnter a value of N:");
   scanf("%d",&n);
   for(i=2;i<=n;i=i+2)
   {
    s=s*i;
   }
   printf("\n\n\t\t S:%d",s);

	getch();
}