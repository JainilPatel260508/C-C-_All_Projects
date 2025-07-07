// string sorting 2d

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,n=0;
	char *ptr_a,*ptr_b,str[20][20],temp[20][20];
	clrscr();

	printf("enter the number of strings you want to enter");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	gets(str[i]);
	}
	ptr_a=&str[0][0];
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++,ptr_a++)
		{
		       if(strcmp(str[i],str[j])<0)
		       {
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
		       }
		}
	}
	printf("\n\tsorted strimgs\n\n");
	ptr_a=&str[0][0];
	for(i=0;i<=n;ptr_a++,i++)
	{
		printf("%s \n",&str[i]);
	}


	getch();
}