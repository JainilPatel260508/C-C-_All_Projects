/*
	find fact by Recursion function
	Itself calling
*/
#include<stdio.h>
#include<conio.h>
long int fact(int);
void main()
{
    int n;
    long int f=0;
    clrscr();
    printf("Enter a value of N:");
    scanf("%d",&n);
    f=fact(n);
    printf("\n Fact : %ld",f);
    getch();
}
long int fact(int n)
{
    static int f=1;
    if (n==0)
      return 1;
    else
      f=n*fact(n-1);
    return f;
}
/*

LIFO -> Stack
n=5
RAM memory

1
2  1*2
3  2*3
4  6*4
5  24*5=120  True

f=5*4
f=20*3
f=60*2
f=120*1
f=120      False
*/
