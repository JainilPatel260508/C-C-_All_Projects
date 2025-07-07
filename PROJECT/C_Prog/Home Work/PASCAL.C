/*
	Pascal Triangle
*/
#include<stdio.h>
#include<conio.h>

void pasca(int);
long int fact(long int);
void main()
{
     int n;

l1:    clrscr();
       n=0;

     printf("\n\tEnter no. of rows: ");
     scanf("%d",&n);

     if(n<=0)
     {
      printf("\n\tEnter no. of rows>0");
      getch();
      goto l1;
     }

     pasca(n);
     getch();
}

void pasca(int n)
{
 long int r=0,ncr,j,n_fact=1,r_fact=1,nr_fact=1,i,k=0;
      for(k=0;k<=n;k++)
	printf("  ");
	printf("%2d\n",1);
  n-=1;

   for(i=0,j=1;j<=n;i++,j++)
   {
      for(k=0;k<=(n-j);k++)
	printf("  ");

      for(r=0;r<=j;r++)
      {
	      n_fact=fact(j);
	      r_fact=fact(r);
	      nr_fact=fact(j-r);
	      ncr=n_fact/(r_fact*nr_fact);
	      printf("%4d",ncr);

      }
      printf("\n");
   }


}

long int fact(long int m)
{
  long int i,s;

   for(i=1,s=1;i<=m;i++)
   {
     s=s*i;
   }

   return(s);
}