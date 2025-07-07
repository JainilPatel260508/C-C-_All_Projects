//multiplication of two matrix by pointer

#include<iostream.h>
#include<conio.h>

class ptr_2d
{
   int **p,r,c;

   public:

   ptr_2d(int, int);
   void input();
   void disp();
   friend ptr_2d operator*(ptr_2d , ptr_2d );

};

void ptr_2d :: disp()
{
   cout<<"\n\t";

   for(int i=0;i<r;i++)
   {
      for(int j=0;j<c;j++)
	cout<<p[i][j]<<" ";

	cout<<"\n\t";
   }
}

ptr_2d operator*(ptr_2d x, ptr_2d y)
{
   ptr_2d z = ptr_2d(x.r,y.c);

   int i,j,k;
   for(i=0;i<x.r;i++)
   {
     for(j=0;j<y.c;j++)
     {
	z.p[i][j]=0;
	for(k=0;k<y.c;k++)
	z.p[i][j]+=(x.p[i][k])*(y.p[k][j]);
     }
   }
   return(z);
}

void ptr_2d :: input()
{
   int i=0,j=0;
   cout<<"\n\tEnter matrix element: ";
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
      cin>>p[i][j];
   }

}

ptr_2d :: ptr_2d(int r1, int c1)
{
   r=r1;
   c=c1;

   p=new int*[r];

   for(int i=0;i<r;i++)
    p[i]=new int[c];

}

void main()
{
  l1:
   clrscr();

   int c1,c2,r1,r2;

   cout<<"\n\tEnter Rows and Columns of Matrix 1: ";
   cin>>r1>>c1;

   cout<<"\n\tEnter Rows and Columns of Matrix 2: ";
   cin>>r2>>c2;

      ptr_2d p1= ptr_2d(r1,c1);
      ptr_2d p2= ptr_2d(r2,c2);
      ptr_2d p3= ptr_2d(r1,c2);

   if(c1==r2)
   {
       p1.input();
       p2.input();
   }
   else
   cout<<"\n\tMatrix multiplication is not possible";


   p3=p1*p2;

   cout<<"\n\tMatrix 1:";
   p1.disp();
   cout<<"\n\tMatrix 2:";
   p2.disp();
   cout<<"\n\tResultant Matrix:";
   p3.disp();

   getch();
}