 //* rotational pattern

#include<stdio.h>
#include<conio.h>

void main()
{
	int j=0,i=0,c,r,m[25][25],a=0,b=0,k=1;
	clrscr();
	printf("enter the number of rows :");
	scanf("%d",&r);
	printf("enter the number of columns :");
	scanf("%d",&c);

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		m[i][j]=0;
		}
	}

	a=r-1;
	b=0;
	while(k<(r*c))
	{

	while(b<=(c-1) && m[a][b]==0)
		{
			m[a][b]=k;
			k++;
			b++;
		}
		a=a-1;
		b=b-1;

		while(b>=0 && m[a][b]==0)
		{
			m[a][b]=k;
			k++;
			b--;
		}
		a=a-1;
		b=b+1;
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%3d",m[i][j]);
		}
		printf("\n");
	}



	getch();
}