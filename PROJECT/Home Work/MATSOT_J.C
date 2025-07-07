/*
	Matrix Short 2D(int)
*/
#include<stdio.h>
#include<conio.h>

int n[5][5];

void sort(int *);
void con_1d_2d(int ,int );
void matdis(int *,int ,int );

void main()
{
	int r,c,i,j;
	clrscr();

	printf("\n\n\tEnter No. Of Rows: ");
	scanf("%d",&r);
	printf("\n\tEnter No. Of Coums: ");
	scanf("%d",&c);

	printf("\n\n\tEnter Values : ");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		    scanf("%d",&(*(n+i))[j]);
		}
	}

	con_1d_2d(r,c);


	getch();
}

void con_1d_2d(int r,int c)
{
    int n2[25],*ptr_n2,i,j;

    ptr_n2=&n2[0];
    for(i=0;i<25;i++,ptr_n2++)
    {
	*ptr_n2=(-100);
    }

    ptr_n2=&n2[0];

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++,ptr_n2++)
		{
		   *ptr_n2=*(n[i]+j);
		}
	}

       ptr_n2=&n2[0];
       sort(ptr_n2);

       ptr_n2=&n2[0];
       matdis(ptr_n2,r,c);

}
void sort(int *ptr)
{
    int i,j,l,t;

    for(l=0;*ptr!=-100;l++,ptr++);

    for(i=l;i>0;i--)
    {
	ptr--;
    }

	for(i=0;i<l-1;i++)
   {
	  for(j=0;j<l-i-1;j++)
       {
	    if(*ptr>*(ptr+1))
	    {
		t=*ptr;
		*ptr=*(ptr+1);
		*(ptr+1)=t;
	    }
	    ptr++;
       }
	 for(;j!=0;j--)
	 ptr--;
    }
}

void matdis(int *ptr,int r,int c)
{
	int i,j;
   clrscr();

	printf("\n\n\tEntered No. Of Rows: %d",r);
	printf("\n\tEntered No. Of Coums: %d",c);

	printf("\n\n\tEntered Value: \n");
	for(i=0;i<r;i++)
	{
	     printf("\t\t     ");
		for(j=0;j<c;j++)
		{
		   printf("%3d",*(n[i]+j));
		}

		printf("\n");
	}


	 for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++,ptr++)
		{
		   *(n[i]+j)=*ptr;
		}
	}


	printf("\n\n\tValues After Sorting: \n");
	for(i=0;i<r;i++)
	{
	    printf("\t\t\t    ");
		for(j=0;j<c;j++)
		{
		   printf("%3d",*(n[i]+j));
		//   ptr++;
		}

		printf("\n");
	}

}