/*
	employee info
*/
#include<stdio.h>
#include<conio.h>

struct emp
{
	int empno;
	char name[20];
	long int bs;
	float hra, da, pf;
	float nets;
};

void main()
{
   int i;
   struct emp e[2];

   clrscr();

   for(i=0;i<2;i++)
   {
   printf("\n\tEnter employee number: ");
   scanf("%d",&e[i].empno);

   printf("\tEnter employee name: ");
   scanf("%s",e[i].name);

   printf("\tEnter employee's basic salary: ");
   scanf("%ld",&e[i].bs);
   printf("\n");

	if(e[i].bs<25000)
	{
	e[i].hra=e[i].bs*0.05;
	e[i].da=e[i].bs*0.06;
	e[i].pf=e[i].bs*0.07;
	}
	else if(e[i].bs<50000 && e[i].bs>25000)
	{
	e[i].hra=e[i].bs*0.06;
	e[i].da=e[i].bs*0.07;
	e[i].pf=e[i].bs*0.08;
	}
	else if(e[i].bs<75000 && e[i].bs>50000)
	{
	e[i].hra=e[i].bs*0.07;
	e[i].da=e[i].bs*0.08;
	e[i].pf=e[i].bs*0.09;
	}
	else if(e[i].bs<100000 && e[i].bs>75000)
	{
	e[i].hra=e[i].bs*0.08;
	e[i].da=e[i].bs*0.09;
	e[i].pf=e[i].bs*0.1;
	}

	e[i].nets=e[i].bs+e[i].hra+e[i].da-e[i].pf;
   }


   for(i=0;i<2;i++)
   {
   printf("\n\tEmployee number:%d",e[i].empno);

   printf("\n\tEmployee name:%s",e[i].name);

   printf("\n\tBasic salary:%ld",e[i].bs);

   printf("\n\tHRA:%.2f",e[i].hra);

   printf("\n\tDA:%.2f",e[i].da);

   printf("\n\tPF:%.2f",e[i].pf);

   printf("\n\tNet Salary:%.2f\n",e[i].nets);

   }
   getch();
}

