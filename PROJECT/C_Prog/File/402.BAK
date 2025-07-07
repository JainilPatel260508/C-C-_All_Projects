#include<conio.h>
#include<stdio.h>

void main()
{
    FILE *fp;
    long n;
    char c;
    clrscr();
    fp=fopen("RANDOM1","w");
      printf("Enter a Char:\n");
		while((c= getchar()) !=EOF)
		putc(c,fp);

		printf("NO.of Characters Entered=%ld \n",ftell(fp));
		fclose(fp);
		fp=fopen("RANDOM1","r");
		n=0;

		while(feof(fp) == 0)
		{
			fseek(fp,n,0);
			printf("Position Of %c is %ld \n",getc(fp),ftell(fp));
			n=n+5;
		}

		putchar('\n');
		fseek(fp,-1,2);
		do
		  {
			 putchar(getc(fp));
	       //	 getch();
		  }
		   while(!fseek(fp,-2,1));
	    fclose(fp);
	    getch();
}

