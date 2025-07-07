#include<stdio.h>
#include<conio.h>

void main()
{
	int m[5],i,l=0,j=-1,n=1000;
	float k;

	clrscr();
	printf("enter 5 marks:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&m[i]);


		l=l+m[i];
	     if(m[i]>j)
	     j=m[i];
	      if(m[i]<n)
	     n=m[i];
	}
	k=l/5.0;
	printf("The average of the five numbers is %.2f ",k);
	printf("\nThe maximum of the entered numbers is %d",j);
	printf("\nThe minimum of the entered numbers is %d",n);
	getch();
}