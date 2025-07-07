/*
		what is diff betn
		call by ref (Pointer)
		call by value.
*/
#include<stdio.h>
#include<conio.h>

void swapbyval(int, int);
void swapbyref(int *, int *);

void main()
{
	int x=10,y=20,j=100,k=200;
	clrscr();
	printf("\n\t\tbefore call by value x: %d y:%d",x,y);
	swapbyval(x,y);
	printf("\n\t\tafter call by value x: %d y:%d",x,y);

	printf("\n\t\tbefore call by ref j: %d k:%d",j,k);
	swapbyref(&j,&k);
	printf("\n\t\tafter call by ref j: %d k:%d",j,k);

	getch();
}
void swapbyref(int *p,int *q)
{
    int z=*p;
    *p=*q;
    *q=z;
//    printf("\n\t\tinside fun. after call by value x: %d y:%d",p,q);
}
void swapbyval(int p,int q)
{
    int z=p;
    p=q;
    q=z;
    printf("\n\t\tinside fun. after call by value x: %d y:%d",p,q);
}