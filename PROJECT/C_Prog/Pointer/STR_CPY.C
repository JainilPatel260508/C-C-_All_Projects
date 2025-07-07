#include<stdio.h>
#include<conio.h>

void inp_str(char *);
void strcopy(char *, char *);

void main()
{
    char n[15],d[15],*ptr_n,*ptr_d;

    clrscr();

    ptr_n=&n[0];
    ptr_d=&d[0];

    inp_str(ptr_n);
    strcopy(ptr_d,ptr_n);

    printf("\n\tEntered String: ");
    puts(ptr_n);


    printf("\tCopied String: ");
    puts(ptr_d);

getch();

}


void strcopy(char *d, char *s)
{
	int i,j,l=strlen(s);

	for(i=0;i<l;i++,d++,s++)
	{
	   *d = *s;

	}

	*d='\0';

}

void inp_str(char *ptr)
{
    int i,j;

	printf("\n\tEnter a string: ");
       gets(ptr);
}