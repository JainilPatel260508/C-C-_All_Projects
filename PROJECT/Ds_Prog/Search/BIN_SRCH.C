#include<stdio.h>
#include<conio.h>

int n=10,k[10];

void main()
{
	int x,i,r;
	int binary(int);
	clrscr();

	printf("\n\n\t\tHow many data : ");
	scanf("%d",&n);

	printf("\n\n\t\tEnter data must be in sorted order...");
	for(i=0;i<n;i++)
	{
		printf("\n\t\tEnter data %d : ",i+1);
		scanf("%d",&k[i]);
	}

	printf("\n\n\t\tEnter data for search : ");
	scanf("%d",&x);

	r=binary(x);

	if(k[r]!=x)
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
int binary(int t)
{
	int cnt=1,low=0,high=n-1,mid=(low+high)/2;

	while(low<=high && k[mid]!=t)
	{
		if(t<k[mid])
			high=mid-1;
		else if(t>k[mid])
			low=mid+1;
		mid=(low+high)/2;
		cnt++;
	}
	printf("\n\n\t\tTotal iteration %d",cnt);
	return mid;
}



