/*
	Ladder If VS Switch..case
	Display grade
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int per;
	char c;
	clrscr();
	//Ladder If statement

	printf("\n\n\t\tEnter a Color Init:");
	c=getchar();
	printf("\n\n\t\tEnter a Your Per.:");
	scanf("%d",&per);

	putchar(c);
	if(per>=85)
	{
	    printf("\n\n\t\tGrade : A++");
	}
	else if (per>=75)
	{
	    printf("\n\n\t\tGrade : A+");
	}
	else if (per>=65)
	{
	    printf("\n\n\t\tGrade : A");
	}
	else if (per>=55)
	{
	    printf("\n\n\t\tGrade : B");
	}
	else if (per>=45)
	{
	    printf("\n\n\t\tGrade : C");
	}
	else if (per>=35)
	{
	    printf("\n\n\t\tGrade : D");
	}
	else
	printf("\n\n\t\tGrade : ***");
	//Switch...case... statement
	switch(per/10)
	{
	   default:
		    printf("\n\n\t\tSwitch Grade : ***");
		    break;
	   case 5:
//	   case 45:
		    printf("\n\n\t\tSwitch Grade : C");
		    break;

	   case 10:
	   case 9:
//	   case 8:
		    printf("\n\n\t\tSwitch Grade : A++");
		    break;
	   case 8:
//	   case 75:
		    printf("\n\n\t\tSwitch Grade : A+");
		    break;
	   case 7:
//	   case 65:
		    printf("\n\n\t\tSwitch Grade : A");
		    break;
	   case 6:
//	   case 55:
		    printf("\n\n\t\tSwitch Grade : B");
		    break;
	   case 4:
//	   case 35:
		    printf("\n\n\t\tSwitch Grade : D");
		    break;

	}
	getch();
}

