/*
	Binary To No.
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

long double n=0;
int bin[20];
long int res=0;

int input();
int power();
int bin_frc();
int bin_int();

void main()
{
    int i=0;
	clrscr();

      i=input();

       if(i==2)
       res*=-1;

	if(i!=2)
	printf("\n\n\t\tBinary No: 0%Lf",n);
	else
	printf("\n\n\t\tBinary No: 1%Lf",n);

	printf("\n\n\t\tDecimal No: %ld",res);

	getch();
}
int input()
{
    int i,j,l,m,k;
    long double a;
    double b=0;

l1: clrscr();
    for(i=0;i<20;i++)
    {
	bin[i]=-1;
    }

    printf("\n\n\tEnter Binary No.[in which 1st digit idicate negative(1)&positive(0)sign]: ");
    scanf("%d",&bin[0]);
    printf("\b");
    scanf("%Lf",&n);


    a=(long int)n;
    b=n-a;


    for(i=1;a!=0;i++)
    {
	if((long int)a%10==0)
	{
	   bin[i]=0;
	   a=a/10;
	}
	else
	{
	   bin[i]=(long int)a%10;
	   a=(a-bin[i])/10;
	}
	if(a==0)
	break;
    }

    for(i=0;bin[i]!=-1;i++)
    {
	if(bin[i]!=0 && bin[i]!=1)
	{

	     printf("\n\n\t\tEnter Valid Binary no.");
	     getch();
	     goto l1;
	}
    }
	    i--;

	    if((i+1)%2==0)
	    k=(i/2)+1;
	    else if((i+1)%2!=0)
	    k=i/2;

	    for(j=1;k>0;j++,i--)
	    {
	      m=bin[j];
	      bin[j]=bin[i];
	      bin[i]=m;
	      k-=1;
	    }

   l=bin_int();


    if(b>(float)0 && b<(float)1)
    j=bin_dec(b);

    if(j==1)
    goto l1;

    if(l==1)
    l=2;

   return l;
}
int bin_int()
{
	int j=0,i=0;
	unsigned long int k=0;

	for(j=0;bin[j]!=-1;j++);

	j--;
	for(;j>0;i++,j--)
	{
	      k=power(2,i);
	  //  k=pow(2,j);
	      res=res+(bin[j]*k);
	}

	if(bin[0]==1)
	i=1;

	return i;
}

int bin_dec(double b)
{
   int j,bin1[8]={-1,-1,-1,-1,-1,-1,-1,-1},i=0;
   long float k;

       if(b>=00.1&&b<=0.1)
       b*=10;
       else if(b>=0.0001&&b<=0.01)
       b*=100;
       else if(b>=0.0001&&b<=0.001)
       b*=1000;
       else if(b>=0.00001&&b<=0.0001)
       b*=10000;
       else if(b>=0.000001&&b<=0.00001)
       b*=100000;
       else if(b>=0.000001)
       b*=1000000;

       bin1[i]=46;
       b=b/100;

      for(i=1;b!=0;i++)
      {
	if((long int)b%10==0)
	{
	   bin1[i]=0;
	   b=b/10;
	}
	else
	{
	   bin1[i]=(long int)b%10;
	   b=(b-bin1[i])/10;
	}
	if(b==0)
	break;
    }

     /*  while(b!=0)
       {
	   i++;
	   b=b*10;
	   bin1[i]=(int)b;
	   b=b-bin1[i];
	   if(bin1[i]>8)
	   {
	   bin[i]=1;
	   b=0;
	   break;
	   }
       }*/

    for(i=0;bin[i]!=-1;i++)
    {
	if(bin[i]!=0 && bin[i]!=1)
	{

	     printf("\n\n\t\tEnter Valid Binary no.");
	     getch();
	     j=1;
	     return j;
	}
    }

    for(i=0;bin[i]!=46;i++);
	 i++;

	for(j=0;bin[i]!=-1;i++,j++)
	{
	      j*=-1;
	      // k=power(2,j);
	       k=(double)pow(2,j);
	       res=res+(bin[j]*k);
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