/*Tic tac toe*/

#include<iostream.h>
#include<conio.h>
#include<DOS.h>
#include<stdlib.h>

class tictactoe
{
   int a[3][3],move[9],c,count_move;
   char m[10],n[10];

  public:
    void pos_1(int);
    void matdisp(int a[3][3],int);
    int inppos(void);
    void cond(void);
    void menu(int);
    void push_X_O(int, int, char,int);
    void replay(void);
    tictactoe(void);
    int comp_turn(void);
};
tictactoe :: tictactoe()
{
	int k=1;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++,k++)
		   a[i][j]=k;
	}
	c=1;
	count_move=0;

	for(i=0;i<10;i++)
	{
		m[i]='\0';
		n[i]='\0';
		move[i]=0;
	}
}
void main()
{
   tictactoe obj;
   int sw;
do{
l1:
   obj=tictactoe();
   sw=0;
   clrscr();
   cout<<"\t\t\t\tTIC-TAC-TOE";
   cout<<"\n\n\t1)Single Player\n\t2)Double Player\n\t3)Exit";
   cout<<"\n\n\tEnter your choice: ";
   cin>>sw;
   switch(sw)
   {
	case 1:
	       obj.menu(0);
	       break;
	case 2:
	       obj.menu(1);
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

int tictactoe :: comp_turn()
{
     int w[8],i,flag=-1,k,r_c;

      for(i=0;i<3;i++)
	w[i]=a[i][0]+a[i][1]+a[i][2];

      for(i=0;i<3;i++)
	w[i+3]=a[0][i]+a[1][i]+a[2][i];

       w[6]=a[0][0]+a[1][1]+a[2][2];
       w[7]=a[0][2]+a[1][1]+a[2][0];


       for(int j=0;j<6;j++)
       {
	  if(w[j]==88*2)
	  {
	     flag=1;
	     break;
	  }
       }

       if(flag!=1)
       {
	 for(i=0;i<6;i++)
	 {
	    if(w[i]==79*2)
	    {
	      flag=0;
	      break;
	    }
	 }
       }

       if(flag==0)
       r_c=i;

       else if(flag==1)
       r_c=j;

       if(r_c<3)
       {
	 for(k=0;k<3;k++)
	 {
	    if(a[r_c][k]!=79 && a[r_c][k]!=88)
	    break;
	 }
	 if(r_c==0)
	   return(k+1);
	 else if(r_c==1)
	   return(k+4);
	 else if(r_c==2)
	   return(k+7);
       }
       else if(r_c>=3 && r_c<7)
       {
	 r_c-=3;
	 for(k=0;k<3;k++)
	 {
	    if(a[k][r_c]!=79 && a[k][r_c]!=88)
	    break;
	 }
	 if(k==0)
	   return(r_c+1);
	 else if(k==1)
	   return(r_c+4);
	 else if(k==2)
	   return(r_c+7);
       }
       else if(r_c==7)
       {
	   if(a[0][0]!=79 && a[0][0]!=88)
	     return(1);
	   else if(a[1][1]!=79 && a[1][1]!=88)
	     return(5);
	   else if(a[2][2]!=79 && a[2][2]!=88)
	     return(9);
       }
       else if(r_c==8)
       {
	   if(a[0][2]!=79 && a[0][2]!=88)
	     return(3);
	   if(a[1][1]!=79 && a[1][1]!=88)
	     return(5);
	   if(a[2][0]!=79 && a[2][0]!=88)
	     return(7);

       }

       return -1;
}

void tictactoe :: push_X_O(int i,int j, char ox,int x)
{
       if(a[i][j]=='O' || a[i][j]=='X')
       {
	     if(x==0)
	     {
		 cout<<"\n\t\tThis set is occupied.\n\t\tstrike any key to re_input....";
		 getch();
		 pos_1(inppos());
	     }
	     pos_1(-1);
       }
       else
       {
	  a[i][j]=ox;
	  c++;
       }
}

void tictactoe :: menu(int x)
{
    int i,j,pos,flag=-1;

   clrscr();

    c=1;
    count_move=0;

do{
   clrscr();
   cout<<"\t\t\t\tTIC-TAC-TOE";
   cout<<"\n\nPlayer 1: ";
   cin>>m;
   if(x==1)
   {
     cout<<"\nPlayer 2: ";
     cin>>n;
   }
do{
   clrscr();
   cout<<"\t\t\t\tTIC-TAC-TOE";
   cout<<"\n\n"<<m<<"(X)";
   if(x==1)
   cout<<"\n"<<n<<"(O)";
   cout<<"\n\n\n";
   matdisp(a,0);
   cout<<"\n";

   if(c%2==1)
     cout<<m<<"'s turn";
   else if(x==1)
     cout<<n<<"'s turn";

   if(c<10)
   {
     pos=inppos();
     if(x==0)
     pos=comp_turn();
     if(pos==0)
     {
	c=10;
	flag=0;
	break;
     }

    pos_1(pos);
    clrscr();
    cout<<"\n\n\n";
    if(c!=10)
     matdisp(a,1);
    else
     matdisp(a,0);
    }
   }while(c!=10);

}while(c!=10);

if(flag!=0)
{
  l1:
    i=0;
    cout<<"\n\n\t\tDo you want replay of this game??";
    cout<<"\n\n\t\t1)Yes\n\t\t2)No";
    cout<<"\n\t\tEnter your choice: ";
    cin>>i;
    if(i==1)
      replay();
    else if(i!=1 && i!=2)
    {
       cout<<"\n\t\tEnter valid choice(1 or 2)!!!";
       getch();
       goto l1;
    }
}
 cout<<"\n\n\tBye....Bye....";
 getch();

}

void tictactoe :: pos_1(int pos)
{
	char ox=0;
	int k=0;
	if(c%2==1)
	     ox='X';
	else
	     ox='O';
	 if(pos==-1)
	 {
l1:	    pos=random(10);
	    if(pos==0)
	      goto l1;
	    k=1;
	 }
	count_move=c-1;
	move[count_move]=pos;

	switch(pos)
	{
	  case 1:
		 push_X_O(0,0,ox,k);
		 break;

	  case 2:
		 push_X_O(0,1,ox,k);
		 break;

	  case 3:
	 push_X_O(0,2,ox,k);
		 break;
	  case 4:
		 push_X_O(1,0,ox,k);
		 break;

	  case 5:
		 push_X_O(1,1,ox,k);
		 break;

	  case 6:
		 push_X_O(1,2,ox,k);
		 break;

	 case 7:
		 push_X_O(2,0,ox,k);
		 break;

	 case 8:
		 push_X_O(2,1,ox,k);
		 break;

	 case 9:
		 push_X_O(2,2,ox,k);
		 break;

	 default:
			cout<<"Write an appropriate position";
			getch();
			break;
	}
}
void tictactoe :: matdisp(int a[][3],int flag)
{
   int i,j;
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
   if(c>=5 && c<11 && flag==0)
   cond();
}

int tictactoe :: inppos()
{
    int b;
    cout<<"\nEnter your position(0 to exit): ";
    ci    return(b);
}

void tictactoe :: cond()
{
	int w[7],i,j,flag=-1;

      for(i=0;i<3;i++)
      {
	 w[i]=a[i][0]+a[i][1]+a[i][2];
      }

      for(i=0;i<3;i++)
      {
	 w[i+3]=a[0][i]+a[1][i]+a[2][i];
      }

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
		flag=1;
	  }
       }


    if(flag==0)
    {
    cout<<"Congrats!! "<<m<<" Won\n";
    c=10;
    }
    else if(flag==1)
    {
    cout<<"Congrats!! "<<n<<" Won\n";
    c=10;
    }
    else if(c==10)
    {
    cout<<"It's draw\n";
    }
}

void tictactoe :: replay()
{
    clrscr();
    cout<<"\n\n\tReplay: ";
    int arr[3][3],i,j,temp;
    char ox=0;

    for(i=0;i<=count_move;i++)
    {
      clrscr();
      j=0;
      if((i+1)%2==1)
	ox='X';
      else
	ox='O';
      temp=move[i];
      while(temp>3)
      {
	 temp=temp-3;
	 j++;
      }
       arr[j][temp-1]=ox;
       matdisp(arr,1);
       delay(500);
    }
    cout<<"\n\n\t\t";
    cond();
    getch();
}