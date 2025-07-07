/*Number to Roman */

#include<stdio.h>
#include<conio.h>

void roman_1();

void main()
{
  int n,l;
l1:
  clrscr();

  printf("\n\t Enter a no. to convert into Roman no(0 to 5000): ");
  scanf("%d",&n);

  if(n>0 && n<=5000)
   roman_1(n);
   else
   {
    printf("\n\tEnter a no. between 0 and 5000");
    getch();
    goto l1;
   }
      getch();
}

int count(int r)
{
   int i=0,x;

    while(r!=0)
    {
      x=r%10;
      r=r-x;
      r=r/10;
      i++;
    }
    return(i);
}



void roman_1(int r)
{
  float a,p,i,q;
  int s=count(r);

  printf("\n\t Your no. in roman letters: ");
   while(s>0)
  {
	 switch(s)
	{
	 case 4:
		  a=r%1000;
		  q=r-a;
		  p=q/1000;

		  for(i=0;i<p;i++)
		  {
		    printf("M");

		  }
		  r=r-q;
		  s--;

	 break;

	 case 3:
		  a=r%100;
		  q=r-a;
		  p=q/100;

		  if(p>=5 && p<9)
		  {
		    printf("D");
		    p=p-5;

			 for(i=0;i<p;i++)
			{
			 printf("C");

			}
		    r=r-q;
		    s--;
		  }
		  else if(p<4)
		  {
			  for(i=0;i<p;i++)
			 {
			   printf("C");

			  }
		    r=r-q;
		    s--;
		  }
		  else if(p==4)
		  {
		    printf("CD");
		    r=r-q;
		    s--;
		  }
		  else if(p==9)
		  {
		    printf("CM");

		    r=r-q;
		    s--;
		  }


	 break;

	 case 2:
		  a=r%10;
		  q=r-a;
		  p=q/10;

		  if(p>=5 && p<9)
		  {
		    printf("L");
		    p=p-5;

			 for(i=0;i<p;i++)
			{
			 printf("X");

			}
		    r=r-q;
		    s--;
		  }
		  else if(p<4)
		  {
			  for(i=0;i<p;i++)
			 {
			   printf("X");

			  }
		    r=r-q;
		    s--;
		  }
		  else if(p==4)
		  {
		    printf("XL");

		    r=r-q;
		    s--;
		  }
		  else if(p==9)
		  {
		    printf("XC");

		    r=r-q;
		    s--;
		  }


	 break;

	 case 1:
		  a=r;
		  p=a;

		  if(p>=5 && p<9)
		  {
		    printf("V");
		    p=p-5;

			 for(i=0;i<p;i++)
			{
			 printf("I");

			}
		    r=r-q;
		    s--;
		  }
		  else if(p<4)
		  {
			  for(i=0;i<p;i++)
			 {
			   printf("I");

			  }
		    r=r-q;
		    s--;
		  }
		  else if(p==4)
		  {
		    printf("IV");

		    r=r-q;
		    s--;
		  }

		  else if(p==9)
		  {
		    printf("IX");

		    r=r-q;
		    s--;
		  }


	 break;

	}
   }
}
