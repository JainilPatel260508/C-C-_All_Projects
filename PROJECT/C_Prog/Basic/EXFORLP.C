//Sum of 1^2+3^2+5^2.....N^2
//Example of for.... loop
/*
	Syntex:
		for(initialize;condition;increment or decrement)
		{
		    body of loop....
		}
	Example-1:
		for(i=0;i<5;i++)
		{
		    printf("\n\t I:%d",i);
		}

	Example-2:
		for(i=5;i>0;i--)
		{
		    printf("\n\t I:%d",i);
		}
*/


#include<stdio.h>
#include<conio.h>
void main()
{  int i,s=0,n;
   clrscr();
   printf("\n\n\t\tEnter a value of N:");
   scanf("%d",&n);
   i=1;
   for(;i<=n;)
   {
    printf("\n\t\t I: %d",i);
    s=s+i;
    i++;
   }
   printf("\n\n\t\t S:%d",s);
   for(i=n;i>=1;i--)
   {
    printf("\n\t\t I: %d",i);
//    s=s+i;
//    i++;
   }
//   printf("\n\n\t\t S:%d",s);

getch();
}