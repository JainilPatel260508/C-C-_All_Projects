/*
Palindrom no. check
*/

#include<stdio.h>
#include<conio.h>

void main()
{
  unsigned long int j,i,s,n,x=0;

  clrscr();

  printf("\n\tEnter A Number(max 9 digits): ");
  scanf("%ld",&n);
  j=n;

  for(;n!=0;)
  {
    i=n%10;
    x=i+10*x;
    s=n-i;
    n=s/10;

  }

  printf("\n\tOriginal no: %ld \n\tResult : %ld",j,x);

  if(x==j)
  printf("\n\t%ld is a palindrom number",j);
  else
  printf("\n\t%ld isn't a palindrom number",j);

  getch();
}
