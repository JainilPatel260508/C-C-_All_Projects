#include<iostream.h>
#include<conio.h>
void main()
{
	int *p,k=10,**m;
	clrscr();
	p=new int[5];

	for(int i=0;i<5;i++)
	{
	  p[i]=k;
	  k++;
	}

	for(i=0;i<5;i++)
	{
	   cout<<"\n\t\t p:"<<p[i];
	}
	//double pointer

	m=new int *[3];
	for(i=0;i<3;i++)
	{
	   m[i]=new int[i+1];
	}
	//value assign to matrix
	for(i=0;i<3;i++)
	{
	   for(int j=0;j<i+1;j++)
	   {
	      m[i][j]=k++;
	   }
	}
	cout<<"\n\n\t\tMatrix\n\n\t\t";
	for(i=0;i<3;i++)
	{
	   for(int j=0;j<i+1;j++)
	   {
	      cout<<"  "<<m[i][j];
	   }
	   cout<<"\n\t\t";
	}
	getch();
}