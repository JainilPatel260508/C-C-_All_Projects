
// Area of triangle

#include<stdio.h>
#include<conio.h>

void main()

{
  int x=0;
  int y=0;
  float a;

  clrscr();
  printf("\n Input the value of height of triangle:");
  scanf("%d",&x);
  printf("\n Input the value of base of triangle:");
  scanf("%d",&y);

  a=0.5*x*y;
  printf("\n Area of triangle:%.2f",a);

  getch();
}