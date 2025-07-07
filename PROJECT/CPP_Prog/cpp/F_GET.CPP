#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
void main()
{
	clrscr();
	char string[80];
	cout<<"\n\n\t\tEnter a string : ";
	cin>>string;

	int len=strlen(string);
	fstream file;
	cout<<"\n\n\t\tOpening the 'TEXT' file and storing the string in it.";

	file.open("TEXT",ios::in|ios::out);
	for(int i=0;i	<len;i++)
	{
		file.put(string[i]);
	}

	file.seekg(0);

	char ch;
	cout<<"\n\n\t\tReading the file content : ";
	while(file)
	{
		file.get(ch);
		cout<<ch;
	}

	getch();
}
