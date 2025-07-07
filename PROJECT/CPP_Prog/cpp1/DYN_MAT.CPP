/*
	Dynamic matrix
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
	   int maxelement();

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
int matrix :: maxelement()
{
     int max=p[0][0];
     for(int i=0;i<d1;i++)
     {
	for(int j=0;j<d2;j++)
	{
	    if (max<p[i][j])
	       max=p[i][j];
	}
     }
     return max;
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
	cout<<"\n\n\t\t Max Element:"<<m.maxelement();
	getch();
}
