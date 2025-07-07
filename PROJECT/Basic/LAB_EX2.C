/*
Lab Ex 2 chp 15
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int m[5][2],i,j,k=-1,r;

	clrscr();
//	printf("\t\nRoll no.: \t Marks(out of 80):\n");
	printf("\nRollno.\t Marks:\n");
	for(i=0;i<20;i++)
	{
	 r=i+1;
	 printf("%d\t",r);
	 scanf("%d",&m[0][i]);

	 if(m[0][i]>k)
	 {
		k=m[0][i];
	 }
	 }
	printf("\n highest marks:%d",k);

	for(i=0;i<20;i++)
	{
	       if(m[0][i]>=50)
		printf("\n%d\t%2d",i+1,m[0][i]);

}
printf("\n-------------------------------------------------------");
	for(i=0;i<20;i++)
	{
	       if(m[0][i]<50)
		printf("\n%d\t%2d",i+1,m[0][i]);
	}                 .
	getch();
}