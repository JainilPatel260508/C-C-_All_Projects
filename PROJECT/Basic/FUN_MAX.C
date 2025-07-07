/*
	user defined max or min
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int res,m,n,x,y;
	clrscr();

	printf("Enter A value:");
	scanf("%d",&m);

	printf("Enter A value:");
	scanf("%d",&n);

	res=high(m,n);
	printf("\nThe maximum number is %d",res);
	getch();
}

int high(int x,int y)
{

	int k;


     k=(x>y)?x:y;

	return(k);

}
.