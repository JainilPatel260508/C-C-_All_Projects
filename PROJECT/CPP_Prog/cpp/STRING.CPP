#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
	char *name;
	int len;
	public:
	string()
	{
		len=0;
		name=new char[len+1];
	}
	string(char *s)
	{
		len=strlen(s);
		name= new char [len+1];
		strcpy(name,s);
	}

	void display()
	{
		cout<< name <<"\n";
	}
	void join(string &a,string &b)
	{
		len=a.len+b.len;
		delete name;
		name = new char[len+1];
		strcpy(name,a.name);
		strcat(name,b.name);
	}
};

void main()
{
	char *first = "Sama";
	string name1(first),name2(" Divyeshkumar "),name3(" Patel "),s1,s2;
	clrscr();
	s1.join(name1,name2);
	s2.join(s1,name3);
	name1.display();
	name2.display();
	name3.display();
	s1.display();
	s2.display();
	getch();
}

