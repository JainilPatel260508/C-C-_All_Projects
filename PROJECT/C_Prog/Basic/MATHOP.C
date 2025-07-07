//   Mathematical Operation

#include<stdio.h>
#include<conio.h>

void main()
{
   int x,y,a,b,e,c;
   float d;


   clrscr();

   printf("\nInput the value of x:");
   scanf("%d",&x);
   printf("\nInput the value of y:");
   scanf("%d",&y);

   a=x+y;
   b=x-y;
   c=x*y;
   d=(float)x/y;
   e=x%y;

   printf("\n The sum of 2 no. is %d",a);
   printf("\n The subtraction of 2 no. is %d",b);
   printf("\n The product of 2 no. is %d",c);
   printf("\n The division of 2 no. is %.2f",d );
   printf("\n The modulo of 2 no. is %d",e);

   getch();



}