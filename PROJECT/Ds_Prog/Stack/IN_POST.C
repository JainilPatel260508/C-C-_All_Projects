/*
	conver infix to postfix.
	L to R
	same ->pop
	low -> push
	high -> pop
*/
#include<stdio.h>
#include<conio.h>
char in[50],s[50];
int top=0;
void main()
{    void push(char);
     char pop();
     int i,j,k;
     clrscr();
     printf("\n\n\tEnter the infix Notation:");
     gets(in);
     s[0]='(';
     printf("\n\n\t\tPostfix Notation:");

     for(i=0;in[i]!='\0';i++)
     {
     //  putchar('\n');
     //  putchar(in[i]);
	     switch(in[i])
	     {

		 case '(': push('('); break;
		 case ')': while(s[top]!='(')
			   {
			      printf("%c",pop());
			   }
			   pop();
			   break;
		 case '^': while(s[top]=='^')
			    {
			       printf("%c",pop());
			    }
			    push('^');
				break;
		 case '*':
		 case '/':  while(s[top]=='*' || s[top]=='/' || s[top]=='^')
			       printf("%c",pop());
			      push(in[i]);
			      break;
		 case '+':
		 case '-':  while(s[top]!='(')
			       printf("%c",pop());
			      //pop();
			      push(in[i]);
			    break;
		 default :
		    printf("%c",in[i]);
	     }
     }
	while(s[top]!='(')
		 printf("%c",pop());

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