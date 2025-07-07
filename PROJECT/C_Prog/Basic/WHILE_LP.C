/*
	Loop --> For..Loop
	Loop --> While..loop  --> What is the diff between while and do..while loop
	Loop --> Do..While    -->
*/
#include<stdio.h>
#include<conio.h>

void main()
{
   int i,n,j;
   clrscr();
   printf("\n\n\t\ N:");
   scanf("%d",&n);
   i=1;
 //  for(;i<=n;)
   while(i<=n)
   {
	printf("\n\t\t I:%d",i);
	i++;
   }
   j=1;
   do
   {
	printf("\n\t\t J:%d",j);
	j++;
   }while(j<=n);

   getch();
}