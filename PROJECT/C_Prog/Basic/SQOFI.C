 //sum of 1^1+2^2+3^3....N^n

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
      int n=0;
      float s=0,i;

	clrscr();

	printf("\n\n\tInput N:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 s=s+pow(i,i);
	}
//	printf("\n\n\t\tN:%d",n);
//	s=pow(n,n);
	printf("\n\n\t S=%.2f",s);
	getch();
}