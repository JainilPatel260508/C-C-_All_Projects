/*
	dynamic memory allocation
	Matrix
*/
#include<iostream.h>
#include<conio.h>
class matrix
{
	int **p,d1,d2;
	public:
	   matrix(int,int);
	   void getelement(int i, int j, int value)
	   {
		p[i][j]=value;
	   }
	   int  putelement(int i,int j)
	   {
	      return p[i][j];
	   }
	   ~matrix(); //destructor
};
matrix :: ~matrix()  //Desctructor
{
	for(int i=0;i<d1;i++)
	 delete p[i];
	 delete p;
}
matrix :: matrix(int r, int c) //constructor
{
	d1=r;
	d2=c;
	p = new *[d1];
	for(int i=0;i<d1;i++)
	  p[i] = new int[d2];
}
void main()
{
	int r,c;
	int val;
	clrscr();
	cout<<"\n\n\t\tEnter the Row and Column:";
	cin>>r>>c;
	matrix m(r,c);
	cout<<"\n\n\t\tEnter the matrix:";
	for(int i=0;i<r;i++)
	{
	  for(int j=0;j<c;j++)
	    {
	       cin>>val;
	       m.getelement(i,j,val);
	    }
	}
	cout<<"\n\n\t\t m[1][2]:"<<m.putelement(1,2);
	getch();
}
