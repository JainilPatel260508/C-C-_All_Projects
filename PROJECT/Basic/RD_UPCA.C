#include<stdio.h>
#include<conio.h>

void main()
{
	char name[50];
	int i,j,k;

	clrscr();

	printf("Enter Your Name:");
  //	gets(name);
	scanf("%[A-Z a-z]",name);

	for(i=0;name[i]!='\0';i++)
	{
     //	if(name[i]>='A' && name[i]<='Z')
	printf("\n %c",name[i]);

	}

	getch();


}