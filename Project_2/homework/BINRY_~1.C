/*
	Binary To No.
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int n[20];
//int bin[20];
long int res=0;

int input();

void main()
{
    int i;
	clrscr();

       input();

   /*    if(bin[0]==1)
       res*=-1; */


	printf("\n\n\t\tBinary No: %Lf",n);
	printf("\n\n\t\tDecimal No: %ld",res);

	getch();
}
int input()
{
    int i,j,l;
    long double a,k;
    double b=0;

l1: clrscr();
    for(i=0;i<20;i++)
    {
       n[i]=-1;
    }

    printf("\n\n\tEnter Binary No.[in which 1st digit idicate negative(1)&positive(0)sign]: ");
    scanf("%s",&n);

   l=strlen(n);
   for(i=0;i<l&&n[i]!='.';)
   {
     i++;
     printf("%d",n[i]);
   }
   i--;

    for(j=0;n[j]!=-1;j++)
    {
	if(n[j]!='0' && n[j]!='1')
	{
	     printf("\n\n\t\tEnter Valid Binary no.");
	     getch();
	     goto l1;
	}
    }

    bin_int(i);

  /* if(l==1)
   res*=-1;*/

    if(b>0.0 && b<1.0)
    j=bin_dec(b,i);

 /*   if(j==1)
    goto l1; */

   return 0;
}
int bin_int(int i)
{
	int j=0;
	unsigned long int k=0;

	for(j=0;i<j;i--,j++)
	{
	      k=power(2,j);
	  //  k=pow(2,j);
	    res=res+(n[j]*k);
	}

	return 0;
}

int bin_dec(double b,int i)
{
   int j;
   long float k;

       n[i]=46;

    for(i=0;n[i]!=-1;i++)
    {
	if(n[i]!=0 && n[i]!=1)
	{

	     printf("\n\n\t\tEnter Valid Binary no.");
	     getch();
	     j=1;
	     return j;
	}
    }

    for(i=0;n[i]!=46;i++);
	 i++;

	for(j=0;n[i]!=-1;i++,j++)
	{
	      j*=-1;
	   //   k=power(2,j);
	       k=(double)pow(2,j);
	       res=res+(n[j]*k);
	}


   return 0;
}

int power(int a,int b)
{
    int r=a,i;

	 if(b==0)
	 {
	 return 1;
	 }

       for(i=1;i<b;i++)
      {
	 r=r*a;
      }

return r;
}