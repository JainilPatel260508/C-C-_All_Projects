#include<stdio.h>
#include<conio.h>

void main()
{
     int x=256;

     clrscr();

     printf("x=%d\n",x);
     printf("x=%o\n",x);
     printf("x=%0x\n",x);
     printf("x=%ld\n",(long int)x);
     printf("x=%.2f\n",(float)x);

     getch();
}