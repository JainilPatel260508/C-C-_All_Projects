#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *fp;
	char c;
	clrscr();
	printf("Enter a data:\n");
	fp=fopen("/project/data1.txt","w+");
	c=getchar();
	while(c!=EOF)
	{
	   putc(c,fp);
	   c=getchar();
	}
	fclose(fp);
	printf("\n Terminate the file for Write mode\n");
	fp=fopen("/project/data1.txt","r+");
	while((c=getc(fp))!=EOF)
	{
	   printf("%c",c);
	}
	fclose(fp);
	printf("\n Terminate the file for Read mode\n");
getch();
}