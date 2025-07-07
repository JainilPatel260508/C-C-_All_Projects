/*
    student info
*/

#include<iostream.h>
#include<conio.h>

class student
{
   private:

   char g;
   int m1,m2,m3;
   char name[10];
   float total,per;

   public:

   void input()
   {
       cout<<"\n\t Enter student name: ";
       cin>>name;
       cout<<"\n\t Enter marks of maths: ";
       cin>>m1;
       cout<<"\t Enter marks of chemistry: ";
       cin>>m2;
       cout<<"\t Enter marks of physics: ";
       cin>>m3;
   }

   void output()
   {
      g=grade();

      cout<<"\n\n\t Name: "<<name;
      cout<<"\n\t Maths: "<<m1;
      cout<<"\n\t Chemistry: "<<m2;
      cout<<"\n\t Physics: "<<m3;
      cout<<"\n\t Total: "<<total;
      cout<<"\n\t Percentage: "<<per;
      cout<<"\n\t Grade: "<<g;
   }

   char grade()
   {
     char g;

     total=m1+m2+m3;
     per=total/3;

     if(per>=85)
     g='A';
     else if(per>=75 && per<85)
     g='B';
     else if(per>=60 && per<75)
     g='C';
     else if(per>=40 && per<60)
     g='D';
     else if(per<=40)
     g='F';

     return(g);
   }
};

void main()
{
  student stu1,stu2;

  clrscr();
  cout<<"\n\t Enter 1st student info:\n";
  stu1.input();

  cout<<"\n\t Enter 2nd student info:\n";
  stu2.input();

  clrscr();

  stu1.output();
  stu2.output();

  getch();

}
