/*
		Stack operation
*/
#include<stdio.h>
#include<conio.h>
int s[5],n=5,top=-1;
void main()
{
   void push();
   void pop();
   void peep();
   void change();
   void disp();
   int ch;
   do
   {   clrscr();
       printf("\n\n\t\t\t Stack Operation");
       printf("\n\t\t\t 1. Push");
       printf("\n\t\t\t 2. Pop");
       printf("\n\t\t\t 3. Peep");
       printf("\n\t\t\t 4. Change");
       printf("\n\t\t\t 5. Display");
       printf("\n\t\t\t 6. Exit");
       printf("\n\n\t\t\tEnter your choice:");
       scanf("%d",&ch);
       switch(ch)
       {
	   case 1:
		    push();
		    break;
	   case 2:
		    pop();
		    break;
	   case 3:
		    peep();
		    break;
	   case 4:
		    change();
		    break;
	   case 5:
		    disp();
		    break;
	   case 6:
		    break;
	   default:
		   printf("\n\n\t\tWrong choice ..! try again....");
		   break;
       }
       getch();
   }while (ch!=6);
//getch();
}
void push()
{
	int x;
	if(top>=n-1)
	{
		printf("\n\n\t\t Stack is overflow...");
		return;
	}
	top++;
	printf("\n\n\t\t Enter a the Item:");
	scanf("%d",&x);
	s[top]=x;
}
void pop()
{
	if(top==-1)
	{
		printf("\n\n\t\t Stack is underflow...");
		return;
	}
	top--;
	printf("\n\n\t\t%d is pop(deleted) from stack.",s[top+1]);
}
void peep()
{
	int i;
	printf("\n\n\t\t Enter the postion:");
	scanf("%d",&i);
	if(top-i+1<0)
	{
		printf("\n\n\t\t Stack is underflow...");
		return;
	}
	printf("\n\n\t\t %d item is peep from stack.",s[top-i+1]);
}
void change()
{
	int i,x;
	printf("\n\n\t\t Enter the postion:");
	scanf("%d",&i);
	if(top-i+1<0)
	{
		printf("\n\n\t\t Stack is underflow...");
		return;
	}

	printf("\n\n\t\t %d item is peep from stack.",s[top-i+1]);
	printf("\n\n\t\t Enter a the Item:");
	scanf("%d",&x);
	s[top-i+1]=x;
}

void disp()
{
	int i=top;
	if(top==-1)
	{	printf("\n\n\t\t Stack is underflow...");
		return;
	}
	printf("\n\tTop ==>");
	while(i>=0)
	{
	   printf("\t%d\n\t",s[i]);
	   i--;
	}
}

