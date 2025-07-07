// 1^1+2^2+......n^N.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()

{
	int n;
	float s=0,i;


	clrscr();
	printf("\n\t\t Input n:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)

	{
		s=pow(i,i)+s;

	}
	printf("\n\t\t%.2f ",s);
	getch();
}