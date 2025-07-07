#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,j,k;
	clrscr();
	printf("Enter any number:-");
	scanf("%d",&n);
	res(n);
}
int res(int x)
{
	int i,flag=0;

	for(i=2;i<x/2;i++)
	{
		if(x%i==0)
		{
			flag=1;
			break;
		}
	}

	if(flag==1)
	{
		printf("\n This is not Prime");
	}
       else{
		printf("\n This is Prime");
	}
	getch();
}