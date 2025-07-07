#include<stdio.h>
#include<conio.h>
# define n 11
int k[n];
void main()
{
	 int start=1,finish=n-1,i,t;
	 void rmerge(int,int);
	 clrscr();

	 for(i=1;i<n;i++)
	 {
	   printf("Arr[ %d ] : ",i);
	   scanf("%d",&k[i]);
	 }
	   rmerge(start,finish);

	   printf("\n\n\t\t\tSorted Array : \n");

	  for(t=1;t<n;t++)
	    printf(" %5d",k[t]);
  getch();
}

void rmerge(int s, int f)
{
    int size,mid;
    void merge(int,int,int);
	 size=f-s+1;
    if (size<=1)
	 return;
	mid=s+(size/2)-1;
	rmerge(s,mid);
	rmerge(mid+1,f);
	merge(s,mid+1,f);
	return;
}
/*
	1 2   3 4    5 6  7 8
*/
void merge(int f,int s,int t)
{
	int i,j,l,temp[n],p,a;
	i=f;
	j=s;
	l=0;
	while(i<s && j<=t)
	{
	    if (k[i]<=k[j])
		   temp[++l]=k[i++];
		 else
		    temp[++l]=k[j++];
	}
	 if (i>=s)
	 {
		while(j<=t)
		  temp[++l]=k[j++];
	 }
	 else
	  {
		while(i<s)
		temp[++l]=k[i++];
	   }

	for(p=1;p<=l;p++)
	    k[f-1+p]=temp[p];

	for(a=f;a<=t;a++)
	    printf(" %5d",k[a]);
	printf("\n");
  getch();
  return;
}