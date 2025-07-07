// Area of Square

#include<stdio.h>
#include<conio.h>

void main()

{
   int s=0;
   int a=0;

   clrscr();

   printf("\n Input the side of square:");
   scanf("%d",&s);

   a=s*s;

   printf("\n Area Of Square: %d",a);

   getch();
}