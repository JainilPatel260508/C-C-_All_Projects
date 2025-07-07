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
   struct emp *p;

   clrscr();
   p=&e[0];
   for(i=0;i<2;i++)
   {
   printf("\n\tEnter employee number: ");
   scanf("%d",&p->empno);

   printf("\tEnter employee name: ");
   scanf("%s",p->name);

   printf("\tEnter employee's basic salary: ");
   scanf("%ld",&p->bs);
   printf("\n");

	if(p->bs<25000)
	{
	p->hra=p->bs*0.05;
	p->da=p->bs*0.06;
	p->pf=p->bs*0.07;
	}
	else if(p->bs<50000 && p->bs>25000)
	{
	p->hra=p->bs*0.06;
	p->da=p->bs*0.07;
	p->pf=p->bs*0.08;
	}
	else if(p->bs<75000 && p->bs>50000)
	{
	p->hra=p->bs*0.07;
	p->da=p->bs*0.08;
	p->pf=p->bs*0.09;
	}
	else if(p->bs<100000 && p->bs>75000)
	{
	p->hra=p->bs*0.08;
	p->da=p->bs*0.09;
	p->pf=p->bs*0.1;
	}

	p->nets = p->bs + p->hra + p->da - p->pf;
	p++;
   }

   p=&e[0];
   for(i=0;i<2;i++)
   {
   printf("\n\tEmployee number:%d",p->empno);

   printf("\n\tEmployee name:%s",p->name);

   printf("\n\tBasic salary:%ld",p->bs);

   printf("\n\tHRA:%.2f",p->hra);

   printf("\n\tDA:%.2f",p->da);

   printf("\n\tPF:%.2f",p->pf);

   printf("\n\tNet Salary:%.2f\n",p->nets);
   p++;
   }
   getch();
}

