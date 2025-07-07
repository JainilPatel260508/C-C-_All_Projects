/*
	Rotational Pattern
*/
#include<stdio.h>
#include<conio.h>


void main()
{
	int i,j,m[50][50],r,c,a=0,b=0,k=0,p=0;

clrscr();

	printf("\n\tEnter no. of row: ");
	scanf("%d",&r);
	printf("\n\tEnter no. of column: ");
	scanf("%d",&c);

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		   m[i][j]=0;
		}
	}

	while(k<16)
	{
	   p++;
	   while(b<(c-p) && m[a][b]==0 && a==(p-1))
	   {
	     k++;
	     m[a][b]=k;
	     b++;
	   }
	   while(b==(c-p) && m[a][b]==0 && a<(r-p))
	   {
	     k++;
	     m[a][b]=k;
	     a++;
	   }
	   while(a==(r-p) && m[a][b]==0 && b>(p-1))
	   {
	     k++;
	     m[a][b]=k;
	     b--;
	   }
	   if(p>1)
	 {
	   while(b==(p-1) && m[a][b]==0 && a>=p)
	   {

	     k++;
	     m[a][b]=k;
	     a--;
	   }
	 }
	   else
	 {
	   while(b==(p-1) && m[a][b]==0 && a>p)
	   {

	     k++;
	     m[a][b]=k;

	     a--;
	   }
	 }

	}

	printf("\n\n");

	for(a=0;a<r;a++)
	{
		for(b=0;b<c;b++)
		{
		  printf("%3d",m[a][b]);
		}
		printf("\n");
	}


	getch();
}