/*
	infix to postfix
*/
#include<stdio.h>
#include<conio.h>

char in[50],stk[50];
int top=-1;
void push(char);
char pop();
void main()
{
	int i;
	clrscr();
	printf("\n\n\t\tEnter the infix noation:");
	gets(in);
	push('(');
	printf("\n\n\t\tPostfix noation:");
	for(i=0;in[i]!='\0';i++)
	{
	  // printf("\n%c",in[i]);
	  switch(in[i])
	  {
	      case '(':  push('('); break;
	      case ')':   while(stk[top]!='(')
			  {
			     printf("%c",pop());
			  }
			  pop();
			  break;
	      case '^':   while(stk[top]=='^')
			    printf("%c",pop());
			    push(in[i]);
				break;
	      case '*':
	      case '/':   while(stk[top]=='^'||stk[top]=='*'||stk[top]=='/')
			    printf("%c",pop());
			    push(in[i]);
			  break;
	      case '+':
	      case '-':   while(stk[top]!='(')
			  {
			     printf("%c",pop());
			  }
			  push(in[i]);
			  break;
	      default :   printf("%c",in[i]);
	  }
	}
	while(stk[top]!='(')
	{
	     printf("%c",pop());
	 }
	getch();
}
void push(char c)
{
	stk[++top]=c;
}
char pop()
{
	return (stk[top--]);
}