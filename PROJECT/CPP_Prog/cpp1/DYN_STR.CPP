/*
	String
*/
#include<iostream.h>
#include<conio.h>
#include<string.h>

class string
{
	int len;
	char *name;
	public:
	    string() //default constructor
	    {
		len=0;
		name = new char[len+1];
	    }
	    string(char *s)
	    {
		len=strlen(s);
		name = new char[len+1];
		strcpy(name,s);
	    }
	    void join(string &,string &);
	    void disp()
	    {
		cout<<"\n\n\t\tName :"<<name;
	    }
};
void string :: join(string & s1, string & s2)
{
	len=s1.len+s2.len;
	delete name;
	name = new char[len+1];
	strcpy(name,s1.name);
	strcat(name,s2.name);
}
void main()
{
	char *name1="Hi ",*name2="wel ";
	string str1(name1),str2(name2),str3("Come"),S1,S2;
	clrscr();
	str1.disp();
	str2.disp();
	str3.disp();
	S1.join(str1,str2);
	S1.disp();
	S2.join(S1,str3);
	S2.disp();
       getch();
}