// Calculate Simple Interest and Its Net Amount

#include<stdio.h>
#include<conio.h>

void main()
{
  int P=0;
  float R;
  int T=0;
  float SI;
  float N;

  clrscr();

  printf("\n Input the Principle Amount:");
  scanf("%d",&P);
  printf("\n Input the Rate Of Interest:");
  scanf("%f",&R);
  printf("\n Input the no. of Year:");
  scanf("%d",&T);

  SI=P*R*T/100;

  N=SI+P;

  printf("\n Simple Interest :%.2f",SI);
  printf("\n Net Amount:%.2f",N);

  getch();
}