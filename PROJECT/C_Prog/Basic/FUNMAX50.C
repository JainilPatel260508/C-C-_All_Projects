/*
	user defined max or min
*/
#include<stdio.h>
#include<conio.h>
int n;
void main()
{
	int res,m[50],i;
	clrscr();
	printf("Enter a value of n:");
	scanf("%d",&n);
	printf("Enter A value:");
       for(i=0;i<n;i++)
       {
	scanf("%d",&m[i]);
       }
	res=high(m);
	printf("\nThe maximum number is %d",res);
	getch();
}

int high(int m[50])
{
	int k=-1000,j;
	for(j=0;j<n;j++)
	{
		if(m[j]>k)
		{
			k=m[j.];
		}
	}
	return(k);
}
