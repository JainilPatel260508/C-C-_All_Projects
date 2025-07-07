#include<stdio.h>
#include<conio.h>
int n=10,k[10];
void main()
{
	int x,i,r;
	int linear(int);
	clrscr();

	printf("\n\n\t\tHow many data : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\n\t\tEnter data %d : ",i+1);
		scanf("%d",&k[i]);
	}

	printf("\n\n\t\tEnter data for search : ");
	scanf("%d",&x);

	r=linear(x);

	if(r==n)
	{
		printf("\n\n\t\tUnsucessful..");
	}
	else
	{
		printf("\n\n\t\tSucessful..");
		printf("\n\t\t%d -> %d",r,x);
	}

	getch();
}
int linear(int t)
{
	int i=0;
	k[n]=t;

	while(k[i]!=t)
	{
		i++;
	}
	return i;
}



