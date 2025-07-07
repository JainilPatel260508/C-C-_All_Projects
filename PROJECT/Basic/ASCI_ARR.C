#include<stdio.h>
#include<conio.h>

void main()
{
     char n[20];
     int i,j,k;

     clrscr();

     printf("Enter Your Name:");
     scanf("%s",n);

     for(i=0;n[i]!='\0';i++)
     {

     printf("%c-->%d\n",n[i],n[i]);
     }
     getch();
}