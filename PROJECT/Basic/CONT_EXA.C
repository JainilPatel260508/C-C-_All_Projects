/*
       Example of continue stat...
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n=20;
 .	int mark[50];
	int num[2][6] = {{1,2},{3,4}};
	clrscr();
	for(i=1;i<=n;i++)
	{
		if(i>=6 && i<=15)
		 continue;
		printf("\n\tI : %d",i);
		mark[i-1]=i;
	}
	for(i=0;i<20;i++)
	printf("\n\tmarks[%d] : %d",i,mark[i]);
	getch();


}