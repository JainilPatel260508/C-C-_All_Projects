/*
	Evulation postfix notaion
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

char post[50];
int stc[50];
int top=-1;
void push(int);
int pop();
int isvalid(char []);
void main()
{
	int i,y,z,x;
	clrscr();
	printf("\n\n\t\tEnter the postfix notation:");
	gets(post);
	if(isvalid(post)!=1)
	{
	  printf("\n\n\t\t Postfix notation is invalid");
	  getch();
	  return ;
	}
	for(i=0;post[i]!='\0';i++)
	{
/*		putchar(post[i]);
		putchar('\n');*/
		switch(post[i])
		{
			case '+':    y=pop();
				     x=pop();
				     z=x+y;
				     push(z);
					break;
			case '-':    y=pop();
				     x=pop();
				     z=x-y;
				     push(z);
					break;
			case '*':    y=pop();
				     x=pop();
				     z=x*y;
				     push(z);
					break;
			case '/':    y=pop();
				     x=pop();
				     z=x/y;
				     push(z);
					break;
			case '^':    y=pop();
				     x=pop();
				     z=pow(x,y);
				     push(z);
					break;
			default:
				   push(post[i]-48);
		}
	}
	printf("\n\n\t\t Result:%d",pop());
getch();
}
void push(int z)
{
	stc[++top]=z;
}
int pop()
{
	return (stc[top--]);
}
int isvalid(char p[50])
{
	int op=0,opr=0,i;
	for(i=0;p[i]!='\0';i++)
	{
	    if(p[i]>='0' && p[i]<='9')
	       opr++;
	    else
	       op++;
	}
	return opr-op;
}
