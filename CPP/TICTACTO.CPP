/*Tic tac toe*/

#include<iostream.h>
#include<conio.h>

class tictactoe
{
   int a[3][3],move[9],c,count_move;
   char m[10],n[10];

  public:
    void pos_1(int);
    void matdisp(int a[3][3],int);
    int inppos(void);
    void cond(void);
    void dual_player(void);
    int is_occupied(int,int);
    void replay(void);
};

void main()
{
   tictactoe obj;
   int sw;
do{
l1:
   sw=0;
   clrscr();
   cout<<"\t\t\t\tTIC-TAC-TOE";
   cout<<"\n\n\t1)Single Player\n\t2)Double Player\n\t3)Exit";
   cout<<"\n\n\tEnter your choice: ";
   cin>>sw;
   switch(sw)
   {
	case 1:
	     //obj.single_player();
	       break;
	case 2:
	       obj.dual_player();
	       break;
	case 3:
	       cout<<"\n\n\tBye....Bye....";
	       getch();
	       break;
	default:
		cout<<"\n\n\tEnter correct choice(1 or 2)";
		getch();
		goto l1;
   }
}while(sw!=3);
}
int tictactoe :: is_occupied(int i,int j)
{
       if(a[i][j]=='O' || a[i][j]=='X')
       {
	  cout<<"\n\t\tThis set is occupied.\n\t\tstrike any key to re_input....";
	  getch();
	  return 0;
       }
    return 1;
}

void tictactoe :: dual_player()
{
   int k=1,i,j,pos=0;
	clrscr();
    c=1;
    count_move=0;
do{
   clrscr();
   cout<<"\t\t\t\tTIC-TAC-TOE";
   cout<<"\n\nPlayer 1: ";
   cin>>m;
   cout<<"\nPlayer 2: ";
   cin>>n;
    k=1;
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
	  a[i][j]=k;
	  k++;
     }
   }
do{
   clrscr();
   cout<<"\t\t\t\tTIC-TAC-TOE";
   cout<<"\n\n"<<m<<"(X)";
   cout<<"\n"<<n<<"(O)";
   cout<<"\n\n\n";
   matdisp(a,0);
   cout<<"\n";
   if(c%2==1)
   cout<<m<<"'s turn";
   else
   cout<<n<<"'s turn";
   if(c<10)
   {
     pos=inppos();
     if(pos==0)
     {
	c=10;
	break;
     }

    pos_1(pos);
    clrscr();
    cout<<"\n\n\n";
    matdisp(a,1);
   }
   }while(c!=10);

}while(c!=10);
l1:
  i=0;
  cout<<"\n\n\t\tDo you want replay of this game??";
  cout<<"\n\n\t\t1)Yes\n\t\t2)No";
  cout<<"\n\t\tEnter your choice: ";
  cin>>i;
/*  if(i==1)
   replay();
  else*/ if(i!=1 && i!=2)
  {
     cout<<"\n\t\tEnter valid choice(1 or 2)!!!";
     getch();
     goto l1;
  }
 cout<<"\n\n\tBye....Bye....";
 getch();

}

void tictactoe :: pos_1(int pos)
{
	char ox=0;
	if(c%2==1)
	     ox='X';
	else
	     ox='O';
	count_move=c-1;
	move[count_move]=pos;
	switch(pos)
	{
	  case 1:
		 if(is_occupied(0,0)==0)
		 pos_1(inppos());
		 else
		 {  a[0][0]=ox;
		    c++; }
		 break;

	  case 2:
		 if(is_occupied(0,1)==0)
		 pos_1(inppos());
		 else
		 {  a[0][1]=ox;
		    c++;  }
		 break;

	  case 3:
		 if(is_occupied(0,2)==0)
		 pos_1(inppos());
		 else
		 {  a[0][2]=ox;
		    c++;  }
		 break;
	  case 4:
		 if(is_occupied(1,0)==0)
		 pos_1(inppos());
		 else
		 {  a[1][0]=ox;
		    c++;  }
		 break;

	  case 5:
		 if(is_occupied(1,1)==0)
		 pos_1(inppos());
		 else
		 {  a[1][1]=ox;
		    c++;  }
		 break;

	  case 6:
		 if(is_occupied(1,2)==0)
		 pos_1(inppos());
		 else
		 {  a[1][2]=ox;
		    c++;  }
		 break;

	 case 7:
		 if(is_occupied(2,0)==0)
		 pos_1(inppos());
		 else
		 {  a[2][0]=ox;
		    c++;  }
		 break;

	 case 8:
		 if(is_occupied(2,1)==0)
		 pos_1(inppos());
		 else
		 {  a[2][1]=ox;
		    c++;  }
		 break;
	 case 9:
		 if(is_occupied(2,2)==0)
		 pos_1(inppos());
		 else
		 {  a[2][2]=ox;
		    c++;  }
		 break;

	 default:
			cout<<"Write an appropriate position";
			getch();
			break;
	}
}
void tictactoe :: matdisp(int a[][3],int flag)
{
   int i,j,x;
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
      if(a[i][j]==88 || a[i][j]==79)
      cout<<"\t"<<(char)a[i][j]<<"\t";
      else if(flag==0)
      cout<<"\t"<<a[i][j]<<"\t";
      else if(flag==1)
      cout<<"\t \t";
      if(j<2)
	cout<<"|";
     }
     cout<<"\n";
     if(i<2)
     cout<<"\t--------+---------------+--------";
     cout<<"\n";
   }
   if(c>=5 && c<11)
   cond();
}

int tictactoe :: inppos()
{
    int b;
    cout<<"\nEnter your position(0 to exit): ";
    cin>>b;
    return(b);
}

void tictactoe :: cond()
{
	int w[7],i,flag=1;
       w[0]=a[0][0]+a[0][1]+a[0][2];
       w[1]=a[1][0]+a[1][1]+a[1][2];
       w[2]=a[2][0]+a[2][1]+a[2][2];
       w[3]=a[0][0]+a[1][0]+a[2][0];
       w[4]=a[0][1]+a[1][1]+a[2][1];
       w[5]=a[0][2]+a[1][2]+a[2][2];
       w[6]=a[0][0]+a[1][1]+a[2][2];
       w[7]=a[0][2]+a[1][1]+a[2][0];

       for(i=0;i<=7;i++)
       {
	if(w[i]==(88*3))
	{
		flag=0;
	}
	else if(w[i]==(79*3))
	{
		flag=2;
	}
      }


    if(flag==0)
    {
    cout<<"Congrats!! "<<m<<" Won";
    c=10;
    }
    else if(flag==2)
    {
    cout<<"Congrats!! "<<n<<" Won";
    c=10;
    }
    else if(c==10)
    {
    cout<<"It's draw";
    }
}

/*void tictactoe :: replay()
{
 clrscr();
    int arr[3][3],i;
    char ox=0;
    for(i=1;i<=count_move;i++)
    {
      if(i%2==1)
	ox='X';
      else
	ox='O';

    }
}