// 2d pointer of 2d matrix{adding & multiplying}
#include<iostream.h>
#include<conio.h>

class matrix
{
     int **p;
     int d1,d2;

   public:
     matrix(int x,int y);
     void mat_input();
     friend matrix mat_add(matrix &,matrix &,matrix &);
     friend matrix mat_mul(matrix &,matrix &,matrix &);
     void mat_disp();
};

matrix :: matrix(int x,int y)
{
  int i;
    d1=x;
    d2=y;
    p=new int *[d1];
    for(i=0;i<d1;i++)
      p[i]= new int[d2];
}
void matrix :: mat_input()
{
     for(int i=0;i<d1;i++)
     {
	  for(int j=0;j<d2;j++)
		cin>>p[i][j];
     }
}
void matrix :: mat_disp()
{
     for(int i=0;i<d1;i++)
     {  cout<<"\t";
	  for(int j=0;j<d2;j++)
	   { cout<<" "<<p[i][j]<<" ";}
	cout<<"\n";
     }
}
matrix mat_mul(matrix &x,matrix &y,matrix &z)
{
     for(int i=0;i<x.d1;i++)
     {
	  for(int j=0;j<x.d1;j++)
	  {
	       for(int k=0;k<x.d2;k++)
		    z.p[i][j]+= (x.p[i][k])*(y.p[k][j]);
	  }
     }
   return(z);
}
matrix mat_add(matrix &x,matrix &y,matrix &z)
{
     for(int i=0;i<x.d1;i++)
     {
	  for(int j=0;j<x.d2;j++)
	     z.p[i][j]= x.p[i][j] + y.p[i][j];
     }
   return(z);
}

int main()
{
  clrscr();
     int r1,c1,r2,c2,flag1=0,flag2=0;

     cout<<"\n\tEnter no. of rows of 1st matrix: ";
     cin>>r1;
     cout<<"\tEnter no. of colums of 1st matrix: ";
     cin>>c1;

     cout<<"\n\tEnter no. of rows of 2nd matrix: ";
     cin>>r2;
     cout<<"\tEnter no. of colums of 2nd matrix: ";
     cin>>c2;

     if((r1!=r2&&c1!=c2) && (r1!=c2&&r2!=c1))
     {
	 cout<<"\n\tBoth multiplication and Addition of the matrix of inputed dimension.";
	 getch();
	 return 0;
     }

     matrix m1(r1,c1),m2(r2,c2);
     cout<<"\n\tEnter 1st matrix elements row by row: \n";
     m1.mat_input();
     cout<<"\n\tEnter 2nd matrix elements row by row: \n";
     m2.mat_input();
     clrscr();
     cout<<"\tMatrix 1: \n";
     m1.mat_disp();
     cout<<"\n\tMatrix 2: \n";
     m2.mat_disp();

     if(r1==r2 && c1==c2)
     {
	  matrix m_sum(r1,c1);
	  m_sum=mat_add(m1,m2,m_sum);
	  cout<<"\n\n\tAddition of 2 matrix: \n";
	  m_sum.mat_disp();
	  flag1=1;
     }
     if(c1==r2 && r1==c2)
     {
	  matrix m_mul(r1,r1);
	  m_mul=mat_mul(m1,m2,m_mul);
	  cout<<"\n\n\tMultiplication of two matrix: \n";
	  m_mul.mat_disp();
	  flag2=1;
     }
     if(flag1==0)
       cout<<"\n\n\tAddition of this two matrix are not possible.";
     if(flag2==0)
       cout<<"\n\n\tMultiplication of this two matrix are not possible.";

   getch();
   return 0;
}