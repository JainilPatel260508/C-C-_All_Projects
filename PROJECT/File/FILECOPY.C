#include<stdio.h>
#include<conio.h>

void main(int argc,char *argv[])
{
	char ch,c;
	FILE *fp1,*fp2;

	clrscr();
	if(argc!=3)
	{
		printf("syntax error");
		printf("\nsyntax: filecopy [source] [target]");
		getch();
		return;
	}

	fp1 = fopen(argv[1],"r");
	if(fp1==NULL)
	{
		printf("\nFile not found..");
		printf("\n(0)file copied..");
		getch();
		return;
	}
	fclose(fp1);

	if(strcmp(argv[1],argv[2])==0)
	{
		printf("\nduplicate file name");
		printf("\n(0)file copied..");
		getch();
		return;
	}
	fp2 = fopen(argv[2],"r");
	if(fp2!=NULL)
	{
		fclose(fp2);
		printf("\ntarget file already exist");
		printf("\ndo u want to overwrite it..[y\n]");
		scanf("%c",&ch);
		if(ch=='y' && ch=='Y')
		    {
			fp2 = fopen(argv[2],"w");
			fp1 = fopen(argv[1],"r");

			while( (c=getc(fp1)) != EOF)
			    {
			      putc(c,fp2);
			    }
			    printf("\n(1)file copied successfully");
			    getch();
			    fclose(fp1);
			    fclose(fp2);
		    }
		else
		    {
		     printf("0) file copied");
		     getch();
		    }
	}
	else
	   {
		fclose(fp2);
		fp2 = fopen(argv[2],"w");
		fp1 = fopen(argv[1],"r");

		while( (c=getc(fp1)) != EOF)
		    {
		      putc(c,fp2);
		    }
		    printf("\n(1)file copied successfully");
		    getch();
		    fclose(fp1);
		    fclose(fp2);
	   }
	getch();
}