// 1-3+5-7.......N

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int n,i,s=0, k=-1;
	clrscr();

	printf("\n\n\t Input N:");
	scanf("%d",&n);

	for(i=1;i<=n;i=i+2)
	{
	 k=-k;
	 s=s+i*k;
	}
	printf("\n\n\t S= %d",s);
	getch();
}
