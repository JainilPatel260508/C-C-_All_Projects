/*
	Evaluation of prefix notation
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void push();
int pop();
int isvalid(char []);
int stk[50],top=-1;
void main()
{
	int i,j,x,y,z,l;
	char post[50];
	clrscr();
	printf("\n\n\t\tEnter the Prefix Notation:");
	gets(post);
	l=strlen(post);
	if(isvalid(post))
	{
	   printf("\n\n\t\tPrefix notation is invalid....");
	   getch();
	   return;
	}
	for(i=l;i>=0;i--)
	{
		switch(post[i])
		{
		    case '+':  y=pop();
			       x=pop();
			       z=y+x;
			       push(z);
			       break;
		    case '-':  y=pop();
			       x=pop();
			       z=y-x;
			       push(z);
			       break;
		    case '*':  y=pop();
			       x=pop();
			       z=x*y;
			       push(z);
			       break;
		    case '/':  y=pop();
			       x=pop();
			       z=y/x;
			       push(z);
			       break;
		    case '^':  y=pop();
			       x=pop();
			       z=pow(y,x);
			       push(z);
			       break;
		    default:
			       push(post[i]-48);
			       break;
		}

	}
	printf("\n\n\t\tResult : %d",stk[top]);
	getch();
}
void push(int c)
{
	stk[++top]=c;
}
int pop()
{
return (stk[top--]);
}
int isvalid(char s[])
{
      int i,j,or=0,op=0;
      for(i=0;s[i]!='\0';i++)
      {
	  if(s[i]>='0' && s[i]<='9')
	  {
	     or++;
	  }
	  else
	  {
	     op++;
	  }
      }
      if(or-op==1)
	return 0;
      else
	return 1;
}