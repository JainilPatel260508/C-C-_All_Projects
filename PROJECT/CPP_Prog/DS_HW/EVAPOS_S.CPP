//postfix evaluation

#include<iostream.h>
#include<conio.h>
#include<math.h>

class stack
{
   int size,top,stack[20];
   char *exp;

   public:

   stack()
   {
      cout<<"\n\tEnter size of stack: ";
      cin>>size;

      exp=new char[size+1];
   }

   void push(int n)
   {
     top++;
     stack[top]=n;
   }

   char pop()
   {
      return(stack[top--]);
   }

   void input();
   void evaluate();
};

void stack :: input()
{
   int i,oper,integer;

l1:  clrscr();

     cout<<"\n\tEnter Your Postfix Expression: ";

     cin>>exp;

     for(i=0,integer=0;i<=size;i++)
     {
	if(exp[i]>='0' && exp[i]<='9')
	   integer++;
     }
	  oper=size-integer;

     if(integer!=oper+1)
     {
	cout<<"\n\tEnter a proper expression";
	getch();
	goto l1;
     }

     getch();
}

void stack :: evaluate()
{
   exp[size+1]=')';

   for(int i=0;exp[i]!=')';i++)
   {
       if(exp[i]>='0' && exp[i]<='9')
       {
	  switch(exp[i])
	  {
	  case '1':
		push(1);
		break;

	  case '2':
		push(2);
		break;

	  case '3':
		push(3);
		break;

	  case '4':
		push(4);
		break;

	  case '5':
		push(5);
		break;

	  case '6':
		push(6);
		break;

	  case '7':
		push(7);
		break;

	  case '8':
		push(8);
		break;

	  case '9':
		push(9);
		break;

	  case '0':
		push(0);
		break;
	  }
       }

       else
       {
	   switch(exp[i])
	   {
	   case '+':
		   int n=stack[top-1]+stack[top];
		   top=top-2;
		   push(n);
		   break;

	   case '-':
		   n=stack[top-1]-stack[top];
		   top=top-2;
		   push(n);
		   break;

	   case '*':
		   n=stack[top-1]*stack[top];
		   top=top-2;
		   push(n);
		   break;

	   case '/':
		   n=stack[top-1]/stack[top];
		   top=top-2;
		   push(n);
		   break;

	   case '^':
		   n=pow(stack[top-1],stack[top]);
		   top=top-2;
		   push(n);
		   break;
	   }
       }

   }

   cout<<"\n\tCalculated value: "<<stack[top];

}

void main()
{
   clrscr();

   stack s1;

   s1.input();
   s1.evaluate();

   getch();

}