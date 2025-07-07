/*
		No arg(Para) and no return value.
		No arg and return value.
	    **	Arg and Return value.
		Arg but no return value.
		---------------
		Prototype
		int fact(int n);
		int IsPrime(int n);
		void pline(void);
		float SimpleInt();
		void AreaOfCircle(int r);
		int big3(int x,int y,int z);
*/
#include<stdio.h>
#include<conio.h>

void pline();
float SimpleInt();
void main()
{
       int x=500,y=100,z=15;
       int res=0;
       float sint=0.0;
	clrscr();
	res=big3(x,y,z);
	pline();
	printf("\n\n\t\ Big3:%d",res);

	sint=SimpleInt();

	printf("\n\n\t\ Simple int :%.2f",sint);
	pline();
	res=fact(5);

	printf("\n\n\t\ Fact :%d",res);
	pline();
	getch();
}
int fact(int n)
{
	int r=1,i;
	for(i=1;i<=n;i++)
	{
	    r=r*i;
	}
	return r;
}
float SimpleInt()
{
    int p,n;
    float r;
    float res;
    pline();
    printf("\n\n\t Principal Amt:");
    scanf("%d",&p);
    printf("\n\n\t Rate of Int:");
    scanf("%f",&r);
    printf("\n\n\t No of Year:");
    scanf("%d",&n);
    res=p*r*n/100.0;
    pline();
    return res;

}
int big3(int a,int b,int c)
{
      int res=a>b && a>c?a:b>c?b:c;
      return res;
}
void pline()
{
	int k;
	printf("\n");
	for(k=0;k<45;k++)
	{
	   printf("-");
	}
}