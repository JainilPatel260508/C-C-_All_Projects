/*No. of letter repeating*/

#include<stdio.h>
#include<conio.h>

void main()
{
	char a[30];
	int z[30],b=0,j,k=0,l,i,l1,flag;
	clrscr();

	printf("\n\tEnter any string:");
	gets(a);

	b=strlen(a);

	for(i=0,j=0;i<b;i++,j++)
	{
	 for(l=0;l<b;l++)
	 {
	  if(a[j]==a[l])
	  {
	   k=k+1;
	   z[j]=k;

	  }
	 }
	 k=0;
	}
	j=0;
    l1: for(i=-1;i<j;i++)
    {
     if(a[i]==a[j])
     {
      flag=1;
      break;
     }
    }
    if(flag!=1)
    printf("\n\t%c ---> %d",a[j],z[j]);
    flag=0;
    j=j+1;
    if(j<b)
    goto l1;


 getch();
}