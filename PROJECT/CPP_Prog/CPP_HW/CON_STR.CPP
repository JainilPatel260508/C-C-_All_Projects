// string func using const
#include<iostream.h>
#include<conio.h>
#include<string.h>

class string
{        private:
	 char a[20];
	 public :
	    string()
	    {
	       a[0]='\0';
	    }

	    string(char x[])
	    {
	       strcpy(a,x);
	    }

	    string(string &x)
	    {
	       strcpy(a,x.a);
	    }

	    friend string concate(string &x, string &y);

	    void display()
	    {
		cout<<"\n\t\tstring: "<<a;
	    }
};

string concate(string &x, string &y)
{
	string z;
	strcpy(z.a,x.a);
	strcat(z.a,y.a);
	return(z);
}


void main()
{
   clrscr();
   string s1;
   string s2("Well done");
   string s3(s2);
   string s4;

   s4=concate(s2,s3);

   s1.display();
   s2.display();
   s3.display();
   s4.display();

   getch();
}