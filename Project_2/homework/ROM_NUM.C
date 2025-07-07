/*
	Roman To decimal.
*/
#include<stdio.h>
#include<conio.h>


char r[21];
long int res=0;
int n[21],l=0;

int switchc();
int validity();
int calculation();


void main()
{
int i,k=0,flag=0,m=0;
do
{
l1:
clrscr();
	l=0;
	 res=0;

	flag=switchc();
	if(flag==1)
	{
	flag=0;
	getch();
	goto l1;
	}
	flag=0;
	if(l!=1)
	{
	flag=validity();
		if(flag==2)
		{
		flag=0;
		goto l1;
		}
	}


	for(i=0;i<l;i++)
	{
	  m=0;
	  //cond1:- add for >
		if(n[i]>n[i+1])
		{
			res+=n[i];
		}
	      //cond2:- add & sub for ==
	      else if(n[i]==n[i+1])
	     {
			if(n[i+1]==n[i+2])
			{
			  res+=n[i]+n[i+1]+n[i+2];
			  i+=2;
			  m=1;
			      if(res<n[i+1])
			      {
			      printf("\n\n\t\tInvalid Roman.");
			      getch();
			      goto l1;
			      }
			}


		if(m!=1)
		{
		   res+=n[i]+n[i+1];
		   i++;
		     if(res<n[i+1])
		     {
			   printf("\n\n\t\tInvalid Roman.");
			   getch();
			   goto l1;
		     }
		}

	      }
		//cond3:-
		else if(n[i]<n[i+1])
		{
			    res=res+n[i+1]-n[i];
		    i++;
		}

	}

	if(res<=0)
	{
	    printf("\n\n\t\tResult is negative .It's invalid in Roman No.");
	    printf("\n\t\tPress Enter to Re-input.");
	    getch();
	    goto l1;
	}
	else
	{
	k=0;
	k=10;
	printf("\n\n\t\tRoman Value: %s",r);
	printf("\n\t\tDecimal Value: %ld\n\n\t\tThank You visit again.....",res);
	}

 }while(k!=10);
 getch();
}


int switchc()
{
int i,flag;

	for(i=0;i<21;i++)
	{
		n[i]=0;
		r[i]='\0';
	}
	printf("\n\t\tWelcome To Program To Convert Roman To Decimal\n\n");
	printf("\n\t    Roman --> Decimal");
	printf("\n\t\tI --> 1");
	printf("\n\t\tV --> 5");
	printf("\n\t\tX --> 10");
	printf("\n\t\tL --> 50");
	printf("\n\t\tC --> 100");
	printf("\n\t\tD --> 500");
	printf("\n\t\tM --> 1000");

	printf("\n\n\t\tEnter Roman Value: ");
	scanf("%s",r);
	l=strlen(r);

	//puting the numerical value instead of char in other array
	for(i=0;i<l;i++)
	{
	   switch(r[i])
	   {

	     case 'I':
		      n[i]=1;
		      break;
	     case 'V':
		      n[i]=5;
		      break;
	     case 'X':
		      n[i]=10;
		      break;
	     case 'L':
		      n[i]=50;
		      break;
	     case 'C':
		      n[i]=100;
		      break;
	     case 'D':
		      n[i]=500;
		      break;
	     case 'M':
		      n[i]=1000;
		      break;
	     case 'i':
		      n[i]=1;
		      break;
	     case 'v':
		      n[i]=5;
		      break;
	     case 'x':
		      n[i]=10;
		      break;
	     case 'l':
		      n[i]=50;
		      break;
	     case 'c':
		      n[i]=100;
		      break;
	     case 'd':
		      n[i]=500;
		      break;
	     case 'm':
		      n[i]=1000;
		      break;
	     default :
		      printf("\n\n\t\tEnter valid Roman Letter.");
		      printf("\n\t\tPress Enter to Re-input.");
		      return 1;
	    }
	}
	//cond for Repetation
	for(i=0;i<l;i++)
	{
		if(n[i]!=1000)
		{
			if(n[i]==n[i+1]&&n[i+1]==n[i+2]&&n[i+2]==n[i+3])
			{
			flag=2;
			break;
			}
		}
		else if(n[i]==1000)
		{
			if(n[i]==n[i+1]&&n[i+1]==n[i+2]&&n[i+2]==n[i+3]&&n[i+3]==n[i+4]&&n[i+4]==n[i+5])
			{
			flag=3;
			break;
			}
		}
	}
	if(flag==2)
	{
	 printf("\n\n\t\tAny Roman Letter is repeated more than 3 times.");
	 printf("\n\t\tPress Enter to Re-input.");
	 return 1;
	}
	else if(flag==3)
	{
	 printf("\n\n\t\t'M' Roman Letter is repeated more than 5 times.It can be repeated maximum 5 times.");
	 printf("\n\t\tPress Enter to Re-input.");
	 return 1;
	}
	flag=0;
      return 0;
}

int validity()
{
int i,j=0,k=0;

	      for(i=0;i<l-1;i++)
	      {
		  j=0;
		    //cond1:- I can be - fron v,x
		    //        x can be - fron l,c
		    //        c can be - fron d,m
		    if(n[i]<n[i+1])
		    {
			if(n[i]==1 && (n[i+1]!=5&&n[i+1]!=10))
			{
			j=1;
			break;
			}
			else if(n[i]==10 && (n[i+1]!=50&&n[i+1]!=100))
			{
			j=1;
			break;
			}
			else if(n[i]==100 && (n[i+1]!=500&&n[i+1]!=1000))
			{
			j=1;
			break;
			}
		    }
		    //cond2:- for repetation of V,L,D
		     if(n[i]==n[i+1])
		    {
			if(n[i]==5||n[i]==50||n[i]==500)
			{
			k=2;
			break;
			}
		    }
		    //cond3:- V,L,D can't be -
		    if((n[i]==5&&n[i+1]>5) || (n[i]==50&&n[i+1]>50) || (n[i]==500&&n[i+1]>500))
		    {
		      k=2;
			break;
		    }
		    //cond4:-V,L,D can't be subtracted
		    if(n[i]==5 || n[i]==50 || n[i] == 500)
		    {
			if(n[i]<n[i+1])
			{
			k=3;
			break;
			}
		    }
		    //cond5:-any no. is - and then same no. is +
		    if(n[i]<n[i+1]&&n[i]==n[i+2])
		    {
		    j=2;
		    break;
		    }
	       }

	if(k==2)
	{
	printf("\n\n\t\tV,L,D Cannot be Repeated in Roman No.");
	printf("\n\t\tPress Enter to Re-input.");
	getch();
	return 2;
	}
	else if(k==3)
	{
	 printf("\n\n\t\tV,L,D Cannot be subtracted in Roman No.");
	printf("\n\t\tPress Enter to Re-input.");
	getch();
	return 2;
	}
	else if(j==1&&j!=0)
	{
	  printf("\n\n\t\tIvalid Roman no.");
	  printf("\n\t\tPress Enter to Re-input.");
	  getch();
	  return 2;
	}
	else if(j==2&&j!=0)
	{
	  printf("\n\nSame Roman no. is subtracted and then it is added is not allow in roman.");
	  printf("\nPress Enter to Re-input.");
	  getch();
	  return 2;
	}


       return 0;

}