#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f1,*f2,*f3;
	int no,i;
	printf("\nContents of Data file\n\n");
	f1=fopen("\project\Data.txt","w");
	for(i=1;i<=30;i++)
	{
		scanf("%d",&no);
		if(no==-1) break;
		putw(no,f1);
	}
	fclose(f1);
	f1=fopen("\project\Data.txt","r");
	f2=fopen("\project\ODD.txt","w");
	f3=fopen("\project\EVEN.txt","w");
	while((no=getw(f1))!=EOF)
	{
		if(no%2==0)
			putw(no,f3);
		else
			putw(no,f2);
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	f2=fopen("\project\ODD.txt","r");
	f3=fopen("\project\EVEN.txt","r");
	printf("\n\nContents  of ODD file\n\n");
	while((no = getw(f2))!=EOF)
	  printf("%4d",no);
       printf("\n\nContents of EVEN file\n\n");
       while((no=getw(f3))!=EOF)
	printf("%4d",no);
       fclose(f2);
       fclose(f3);
	getch();
}