
/*Decimal to hexadecimal Vice versa*/

#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>

char hx[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
void d_hexa(char [10]);
void h_decimal(float);

void main()
{
 float n;
 char l[10];
 l1:
   clrscr();
   printf("\n\tEnter A No. To Convert To Hexadecimal: ");
   scanf("%f",&n);
   if(n<0)
   {
   printf("\n\tEnter a no. greater than 0");
   getch();
   goto l1;
   }

   h_decimal(n);

   printf("\n\n\tEnter a valid Hexadecimal no.: ");
   flushall();
   scanf("%s",l);

   d_hexa(l);

  getch();

}

void h_decimal(float s)
{
     int z,b,d=0,c,i,k=0;
     float a;
     char l[20];

     c=s;
     z=c%16;
     l[0]=hx[z];

     k=s/16;
     z=k%16;


     for(i=1;k!=0;)
     {
	    switch(z)
	     {
		 case 0:
			 l[i]=hx[z];
			 k=k/16;
			 z=k%16;

			 break;

		 case 1:
			 l[i]=hx[z];
			 k=k/16;
			 z=k%16;

			 break;

		 case 2:
			 l[i]=hx[z];
			 k=k/16;
			 z=k%16;

			 break;

		 case 3:
			 l[i]=hx[z];
			 k=k/16;
			 z=k%16;

			 break;

		 case 4:
			 l[i]=hx[z];
			 k=k/16;
			 z=k%16;

			 break;

		 case 5:
			 l[i]=hx[z];
			 k=k/16;
			 z=k%16;

			 break;

		 case 6:
			 l[i]=hx[z];
			 k=k/16;
			 z=k%16;

			 break;

		 case 7:
			 l[i]=hx[z];
			 k=k/16;
			 z=k%16;

			 break;

		 case 8:
			 l[i]=hx[z];
			 k=k/16;
			 z=k%16;

			 break;

		 case 9:
			 l[i]=hx[z];
			 k=k/16;
			 z=k%16;

			 break;

		 case 10:
			 l[i]=hx[z];
			 k=k/16;
			 z=k%16;

			 break;

		 case 11:
			 l[i]=hx[z];
			 k=k/16;
			 z=k%16;

			 break;

		 case 12:
			 l[i]=hx[z];
			 k=k/16;
			 z=k%16;

			 break;

		 case 13:
			 l[i]=hx[z];
			 k=k/16;
			 z=k%16;

			 break;

		 case 14:
			 l[i]=hx[z];
			 k=k/16;
			 z=k%16;

			 break;

		 case 15:
			 l[i]=hx[z];
			 k=k/16;
			 z=k%16;

			 break;



	}
	i++;
     }

	l[i]='\0';

       strrev(l);

	 a=s-c;
       while(d<=4 && a>0)
       {
	 l[i]='.';
	 i++;
	 while(d<=4 && a>0)
	 {
	      a=a*16;
	      b=a;
	      a=a-b;
	      l[i]=hx[b];
	      d++;
	      i++;
	 }
	 l[i]='\0';
       }

       printf("\tYour Hexadecimal no.: ");
       for(i=0;l[i]!='\0';i++)
      {
       printf("%c",l[i]);
      }
}


void d_hexa(char s[10])
{
  int i,a,j,k,r,l;
  float p[8]={0,0,0,0,0,0,0,0};
  double x=0;

  for(i=0;s[i]!='.' && s[i]!=0;)
  {
    i++;
   }
   i--;

   for(j=i,k=0,r=0;j>=0;)
   {
    while((s[j]>='0' && s[j]<='9') || (s[j]>='A' && s[j]<='F') || (s[j]>='a' && s[j]<='f'))
     {
	if(s[j]>='0' && s[j]<='9')
	{
	 while(s[j]>='0' && s[j]<='9')
	 {
	     switch(s[j])
	    {
		 case '0':
			  p[k]=0;
			  j--;
			  k++;
			  r++;
			  break;

		 case '1':
			  p[k]=1*pow(16,r);
			  j--;
			  k++;
			  r++;

			  break;

		 case '2':
			  p[k]=2*pow(16,r);
			  j--;
			  k++;
			  r++;
			  break;

		 case '3':
			  p[k]=3*pow(16,r);
			  j--;
			  k++;
			  r++;
			  break;

		 case '4':
			  p[k]=4*pow(16,r);
			  j--;
			  k++;
			  r++;
			  break;

		 case '5':
			  p[k]=5*pow(16,r);
			  j--;
			  k++;
			  r++;
			  break;

		 case '6':
			  p[k]=6*pow(16,r);
			  j--;
			  k++;
			  r++;
			  break;

		 case '7':
			  p[k]=7*pow(16,r);
			  j--;
			  k++;
			  r++;
			  break;

		 case '8':
			  p[k]=8*pow(16,r);
			  j--;
			  k++;
			  r++;
			  break;

		 case '9':
			  p[k]=9*pow(16,r);
			  j--;
			  k++;
			  r++;
			  break;

	    }
	 }
       }


	else if((s[j]>='A' && s[j]<='F') || (s[j]>='a' && s[j]<='f'))
	{
	  while((s[j]>='A' && s[j]<='F') || (s[j]>='a' && s[j]<='f'))
	  {
	    switch(s[j])
	    {
		 case 'A':
		 case 'a':
			  p[k]=10*pow(16,r);
			  j--;
			  k++;
			  r++;
			  break;

		 case 'B':
		 case 'b':
			  p[k]=11*pow(16,r);
			  j--;
			  k++;
			  r++;
			  break;

		 case 'C':
		 case 'c':
			  p[k]=12*pow(16,r);
			  j--;
			  k++;
			  r++;
			  break;

		 case 'D':
		 case 'd':
			  p[k]=13*pow(16,r);
			  j--;
			  k++;
			  r++;
			  break;

		 case 'E':
		 case 'e':
			  p[k]=14*pow(16,r);
			  j--;
			  k++;
			  r++;
			  break;

		 case 'F':
		 case 'f':
			  p[k]=15*pow(16,r);
			  j--;
			  k++;
			  r++;
			  break;
	    }
	   }

	}
     }j--;

   }
     a=k;
     a--;
   for(x=0;a>=0;a--)
   {
     x=x+p[a];

   }

if(s[++i]=='.')
{
   i--;
  for(i=i+2,l=i;s[l]!='\0';)
  {
    l++;
   }
   l--;

   for(j=i,k=k,r=-1;j<=l;)
   {
	if(s[j]>='0' && s[j]<='9')
	{
	 while(s[j]>='0' && s[j]<='9')
	 {
	     switch(s[j])
	    {
		 case '1':
			  p[k]=1*pow(16,r);
			  j++;
			  k++;
			  r--;

			  break;

		 case '2':
			  p[k]=2*pow(16,r);
			  j++;
			  k++;
			  r--;
			  break;

		 case '3':
			  p[k]=3*pow(16,r);
			  j++;
			  k++;
			  r--;
			  break;

		 case '4':
			  p[k]=4*pow(16,r);
			  j++;
			  k++;
			  r--;
			  break;

		 case '5':
			  p[k]=5*pow(16,r);
			  j++;
			  k++;
			  r--;
			  break;

		 case '6':
			  p[k]=6*pow(16,r);
			  j++;
			  k++;
			  r--;
			  break;

		 case '7':
			  p[k]=7*pow(16,r);
			  j++;
			  k++;
			  r--;
			  break;

		 case '8':
			  p[k]=8*pow(16,r);
			  j++;
			  k++;
			  r--;
			  break;

		 case '9':
			  p[k]=9*pow(16,r);
			  j++;
			  k++;
			  r--;
			  break;

	    }
	 }

	}

	else if((s[j]>='A' && s[j]<='F') || (s[j]>='a' && s[j]<='f'))
	{
	  while((s[j]>='A' && s[j]<='F') || (s[j]>='a' && s[j]<='f'))
	  {
	    switch(s[j])
	    {
		 case 'A':
		 case 'a':
			  p[k]=10*pow(16,r);
			  j++;
			  k++;
			  r--;
			  break;

		 case 'B':
		 case 'b':
			  p[k]=11*pow(16,r);
			  j++;
			  k++;
			  r--;
			  break;

		 case 'C':
		 case 'c':
			  p[k]=12*pow(16,r);
			  j++;
			  k++;
			  r--;
			  break;

		 case 'D':
		 case 'd':
			  p[k]=13*pow(16,r);
			  j++;
			  k++;
			  r--;
			  break;

		 case 'E':
		 case 'e':
			  p[k]=14*pow(16,r);
			  j++;
			  k++;
			  r--;
			  break;

		 case 'F':
		 case 'f':
			  p[k]=15*pow(16,r);
			  j++;
			  k++;
			  r--;
			  break;
	    }
	   }

	}
   }

      i--;
   for(i=i;p[i]!=0;i++)
   {
     x=x+p[i];

   }
}
    printf("\n\t Your decimal no.: %.8lf",x);
}

