/*
	Write a program to sum of two nos.
*/
#include<stdio.h>
#include<conio.h>

void main()
{

    int x=0;
    int y=0;
    int z=0;
    clrscr();
    printf("\nEnter a value of X:");
    scanf("%d",&x);
    printf("\nEnter a value of Y:");
    scanf("%d",&y);
    z=x+y;
    printf("\nSum of two nos: %d",z);

    getch();
}