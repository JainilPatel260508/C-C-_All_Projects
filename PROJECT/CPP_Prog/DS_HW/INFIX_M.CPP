//  Infix to prefix and postfix
#include<iostream.h>
#include<conio.h>

class polish_notation
{
	char arr[30];
	int number_of_elements,number_of_brackets;
	public:
		void input_in_infix();
		char infix_to_postfix(char[]);
		char infix_to_prefix(char[]);
};
void polish_notation :: input_in_infix()
{
	int i;
	cout<<"Enter your string : ";
	cin>>arr;
	number_of_elements=0;
	number_of_brackets=0;

	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i]!='(' && arr[i]!=')')
		number_of_elements++;
		else
		{
		number_of_elements++;
		number_of_brackets++;
		}
	}
	for(i=number_of_elements;i>0;i--)
	{
		arr[i]=arr[i-1];
	}

	arr[0]='(';
	arr[number_of_elements+1]=')';
	arr[number_of_elements+2]='\0';
	cout<<endl;

	infix_to_prefix(arr);
	infix_to_postfix(arr);
}
char polish_notation :: infix_to_prefix(char infix_arr[])
{
	int i,j,k,flag;
	char temp_arr[30],stack[30],prefix_arr[30];
	for(i=number_of_elements+1,j=0;i>=0;i--,j++)
	{
		temp_arr[j]=infix_arr[i];
	}
	temp_arr[j]='\0';

	for(i=0,j=0,k=0;i<number_of_elements+2;i++)
	{
		switch(temp_arr[i])
		{
			case ')':
				stack[j]=temp_arr[i];
				j++;
				break;
			case'(':
				for(;stack[j-1]!=')';j--)
				{
					prefix_arr[k]=stack[j-1];
					k++;
				}
				stack[j-1]='\0';
				j--;
				break;
			case '+':
			case '-':
			//flag=0;
			l1:	if(stack[j-1]=='*' || stack[j-1]=='/' || stack[j-1]=='^')
				{
					prefix_arr[k]=stack[j-1];
					k++;
					j--;
				     //	flag=1;
					goto l1;
				}
			       /*	else if(flag==1)
				{
					stack[j]='+';
					j++;
				}
				else
				{ */
					stack[j]=temp_arr[i];
					j++;
				//}
				break;
			/*case '-':
			      flag=0;
			l2:	if(stack[j-1]=='*' || stack[j-1]=='/' || stack[j-1]=='^')
				{
					prefix_arr[k]=stack[j-1];
					k++;
					j--;
					flag=1;
					goto l2;
				}
				else if(flag==1)
				{
					stack[j]='-';
					j++;
				}
				else
				{
					stack[j]='-';
					j++;
				}
				break;*/
			case '*':
			case '/':
			//flag=0;
			l3:	if(stack[j-1]=='^')
				{
					prefix_arr[k]=stack[j-1];
					k++;
					j--;
				     //	flag=1;
					goto l3;
				}
			       /*	else if(flag==1)
				{
					stack[j]='*';
					j++;
				}
				else
				{ */
					stack[j]=temp_arr[i];
					j++;
				//}
				break;
/*			case '/':
			flag=0;
			l4:	if(stack[j-1]=='^')
				{
					prefix_arr[k]=stack[j-1];
					k++;
					j--;
					flag=1;
					goto l4;
				}
				else if(flag==1)
				{
					stack[j]='/';
					j++;
				}
				else
				{
					stack[j]='/';
					j++;
				}
				break;*/
			case '^':
				stack[j]='^';
				j++;
				break;
			default :
				prefix_arr[k]=temp_arr[i];
				k++;
				break;

		}
	}
	cout<<endl;
	cout<<"Prefix : ";
	for(i=number_of_elements-number_of_brackets-1;i>=0;i--)
	{
		cout<<prefix_arr[i];
	}
	return 0;
}
char polish_notation :: infix_to_postfix( char infix_arr[])
{
	int i,j,k;
	char stack[30],postfix_arr[30];
	cout<<endl;

	for(i=0,j=0,k=0;i<number_of_elements+2;i++)
	{
		switch(infix_arr[i])
		{
			case '(':
				 stack[j]='(';
				 j++;
				 break;
			case ')':
				for(j;stack[j-1]!='(';j--)
				{
					postfix_arr[k]=stack[j-1];
					k++;
				}
				stack[j-1]='\0';
				j--;
				break;

			case '+':
			l1:	if(stack[j-1]=='-' || stack[j-1]=='+')
				{
					postfix_arr[k]=stack[j-1];
					k++;
					stack[j-1]='+';
				}
				else if(stack[j-1]=='*' || stack[j-1]=='/' || stack[j-1]=='^')
				{
					postfix_arr[k]=stack[j-1];
					k++;
					j--;
					goto l1;
				}
				else
				{
					stack[j]='+';
					j++;
				}
				break;
			case '-':
			 l2:	if(stack[j-1]=='-' || stack[j-1]=='+')
				{
					postfix_arr[k]=stack[j-1];
					k++;
					stack[j-1]='-';
				}
				else if(stack[j-1]=='*' || stack[j-1]=='/' || stack[j-1]=='^')
				{
					postfix_arr[k]=stack[j-1];
					k++;
					j--;
					goto l2;
				}
				else
				{
					stack[j]='-';
					j++;
				}
				break;
			case '*':
			l3:	if(stack[j-1]=='*' || stack[j-1]=='/')
				{
					postfix_arr[k]=stack[j-1];
					k++;
					stack[j-1]='*';
				}
				else if(stack[j-1]=='^')
				{
					postfix_arr[k]=stack[j-1];
					k++;
					j--;
					goto l3;
				}
				else
				{
					stack[j]='*';
					j++;
				}
				break;
			case '/':
			 l4:	if(stack[j-1]=='*' || stack[j-1]=='/')
				{
					postfix_arr[k]=stack[j-1];
					k++;
					stack[j-1]='/';
				}
				else if(stack[j-1]=='^')
				{
					postfix_arr[k]=stack[j-1];
					k++;
					j--;
					goto l4;
				}
				else
				{
					stack[j]='/';
					j++;
				}
				break;
			case '^':
				if(stack[j-1]=='^')
				{
					postfix_arr[k]=stack[j-1];
					k++;
					stack[j-1]='^';
				}
				else
				{
					stack[j]='^';
					j++;
				}
				break;
			  default:
				postfix_arr[k]=infix_arr[i];
				k++;
		}
	}
	cout<<endl;
	cout<<"Postfix : ";
	for(i=0;i<number_of_elements-number_of_brackets;i++)
	{
		cout<<postfix_arr[i];
	}
	return 0;
}
void main()
{
	polish_notation p1;
	clrscr();

	p1.input_in_infix();

	getch();
}