#include<stdio.h>
#include<conio.h>

void dispmat(int x[3][3]);
void main()
{
       int m[3][3], n[3][3], p[3][3];
       int i,j,k,l,a,b;

       clrscr();
	printf("\n\tEnter a matrix 1 :\n");
       for(i=0;i<3;i++)
       {
	for(j=0;j<3;j++)
	{
	scanf("%d",&m[i][j]);
	}
       }
	printf("-----------------------------");

	printf("\n\tEnter a matrix 2 :\n");
       for(i=0;i<3;i++)
       {
	for(j=0;j<3;j++)
	{
	scanf("%d",&n[i][j]);
	}
       }

       printf("\n-----------------------------");
       dispmat(m);

       printf("\n-----------------------------");
       dispmat(n);

	printf("\n\tResulted matrix :\n");

	 for(i=0;i<3;i++)
       {
	for(j=0;j<3;j++)
	{
		p[i][j]=m[i][j]+n[i][j];
		printf("%3d",p[i][j]);
	}
	printf("\n");
       }
       getch();

}
void  dispmat(int x[3][3])
{

	int i,j;

	clrscr();
	for(i=0;i<3;i++)
       {
	 printf("\n");
	for(j=0;j<3;j++)
	{
		printf("%3d",x[i][j]);

	}

       }
getch();
}