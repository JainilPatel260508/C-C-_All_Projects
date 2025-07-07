/*
		To find sum of two nos.
*/
// This is another comment single line comment.
#include<stdio.h>
//Standard input output header file
#include<conio.h>
//Console input output header file.
void main()
{
	int x,y,s;  //var declaration   data type: int   var:x,y,z
	clrscr();   // Clear Screent function
      //	x=150; // var initilization
      //	y=250;
	printf("\nEnter a value of x:");
	scanf("%d",&x);
	printf("\nEnter a value of y:");
	scanf("%d",&y);
	s=x+y;
	printf("\n\tx:%d\t y:%d\t Sum:%d",x,y,s);
	getch();
}

