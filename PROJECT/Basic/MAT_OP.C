#include<stdio.h>
#include<conio.h>

void dispmat(int [][3]);
int n;
void main()
{
	int r,c,mat[3][3]={1,2,3,4,5,6,7,8,9};
	clrscr();
	n=3;
/*	printf("Enter no. of Row:");
	scanf("%d",&r);
	printf("Enter no. of Cols:");
	scanf("%d",&c);
*/
	dispmat(mat);

	getch();
}
void dispmat(int m[3][3])
{
     int i,j,rs[3]={0},rm[3]={1000,1000,1000},rmax[3]={0},ra[3]={0},cs[3]={0},cm[3]={1000,1000,1000},cmax[3]={0},ca[3]={0};
     printf("\n\tMatrix\t\tSum\tMin\tMax\tAvg\n\t");
     for(i=0;i<n;i++)
     {

	for(j=0;j<3;j++)
	{

	    printf("  %d",m[i][j]);
	    rs[i]+=m[i][j];

	    if(rmax[i]<m[i][j])
	   {
	    rmax[i]=m[i][j];
	   }

	    if(rm[i]>m[i][j])
	   {
	    rm[i]=m[i][j];
	   }
	   ra[i]=rs[i]/3;
   // ------------------------------------------------------------
	    cs[j]+=m[i][j];

	    if(cmax[j]<m[i][j])
	   {
	    cmax[j]=m[i][j];
	   }

	    if(cm[j]>m[i][j])
	   {
	    cm[j]=m[i][j];
	   }
	   ca[j]=cs[j]/3;
	}
	printf("\t %d\t %d\t %d\t %d",rs[i],rm[i],rmax[i],ra[i]);
	printf("\n\t");
     }

     printf("\nSum\t %d %d %d",cs[0],cs[1],cs[2]);
     printf("\nMin\t  %d  %d  %d",cm[0],cm[1],cm[2]);
     printf("\nMax\t  %d  %d  %d",cmax[0],cmax[1],cmax[2]);
     printf("\nAvg\t  %d  %d  %d",ca[0],ca[1],ca[2]);
}