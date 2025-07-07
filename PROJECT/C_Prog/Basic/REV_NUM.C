/*
Reversing the no.
*/

#include<stdio.h>
#include<conio.h>

void main()
{
  unsigned long int i,s,n,x=0;

  clrscr();

  printf("\n\tEnter A Number(max 9 digits): ");
  scanf("%ld",&n);

  for(;n!=0;)
  {
    i=n%10;
    x=i+10*x;
    s=n-i;
    n=s/10;

  }

  printf("\n\tResult : %ld",x);

  getch();
}
