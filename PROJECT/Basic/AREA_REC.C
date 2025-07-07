/*
	area of rect
*/
#include<stdio.h>
#include<conio.h>

void main()
{
  float l,b,a;
  clrscr();

  printf("\n Enter length: ");
  scanf("%f",&l);
  printf("\n Enter breadth: ");
  scanf("%f",&b);

   a=l*b;

   printf("\n Area of rectangle : %.2f",a);
  getch();
}