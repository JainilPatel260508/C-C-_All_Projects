/*
		matrix using pointer
*/
#include<stdio.h>
#include<conio.h>
void dispmat(int *);
void main()
{
	int m[3][3]={1,2,3,4,5,6,7,8,9},i,j,*ptr;
	clrscr();
  //	ptr=&m[0][0];
	//dispmat(&m[0][0]);
	dispmat(+-m[0]);
/*	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   {
		 printf(" %d",*ptr);
		 ptr++;
	   }
	   printf("\n");
	}   */

getch();
}
void dispmat(int *m)
{
	int i,j;

	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   {
		 printf(" %d",*m);
		 m++;
	   }
	   printf("\n");
	}


}