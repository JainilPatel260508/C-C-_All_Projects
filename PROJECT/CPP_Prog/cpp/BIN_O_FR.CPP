/*
	operator overloading using friend function
	a=2*b
	a=b*2
*/
#include<iostream.h>
#include<conio.h>
const size=3;
class vector
{
     int v[size];
     public:
	vector();
	vector(int *);
	friend vector operator *(int ,vector);
	friend vector operator *(vector,int);
	friend ostream & operator <<(ostream & ,vector &);
	friend istream & operator >>(istream & ,vector &);
	operator double();

};
vector :: operator double()
{
	double sum=0;
	for(int i=0;i<size;i++)
	{
	  sum=sum+v[i]*v[i];
	}
	return sum;
}
vector :: vector()
{
	for(int i=0;i<3;i++)
	{
	   v[i]=0;
	}
}
vector :: vector(int * a)
{
	for(int i=0;i<3;i++)
	{
	   v[i]= a[i];
	}
}
vector operator *(int a, vector b)
{
	for(int i=0;i<3;i++)
	{
	   b.v[i]=a*b.v[i];
	}
	return b;
}
vector operator *(vector b,int a)
{
	for(int i=0;i<3;i++)
	{
	   b.v[i]=b.v[i]*a;
	}
	return b;
}
ostream & operator <<(ostream & dout, vector & a)
{
	dout<<"("<<a.v[0];
	for(int i=1;i<3;i++)
	{
	   dout<<","<<a.v[i];
	}
	dout<<")";
	return dout;
}
istream & operator >>(istream & din, vector & a)
{
	for(int i=0;i<3;i++)
	{
	   din>>a.v[i];
	}
	return din;
}
int a[3]={1,2,3};
void main()
{
	vector v1,v2(a),v3,v4;
	clrscr();
	v4 = v2 * 2;
	cout<<"\n\n\t\tvector4:"<<v4;

	cout<<"\nEnter a the vector1:";
	cin>>v1;
	cout<<"\n\n\t\tvector1:";
	cout<<"v1:"<<v1;
	v3 = 2 * v1;
	cout<<"\n\n\t\tvector2:";
	cout<<"v2:"<<v2;
//	cout<<"\n\n\t\tvector3:"<<v3;
	cout<<"v3:"<<v3;
	double s = v1;
	cout<<"\n\n\t\tSum of V1:"<<s;
       getch();
}
