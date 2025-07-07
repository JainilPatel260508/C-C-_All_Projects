/*
	type comand line argument
*/
#include<stdio.h>
#include<conio.h>

void main(int argc,char *argv[])
{
	char c;
	FILE *fp1;
	int v=0,sp=0,no=0,space=0,lower=0,upper=0,line=0;

	clrscr();
	if(argc!=2)
	{
		printf("syntax error");
		printf("\nsyntax: MYTYPE [source]");
		getch();
		return;
	}

	fp1 = fopen(argv[1],"r");
	if(fp1==NULL)
	{
		printf("\nFile Dosen't Exist..");
		getch();
		return;
	}
	fclose(fp1);

	fp1 = fopen(argv[1],"r");
	if(fp1!=NULL)
	{
	      while((c=getc(fp1))!=EOF)
	      {
			printf("%c",c);

			if((c==65||c==97)||(c==69||c==101)||(c==73||c==105)||(c==79||c==111)||(c==85||c==117))
			{
			    v++;
			}
			else if((c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126))
			{
			    sp++;
			}
			else if(c>=48&&c<=57)
			{
			    no++;
			}
			else if(c==32)
			   space++;

			else if(c>=65 && c<=90)
			   upper++;

		       else if(c>=97 && c<=122)
			  lower++;

		       else if(c=='\n')
			  line++;
		}
	}

	fclose(fp1);

	printf("\n\n\t\tNo. Of Vovels = %d",v);
	printf("\n\t\tNo. Of Special Character = %d",sp);
	printf("\n\t\tNo. Of Digits = %d",no);
	printf("\n\tNo. of line = %d",line+1);
	printf("\n\tNo. of Space = %d",space);
	printf("\n\tNo. of Words = %d",line+space+1);
	printf("\n\tNo. of Upper Letters = %d",upper);
	printf("\n\tNo. of Lower Letter = %d",lower);


}
