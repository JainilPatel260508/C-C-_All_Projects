//addition of matrix with ptr

#include<iostream.h>
#include<conio.h>

int r1,c1,r2,c2;

class ptr_2d
{
   int **p;

   public:

   ptr_2d();
//   ptr_2d(ptr_2d &);
//   ~ptr_2d();
   void input();
   void disp();
   friend ptr_2d operator+(ptr_2d , ptr_2d );

};

void ptr_2d :: disp()
{
   cout<<"\n\t";

   for(int i=0;i<r1;i++)
   {
      for(int j=0;j<c1;j++)
	cout<<p[i][j]<<" ";

	cout<<"\n\t";
   }
}

ptr_2d operator+(ptr_2d x,ptr_2d y)
{
   ptr_2d z;

   for(int i=0;i<r1;i++)
   {
      for(int j=0;j<c1;j++)
	z.p[i][j] = x.p[i][j] + y.p[i][j];
   }

   return(z);
}

void ptr_2d :: input()
{
   int i=0,j=0;
   cout<<"\n\tEnter matrix element: ";
   for(i=0;i<r1;i++)
   {
      for(j=0;j<c1;j++)
      cin>>p[i][j];
   }

}

ptr_2d :: ptr_2d()
{
   p=new int*[r1];

   for(int i=0;i<r1;i++)
    p[i]=new int[c1];

}
/*
ptr_2d :: ptr_2d(ptr_2d &x)
{
   p=x.p;

   for(int i=0;i<r1;i++)
   {
    p[i]=new int[c1];
    p[i]=x.p[i];
   }
}

ptr_2d :: ~ptr_2d()
{
    for(int i=0;i<r1;i++)
      delete p[i];

    delete p;
}
*/
void main()
{
  l1:
   clrscr();

   cout<<"\n\tEnter Rows and Columns of Matrix 1: ";
   cin>>r1>>c1;

   cout<<"\n\tEnter Rows and Columns of Matrix 2: ";
   cin>>r2>>c2;

   ptr_2d p1, p2, p3;

   if(r1==r2 && c1==c2)
   {
       p1.input();
       p2.input();
   }
   else
   {
      cout<<"\n\tEnter Appropriate matrix size";
      getch();
      goto l1;
   }


   p3=p1+p2;

   cout<<"\n\tMatrix 1:";
   p1.disp();
   cout<<"\n\tMatrix 2:";
   p2.disp();
   cout<<"\n\tResultant Matrix:";
   p3.disp();

   getch();
}