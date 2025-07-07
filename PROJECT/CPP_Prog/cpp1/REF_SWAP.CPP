#include<iostream.h>
#include<conio.h>

void main()
{
   int x,y;
   void swap(int *, int *); //call by reference
   void interchange(int &, int &); //reference var
   clrscr();

   cout<<"\n\t\tX:";
   cin>>x;
   cout<<"\n\t\tY:";
   cin>>y;
   cout<<"\n\n\t\tbefore swap X:"<<x;
   cout<<"\n\t\tbefore swap Y:"<<y;
   swap(&x,&y);
   cout<<"\n\n\t\tafter swap X:"<<x;
   cout<<"\n\t\tafter swap Y:"<<y;

   cout<<"\n\n\t\tbefore interchange X:"<<x;
   cout<<"\n\t\tbefore interchange Y:"<<y;
   interchange(x,y);
   cout<<"\n\n\t\tafter interchange X:"<<x;
   cout<<"\n\t\tafter interchange Y:"<<y;

   getch();

}
void interchange(int & a,int & b)
{
   int t = a;
    a = b;
    b = t;
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}