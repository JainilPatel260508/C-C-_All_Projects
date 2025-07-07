// Postfix and prefix
#include<iostream.h>
#include<conio.h>
#include<string.h>

class post_prefix
{
    char n[25],s[15],res[25];
    int count_s,n_len,count_res;
    public:
    void input()
    {
	cout<<"\n\n\tEnter Expression for Postfix and Prefix conversion: ";
	cin>>n;
	n_len=strlen(n);
	n[n_len]=')';
	n[++n_len]='\0';
    }
    char pop()
    { return(s[count_s--]); }

    void push(char x)
    { s[++count_s]=x; }

    void initial(int);
    void postfix(void);
    void prefix(void);
};
void post_prefix :: initial(int x)
{
   count_s=0;
   count_res=-1;
   for(int i=0;i<25;i++)
   {  if(x==0)
      n[i]='\0';
      s[i]='\0';
      res[i]='\0'; }
}
void post_prefix :: postfix()
{    s[0]='(';
     for(int i=0;i<n_len;i++)
     {
	  switch(n[i])
	  {
		case '(':
			push('(');
			break;
		case ')':
			while(s[count_s]!='(')
			   res[++count_res]=pop();
			//s[count_s--]='\0';
			//push('\0');
			pop();
			break;
		case '^':
			while(s[count_s]=='^')
			   res[++count_res]=pop();
			push('^');
			break;
		case '*':
		case '/':
			while(s[count_s]!='+'&& s[count_s]!='-'&&s[count_s]!='(')
			   res[++count_res]=pop();
			 push(n[i]);
			 break;
		case '+':
		case '-':
			while(s[count_s]!='(')
			   res[++count_res]=pop();
			 push(n[i]);
			 break;
		default:
			res[++count_res]=n[i];
			break;
	  }
     }
     cout<<"\n\n\tPostfix : "<<res;
}
void post_prefix :: prefix()
{
     for(int i=n_len;i>=0;i--)
     {
	  switch(n[i])
	  {
		case ')':
			push(')');
			break;
		case '(':
			while(s[count_s]!=')')
			   res[++count_res]=pop();
			s[count_s--]='\0';
			break;
		case '^':
			push('^');
			break;
		case '*':
		case '/':
			while(s[count_s]=='^')
			   res[++count_res]=pop();
			 push(n[i]);
			 break;
		case '+':
		case '-':
			while(s[count_s]=='^'||s[count_s]=='*'||s[count_s]=='/')
			   res[++count_res]=pop();
			 push(n[i]);
			 break;
		default:
			res[++count_res]=n[i];
			break;
	  }
     }
     while(s[count_s]!=')')
	 res[++count_res]=pop();
     s[count_s--]='\0';
     cout<<"\n\n\tPrefix : ";
     for(i=count_res;i>=0;i--)
	cout<<res[i];
}
void main()
{
clrscr();
     post_prefix obj;

     obj.initial(0);
     obj.input();
     obj.postfix();
     obj.initial(1);
     obj.prefix();
getch();
}