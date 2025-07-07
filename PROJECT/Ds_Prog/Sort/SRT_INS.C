#include<stdio.h>
#include<conio.h>
int n=8,a[8];
	void srt_ins();
	void disp();

void main()
{
	int i;
	clrscr();
	a[0]=0;
	for(i=1;i<n;i++)
	{
		printf("\n\t\tEnter data : ");
		scanf("%d",&a[i]);
	}
	srt_ins();
//	clrscr();
	printf("\n\n\t\tInsertion Sorting...");
	disp();
	getch();
}

void srt_ins()
{
	int k,temp,ptr;
	for(k=2;k<n;k++)
	{
		temp=a[k];
		ptr=k-1;
		while(temp<a[ptr])
		{
			a[ptr+1]=a[ptr];
			ptr--;
			disp();
		}
		a[ptr+1]=temp;
		disp();
	}
}


void disp()
{
	int i;
	printf("\n\t\t");
	for(i=0;i<n;i++)
	{
		printf("  %d",a[i]);
	}
	getch();
}