/* Merge sort -> External Sort
		1  2  3  4   5
n1	arr1 :  22 33 88 99 100
	   i                     ^
n2	arr2 :  11 55 66 77
	   j                ^
	arr3 :  11 22  33  55 66 77 88  99 100
	  k                                 ^
*/

#include<stdio.h>
#include<conio.h>
	int n1=0,n2=0,n=0,a[10],b[10],c[20];
	void srt_merge();
	void disp();
	void disp1(int [],int );

void main()
{
	int i;
	clrscr();
	printf("\n\n\t\tEnter size of array A:");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		printf("\n\t\tEnter data : ");
		scanf("%d",&a[i]);
	}
	printf("\n\n\t\tEnter size of array B:");
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	{
		printf("\n\t\tEnter data : ");
		scanf("%d",&b[i]);
	}
	disp1(a,n1);
	disp1(b,n2);
	n=n1+n2;
	srt_merge();
	printf("\n\n\t\tMerge sorting...");
	disp();
	getch();
}
void srt_merge()
{
	int i=0,j=0,k=0;
	while(i<n1 && j<n2)
	{
	    if(a[i]<=b[j])
	    {
		c[k]=a[i];
		k++;
		i++;
	    }
	    else
	    {
		c[k]=b[j];
		k++;
		j++;
	    }
	    disp();
	}
	while(i<n1)
	{
		c[k]=a[i];
		k++;
		i++;
	       //	disp();
	}
	while(j<n2)
	{
		c[k]=b[j];
		k++;
		j++;
	       //	disp();
	}
}

void disp()
{
	int i;
	printf("\n\t\t");
	for(i=0;i<n;i++)
	{
		printf(" %d",c[i]);
	}
	getch();
}

void disp1(int x[], int n)
{
	int i;
	printf("\n\t\t");
	for(i=0;i<n;i++)
	{
		printf(" %d",x[i]);
	}
	getch();
}

