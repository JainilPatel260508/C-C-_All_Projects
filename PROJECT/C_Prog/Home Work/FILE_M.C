/*
	file program
	->no. of Consonants
	->no. of entered lines
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	  FILE *fp;
	  char n;
	  int consonants=0,line=1;

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
		if((n>64 && n<91) || (n<123 && n>96))
		{
			if((n==65||n==97)||(n==69||n==101)||(n==73||n==105)||(n==79||n==111)||(n==85||n==117))
			{

			}
			else consonants++;
		}
		if(n==10)
		{
			line++;
		}
	}
	fclose(fp);

	printf("\n\n\t\tNo. Of consonants: %d",consonants);
	printf("\n\t\tNo. Of lines: %d",line);

    getch();
}
