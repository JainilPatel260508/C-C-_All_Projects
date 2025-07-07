// COLOUR IDENTIFICATION
#include<stdio.h>
#include<conio.h>


void main()
{
	char n;
	clrscr();

	printf("\n\n\t\t Enter the color's initial of rainbow:");
	n=getchar();

	switch(n)
	{
		default:
			printf("\n\n\t\t This color does'nt exist in rainbow.");
			break;

		case 'v':
		case 'V':
			printf("\n\n\t\t This color is Violet");
			break;
		case 'i':
		case 'I':
			printf("\n\n\t\t This color is Indigo");
			break;
		case 'b':
		case 'B':
			printf("\n\n\t\t This color is Blue");
			break;
		case 'g':
		case 'G':
			printf("\n\n\t\t This color is Green");
			break;
		case 'y':
		case 'Y':
			printf("\n\n\t\t This color is Yellow");
			break;
		case 'o':
		case 'O':
			printf("\n\n\t\t This color is Orange");
			break;
		case 'r':
		case 'R':
			printf("\n\n\t\t This color is Red");
			break;

	}

	getch();
}
