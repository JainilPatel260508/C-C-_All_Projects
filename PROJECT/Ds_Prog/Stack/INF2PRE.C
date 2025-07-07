/*
	infix to postfix
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
char in[50],stk[50],pre[50];
int top=0;
void push(char);
char pop();
void main()
{
	int i,l,k=0;
	clrscr();
	printf("\n\n\t\tEnter the infix noation:");
	gets(in);
//	push(')');
	l=strlen(in);
	for(i=l-1;i>=0;i--)
	{
	 //  printf("\n%c",in[i]);
	  switch(in[i])
	  {
		case ')': push(')');break;
		case '(': while(stk[top]!=')')
			     pre[k++]=pop();
			     p	op();
			  break;
		case '^': push('^'); break;
		case '*':
		case '/': 	while(stk[top]=='^')
				 pre[k++]=pop();
				 push(in[i]);
				 break;
		case '+':
		case '-':	while(stk[top]=='^'||stk[top]=='*'||stk[top]=='/')
				 pre[k++]=pop();
				 push(in[i]);
				 break;
		default :
				 pre[k++]=in[i];
	  }
	}
	while(stk[top]!='(')
	    pre[k++]=pop();
	  pre[k]='\0';
	printf("\n\n\t\tPrefix Notation:%s",strrev(pre));
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