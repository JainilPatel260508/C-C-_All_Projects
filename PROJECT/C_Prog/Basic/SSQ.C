//          1^2+2^2+3^2+........n

#include<stdio.h>
#include<conio.h>

void main()
{
  int n=0, i=0, s=0;

  clrscr();

  printf("\n\n\tInput N:");
  scanf("%d",&n);

 l1:  i=i+1;
  if (i<=n)

  { s=i*i+s;
    goto l1;
  }

  else

  { printf("\n\n\tThe sum:%d",s);
  }
   getch();
}