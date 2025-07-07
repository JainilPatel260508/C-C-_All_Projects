/*
		Add Multiple name
  [R][C]	-----------------
char nm[10][15]	Jayesh
  [0..9][0..14]	Shrey
		Meet
		Jainil
		Dev
*/
#include<stdio.h>
#include<conio.h>

void inname(char [][15]);
void outname(char [][15]);
int n;
void main()
{
 char nm[10][15];
 int i;
 clrscr();
 printf("\n\n\t\how many no of the name<10:");
 scanf("%d",&n);
 inname(nm);

 printf("\n\n\t\tYour Names\n");
 outname(nm);

 getch();
}
void inname(char s[][15])
{
  int i;
  for(i=0;i<n;i++)
 {
    printf("\n\t\tEnter a name:");
    scanf("%s",s[i]);
  }
}
void outname(char s[][15])
{
 int i;
   for(i=0;i<n;i++)
 {
    printf("\n\t\tName:%s",s[i]);
 }
}