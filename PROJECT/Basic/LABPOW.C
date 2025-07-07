#include<stdio.h>
#include<conio.h>

int power(int,int);

void main()
{
	int x,y,res;

	clrscr();

	printf("\nx:");
	scanf("%d",&x);

	printf("\ny:");
	scanf("%d",&y);
	res=power(x,y);
	printf("\nResult:%d",res);

	getch();
}

int power(int a,int b)
{
int r=a,i;
for(i=1;i<b;i++)
{
      r=r*a;
}
return r;
}