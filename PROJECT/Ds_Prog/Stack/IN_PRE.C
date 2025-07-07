/*
	conver infix to prefix.
	r to l
	same ->push
	low -> push
	high -> pop
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
char in[50],s[50],p[50];
int top=0;
void main()
{    void push(char);
     char pop();
     int i,l,k=0;
     clrscr();
     printf("\n\n\tEnter the infix Notation:");
     gets(in);
     l=strlen(in);
     for(i=l-1;i>=0;i--)
     {
//       putchar('\n');
//       putchar(in[i]);
	     switch(in[i])
	     {

		 case ')': push(')'); break;
		 case '(': while(s[top]!=')')
			   {
			      p[k++]=pop();
			   }
			   pop();
			   break;
		 case '^':
			    push('^');
				break;
		 case '*':
		 case '/':  while(s[top]=='^')
			       p[k++]=pop();
			      push(in[i]);
			      break;
		 case '+':
		 case '-':  while(s[top]=='^' || s[top]=='*' || s[top]=='/')
			       p[k++]=pop();

			      push(in[i]);
			    break;
		 default :
		    p[k++]=in[i];
	     }
     }
	while(s[top]!='(')
	     p[k++]=pop();
	     p[k]='\0';
	printf("\n\n\t\tPrefix Notation:%s",strrev(p));

getch();
}
void push(char c)
{
	s[++top]=c;
}
char pop()
{
	return s[top--];
}