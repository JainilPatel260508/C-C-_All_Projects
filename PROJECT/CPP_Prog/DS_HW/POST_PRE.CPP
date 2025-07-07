#include<iostream.h>
#include<conio.h>
#include<string.h>

class post_pre
{
   char inp[50],stack[20],disp[50];
   int top;

   public:


   void push(char c)
   {
       top++;
       stack[top]=c;
   }

   char pop()
   {
      return(stack[top--]);
   }

   void input()
   {
     cout<<"\n\tEnter an expression: ";
     cin>>inp;
   }
   void in2post();
   void in2pre();

   };
//--------------------------------------------------------------------------------
void post_pre :: in2post()
{
     int i,k=0,len;

     len=strlen(inp);
     inp[len]=')';
     inp[++len]='\0';

     top=0;
     stack[top]='(';
     for(i=0;inp[i]!=0;i++)
     {
	 switch(inp[i])
	 {
	    case '^':
		      while(stack[top]=='^')
		      {
			 disp[k]=pop();
			 k++;
		      }
		      push('^');
		      break;

	    case '/':
	    case '*':
		      while(stack[top]=='*' || stack[top]=='/' || stack[top]=='^')
		      {
			 disp[k]=pop();
			 k++;
		      }
		      push(inp[i]);
		      break;

	    case '-':
	    case '+':
		      while(stack[top]=='*' || stack[top]=='/' || stack[top]=='^' || stack[top]=='+' || stack[top]=='-')
		      {
			 disp[k]=pop();
			 k++;
		      }
		      push(inp[i]);
		      break;

	    case ')':
		     while(stack[top]!='(')
		     {
			 disp[k]=pop();
			 k++;
		     }
		     pop();
		     break;

	    case '(':
		     push('(');
		     break;

	    default:
		    disp[k]=inp[i];
		    k++;
	 }

     }
     disp[k]='\0';
     cout<<"\n\tPostfix: "<<disp;
}
//----------------------------------------------------------------------------

void post_pre :: in2pre()
{
     int i,k=0,len;

     strrev(inp);
     len=strlen(inp);
     inp[len]='(';
     inp[++len]='\0';

     top=0;
     stack[top]=')';
     for(i=0;inp[i]!=0;i++)
     {
	 switch(inp[i])
	 {
	    case '^':
		      push('^');
		      break;

	    case '/':
	    case '*':
		      while(stack[top]=='^')
		      {
			 disp[k]=pop();
			 k++;
		      }
		      push(inp[i]);
		      break;

	    case '-':
	    case '+':
		      while(stack[top]=='*' || stack[top]=='/' || stack[top]=='^')
		      {
			 disp[k]=pop();
			 k++;
		      }
		      push(inp[i]);
		      break;

	    case '(':
		     while(stack[top]!=')')
		     {
			 disp[k]=pop();
			 k++;
		     }
		     pop();
		     break;

	    case ')':
		     push(')');
		     break;

	    default:
		    disp[k]=inp[i];
		    k++;
	 }

     }
     disp[k]='\0';
     strrev(disp);
     cout<<"\n\tPrefix: "<<disp;
}

//----------------------------------------------------------------------------
//----------------------------------------------------------------------------

void main()
{
    post_pre exp;

    clrscr();
	   exp.input();
	   exp.in2post();
	   exp.in2pre();
    getch();
}