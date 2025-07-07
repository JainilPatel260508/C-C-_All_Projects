/*
		how to use udf
		pow
		code reduce
*/
#include<stdio.h>
#include<conio.h>

void disp_line();

void main()
{   int b;
    clrscr();
    disp_line();
    b=big3(5,7,9);
    printf("\n\n\t\t Big3 : %d",b);
    disp_line();
    b=big3(50,70,19);

   printf("\n\n\t\t Big3 : %d",b);
    disp_line();
    getch();
 //   return 0;
}
void disp_line()
{
	printf("\n------------------------------------------------");

}
int big3(int x, int y, int z)
{
     int res = (x>y && x>z)?x:(y>z)?y:z;
     return res;
}