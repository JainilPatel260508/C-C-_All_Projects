#include<iostream.h>
#include<conio.h>

class Ackermann
{
    int n1,n2;

    public:
    void input(void);
    int ack(int,int);

};

void Ackermann :: input(void)
{
    l1:
      cout<<"\n\n\tEnter no. of iteration: ";
      cin>>n1;

      cout<<"\n\tEnter A positive no.: ";
      cin>>n2;

      if(n1<0 || n2<0)
      {
	 cout<<"\n\n\tEnter a positive no.";
	 getch();
	 goto l1;
      }
      cout<<"\n\n\t\tAckermann: "<<ack(n1,n2);
}


int Ackermann :: ack(int m,int n)
{
   static int x;

    if(m==0)
      return(n+1);

    else if(n==0)
      x=ack(m-1,1);

    else
      x=ack(m-1,ack(m,n-1));
    cout<<"\nX:"<<x;
    return (x);
}


void main()
{
   clrscr();

	Ackermann p1;

	p1.input();
   getch();
}
