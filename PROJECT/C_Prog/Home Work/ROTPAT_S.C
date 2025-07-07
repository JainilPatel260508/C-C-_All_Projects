/*
	Rotational Pattern
	1 8  9 16
	2 7 10 15
	3 6 11 14
	4 5 12 13
*/
#include<stdio.h>
#include<conio.h>

void matdisp();

int r,c,a=0,b=0,m[50][50];

void main()
{
	int i,j,k=0,n=0;

clrscr();

	printf("\n\tEnter no. of row: ");
	scanf("%d",&r);
	printf("\n\tEnter no. of column: ");
	scanf("%d",&c);

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		   m[i][j]=-1;
		}
	}
	n=c*r;

	matdisp();

	while(k<n)
	{
	  // first forward col
	    while(m[a][b]==-1)

	   {
	     k++;
	     m[a][b]=k;
	     matdisp();
	     a++;
	   }
	   b++;
	   a--;
	   //Sec reverse col
	   while(m[a][b]==-1)
	   {
	     k++;
	     m[a][b]=k;
	     matdisp();
	     a--;
	   }
	   a++;
	   b++;
	   //third forward col
	   while(m[a][b]==-1)
	   {
	     k++;
	     m[a][b]=k;
	     matdisp();
	     a++;
	   }
	   b++;
	   a--;
	   //fourth reverse col
	   while(m[a][b]==-1)
	   {

	     k++;
	     m[a][b]=k;
	     matdisp();
	     a--;
	   }
	    a++;
	    b--;

	}
	printf("\n\n\t\t Wow... I have achived...");
	getch();
}

void matdisp()
{
int i,j;
delay(200);
clrscr();
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		   m[i][j]!=-1?
			printf("%3d",m[i][j])
		   : printf("   ");
		}
		printf("\n");
	}

}