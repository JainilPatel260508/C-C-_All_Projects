// prefix evaluation
#include<iostream.h>
#include<conio.h>

class prefix
{
    char *p;
    int top,*stack,n;
  public:
    void input()
    {
       cout<<"\n\n\tEnetr prefix expression: ";
       cin>>p;
    }

    void push(int data)
    {
      stack[top++]=data;
    }

    int pop()
    {
      return (stack[--top]);
    }
    int calculation();
    int is_valid();
    prefix(int);
    ~prefix();
};

prefix :: prefix(int x)
{
    p=new char[x];
    stack=new int[x-1];
    n=x;
}

prefix :: ~prefix()
{
     delete p,stack;
}

int prefix :: is_valid()
{
 int no_oprand=0,no_operator=0,a=-48;
   for(int i=0;i<n;i++,a=-48)
   {
       a+=p[i];
       if(a<10 && a>=0)
	  no_oprand++;
       else
	  no_operator++;
   }
   return(no_oprand-no_operator);
}

int prefix :: calculation()
{
 int a=-48,b=-48;
 top=0;

   for(int i=n-1;i>=0;i--,a=-48,b=-48)
   {
      b=pop();
      a=pop();
      switch(p[i])
      {
	 case '+':
	     push(b+a);
	     break;
	 case '-':
	     push(b-a);
	     break;
	 case '*':
	     push(b*a);
	     break;
	 case '/':
	     push(b/a);
	     break;
	  case '^':
	     push(b^a);
	     break;
	 default:
	     top+=2;
	     a=-48;
	     a+=p[i];
	     push(a);
	     break;
      }
   }
  return(pop());
}

void main()
{
l1:
  {
  clrscr();
    int n=0;

     cout<<"\n\tEnter no. of letter in postfix expression: ";
     cin>>n;

     prefix obj(n);
     obj.input();

     if(obj.is_valid()!=1)
     {
       cout<<"\n\n\t\tEntered prefix expression is invalid!!!";
       cout<<"\n\t\tStrike any key to re-input.";
       getch();
       goto l1;
     }
    cout<<"\n\t\t Result: "<<obj.calculation();
  }
getch();
}