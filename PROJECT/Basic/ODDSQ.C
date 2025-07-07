// Sum of 1^2+3^2+5^2.....N^2

#include<stdio.h>
#include<conio.h>

void main()

{ int n=0, s=0, i=-1;

    clrscr();

    printf("\n\n\t Input N:");
    scanf("%d",&n);

    l1: i=i+2;
    if (i<=n)

    { s=s+i*i;
     goto l1;
    }

    else

   { printf("\n\n\t S=%d",s);
   }
   getch();
}