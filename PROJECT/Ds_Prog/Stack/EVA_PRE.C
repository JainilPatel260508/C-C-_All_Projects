/*
	Evulation postfix notaion
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
char pre[50];
int stc[50];
int top=-1;
void push(int);
int pop();
int isvalid(char []);
void main()
{
	int i,y,z,x,l;
	clrscr();
	printf("\n\n\t\tEnter the prefix notation:");
	gets(pre);
	l=strlen(pre);
	if(isvalid(pre)!=1)
	{
	  printf("\n\n\t\t Prefix notation is invalid");
	  getch();
	  return ;
	}
	for(i=l-1;i>=0;i--)
	{
/*		putchar(pre[i]);
		putchar('\n');*/
		switch(pre[i])
		{
			case '+':    y=pop();
				     x=pop();
				     z=y+x;
				     push(z);
					break;
			case '-':    y=pop();
				     x=pop();
				     z=y-x;
				     push(z);
					break;
			case '*':    y=pop();
				     x=pop();
				     z=x*y;
				     push(z);
					break;
			case '/':    y=pop();
				     x=pop();
				     z=y/x;
				     push(z);
					break;
			case '^':    y=pop();
				     x=pop();
				     z=pow(y,x);
				     push(z);
					break;
			default:
				   push(pre[i]-48);
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
