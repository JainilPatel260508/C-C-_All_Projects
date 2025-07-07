// Sum of 2^2+4^2+6^2....N^2

#include<stdio.h>
#include<conio.h>

void main()
{
  int n=0, i=0, s=0;

  clrscr();

  printf("\n\n\tInput N:");
  scanf("%d",&n);

 l1:  i=i+2;
  if (i<=n)

  { s=i*i+s;
    goto l1;
  }

  else

  { printf("\n\n\tThe sum:%d",s);
  }
   getch();
}