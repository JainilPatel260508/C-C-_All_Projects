/*
      Reverse
      Palindrom
      Armstrong
      Perfect
*/

#include<iostream.h>
#include<conio.h>
#include<math.h>

class check
{
	private:

		int n;
		int isperfect;
		int isarm;
		int ispali;
		int rev;
	public:
		void no_rev();

		int pali(int num)
		{
		     n=num;
		     no_rev();
		     return(ispali);
		}

		int armstrong(int num)
		{
		     n=num;
		     no_rev();
		     return(isarm);
		}

		int perfect(int num)
		{
		     n=num;
		     no_rev();
		     return(isperfect);
		}
		int reverse(int num)
		{
		     n=num;
		     no_rev();
		     return(rev);
		}
};

void check :: no_rev()
{
		  int i=0,x=0,s=0,j=n,sum_1=0,sum_2=0,pro=1;

			  while(j!=0)
			  {
				 i=j%10;
				 x=i+10*x;

				 sum_1=sum_1+pow(i,3);
				 sum_2+=i;
				 pro*=i;

				 s=j-i;
				 j=s/10;
			   }

		    rev=x;
		  if(n==x)   //rev
		     ispali=1;
		  else
		      ispali=0;

		  if(n==sum_1)   //arm strong
		     isarm=1;
		  else
		     isarm=0;

		  if(sum_2 == pro)   // perfect  sum of digits
		     isperfect=1;
		  else
		     isperfect=0;
}

void main()
{
	 check n;

	 int no;
	 clrscr();
	 cout<<"Enter a value of no:";
	 cin>>no;
//reverse number
	//rev=n.reverse(no);
	cout<<"\n\treversed no. is "<<n.reverse(no);;

//	cout<<"\n\tPalindrom Check: ";

	//Palindrom number
	//pali=n.pali(rev);
	if(n.pali(no))
	{
	       cout<<"\n\tIt is Palindrom." ;
	}
	else
	{
	       cout<<"\n\tIt is Not Palindrom.";
	}

	//Armstrong number
	if(n.armstrong(no))
	{
	       cout<<"\n\tIt is Armstrong.";
	}
	else
	{
	       cout<<"\n\tIt is Not Armstrong.";
	}

	//perfect number
	if(n.perfect(no))
	{
	       cout<<"\n\tIt is Perfect No.";
	}
	else
	{
	       cout<<"\n\tIt is Not Perfect No.";
	}
  getch();
}