#include<stdio.h>
#include<conio.h>
int n=8,a[8];
	void srt_sel();
	void disp();

void main()
{
	int i;
	clrscr();
	for(i=0;i<n;i++)
	{
		printf("\n\t\tEnter data : ");
		scanf("%d",&a[i]);
	}
	srt_sel();
	printf("\n\n\t\tSelection sorting...");
	disp();
	getch();
}

void srt_sel()
{
	int i,min,loc,j,t;
	for(i=0;i<n-1;i++)
	{
		min=a[i];
		loc=i;
		printf("\n\t\tMin :%d Loc:%d",min,loc);
		getch();
		for(j=i+1;j<n;j++)
		{
			if(min>a[j])
			{
				min=a[j];
				loc=j;
				printf("\n\t\tMin :%d Loc:%d",min,loc);
				getch();
			}
		}
		t=a[i];
		a[i]=a[loc];
		a[loc]=t;
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