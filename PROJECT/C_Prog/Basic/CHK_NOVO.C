#include<stdio.h>
#include<conio.h>

void main()
{
	int n,k,f;
	clrscr();

	printf("Enter any key:");
	n=getchar();

	switch(n)
	{
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case '0':
			printf("\nThe entered key is a number");
		break;

		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			printf("\nThe entered key is a vowel");
		break;

		default:
		printf("\nThe entered key is neither vowel nor digit");


	}

	getch();


}