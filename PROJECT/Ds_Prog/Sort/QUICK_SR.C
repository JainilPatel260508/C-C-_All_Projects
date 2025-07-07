/*
	Quick Sort or Partition sort
	divide and conquer rules
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	//{44,55,88,66,22,33,22,11,66,77};
	void qsort(int [], int ,int);
	int i,k[10]={52,33,84,22,75,68,104,46,109,97};
	clrscr();
	for(i=0;i<10;i++)
	{
		printf(" %d",k[i]);
	}
	getch();
	printf("\n\n");
	qsort(k,0,9);
	printf("\n\n\t\tSorted Data:");
	for(i=0;i<10;i++)
	{
		printf(" %d",k[i]);
	}
	getch();
}
void qsort(int k[],int lb, int  ub)
{
    int flag=1,i,j,key,temp,p;
    if (lb<ub)
	{i=lb;
	 j=ub+1;
	 key=k[lb];
	while(flag==1)
	{
/*	  for(p=lb;p<=ub;p++)
	     printf("%5d",k[p]);
	  printf("\n");*/
	  i=i+1;
	  while(k[i]<key)  //LtoR fetch higher value compar to key value
		i++;
	   j=j-1;
	   while(k[j]>key)  //RtoL fetch lower value compar to key value
		  j--;
	   if(i<j)
	   { temp=k[i];
		k[i]=k[j];
		k[j]=temp;
		for(p=lb;p<=ub;p++)
			printf("%5d",k[p]);
		printf("\n");
		getch();
	   }
	   else
		flag=0;
	}
	temp=k[lb];
	k[lb]=k[j];
	k[j]=temp;
	for(p=lb;p<=ub;p++)
	  printf("%5d",k[p]);
	printf("\n");

	getch();
	qsort(k,lb,j-1); //left side partition
	qsort(k,j+1,ub); //right side partition
  }
}


/*void quick(int K[],int LB,int UB)
{
	int FLAG=1,i,I,J,Key,t;
	if (LB < UB)
	{
		I = LB;
		J = UB+1;
		Key = K[LB];
	}
	while(FLAG)
	{
		I = I+1;
		while(K[I] < Key)//(Scan the Key from Left to Right)
		  I = I+1;
		  J = J-1;
		while (K[J] > Key)//(Scan the Key from Right to Left)
		   J = J-1;

		if(I < J)
		 {
		       t=K[I];
		       K[I]=K[J];
		       K[J]=t;
		   printf("\n\t\t");
		for(i=0;i<10;i++)
		{
			printf(" %d",K[i]);
		}
		getch();
		 }
		 else
		     FLAG=0;
	 }
	  t=K[LB];
	  K[LB]=K[J];
	  K[J]=t;
		printf("\n\t\t");
		for(i=0;i<10;i++)
		{
			printf(" %d",K[i]);
		}
		getch();

	quick(K, LB, J-1);//(Sort First Sub Table)
	quick(K, J+1, UB);
} */
