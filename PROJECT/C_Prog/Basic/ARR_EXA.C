/*
	Array
	1-Dim Array
	2-Dim Array
*/
#include<stdio.h>
#include<conio.h>

void main()
{
     int arr[5],i,j,res,s=0;
     int max=-100,maxp=-1;
     int m[3][3];
     clrscr();
/*     printf("\n\n\t\tEnter a value of array:");
     for(i=0;i<5;i++)
     {
	printf("\narr[%d]:",i+1);
	scanf("%d",&arr[i]);
	s=s+arr[i];
	if(max<arr[i])
	{
	  max=arr[i];
	  maxp=i+1;
	}
     }
     for(i=0;i<5;i++)
     {
	printf(" %d",arr[i]);
     }
     printf("\n\n\t Sum : %d",s);
     printf("\n\n\t Max : %d   Max Pos: %d",max,maxp);*/
     printf("\n\n\tEnter a matrix:\n");
     for(i=0;i<3;i++)
     {
	for(j=0;j<3;j++)
	{
	    scanf("%d",&m[i][j]);
	    s=s+m[i][j];
	}
     }
     printf("\n\n\tmatrix:\n");
     for(i=0;i<3;i++)
     {
	for(j=0;j<3;j++)
	{
	    printf(" %d",m[i][j]);
	}
	printf("\n");
     }
       printf("\n\n\t Sum : %d",s);
     getch();
}