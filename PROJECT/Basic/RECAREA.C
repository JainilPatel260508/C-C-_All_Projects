/* Area of rectangle*/
#include<stdio.h>
#include<conio.h>

void main()
{
 int l=0;
 int b=0;
 int a=0;

 clrscr();

 printf("enter the value of length:");
 scanf("%d",&l);
 printf("enter the value of breath:");
 scanf("%d",&b);
 a=l*b;
 printf("the area of rectangle: %d",a);
 getch();
}