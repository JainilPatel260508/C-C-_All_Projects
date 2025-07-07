/*
	file program getc putc
	->no. of Vovel
	->no. of special char
	->no. of int
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	  FILE *fp;
	  char n;
	  int v=0,sp=0,no=0;

    clrscr();

	printf("\n\n\tEnter a data: ");
	fp=fopen("C:\TURBOC3\BIN\FILES\data.txt","w");

	n=getchar();

	while(n!=EOF)
	{
	    putc(n,fp);
	    n=getchar();
	}
	fclose(fp);

	n='\0';

	fp=fopen("C:\TURBOC3\BIN\FILES\data.txt","r");

	printf("\n\n\t\tEntered Data: ");

	while((n=getc(fp))!=EOF)
	{
		printf("%c",n);

		if((n==65||n==97)||(n==69||n==101)||(n==73||n==105)||(n==79||n==111)||(n==85||n==117))
		{
			v++;
		}
		else if((n>=33&&n<=47)||(n>=58&&n<=64)||(n>=91&&n<=96)||(n>=123&&n<=126))
		{
			sp++;
		}
		else if(n>=48&&n<=57)
		{
			no++;
		}
	}
	fclose(fp);

	printf("\n\n\t\tNo. Of Vovels: %d",v);
	printf("\n\t\tNo. Of Special Character: %d",sp);
	printf("\n\t\tNo. Of Digits: %d",no);

    getch();
}
