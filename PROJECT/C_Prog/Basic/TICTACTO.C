
/*Tic tac toe*/

#include<stdio.h>
#include<conio.h>

void pos_1(int);
void matdisp(int a[3][3]);
int inppos(void);
void cond(void);

int a[3][3],c=1;
char m[10],n[10];

void main()
{

   int k=1,i,j,b,pos=0;

	clrscr();
do{
   clrscr();
   printf("\nPlayer 1: ");
   gets(m);
   printf("\nPlayer 2: ");
   gets(n);
    k=1;
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
	  a[i][j]=k;
	  k=k++;
     }
   }
   do{
   clrscr();
   printf("\n%s(X)",m);
   printf("\n%s(O)",n);
   printf("\n\n\n");
   matdisp(a);
   printf("\n%s's turn",c%2==1?m:n);
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
    printf("\n\n\n");
    matdisp(a);
   }
   }while(c!=10);

   flushall();
   }while(c!=10);

 printf("\n\n\tBye....");
 getch();
}

void pos_1(int pos)

{
	char ox=0;
	if(c%2==1)
	     ox='X';
	else
	     ox='O';
	switch(pos)
	{
	  case 1:
			if(a[0][0]=='O' || a[0][0]=='X')
			{
			printf("\n\t\tThis set is occupied");
			inppos();
			}
			else
			{
				a[0][0]=ox;
				c++;
				}
				break;

	  case 2:
			if(a[0][1]=='O' || a[0][1]=='X')
			{
			printf("\n\t\tThis set is occupied");			printf("This set is occupied");
			inppos();
			}
			else
			{
			a[0][1]=ox;
			c++;
			}
			 break;

	  case 3:
				if(a[0][2]=='O' || a[0][2]=='X')
			{
			printf("\n\t\tThis set is occupied");
			inppos();
			}
			else
			{
			a[0][2]=ox;
			c++;
			}
			 break;
	  case 4:
			if(a[1][0]=='O' || a[1][0]=='X')
			{
			printf("\n\t\tThis set is occupied");
			inppos();
			}
			else
			{
			 a[1][0]=ox;
			 c++;
			 }
			 break;

	  case 5:
				if(a[1][1]=='O' || a[1][1]=='X')
			{

			printf("\n\t\tThis set is occupied");
			inppos();
			}
			else
			{
			 a[1][1]=ox;
			 c++;
			 }
			 break;

	  case 6:
			if(a[1][2]=='O' || a[1][2]=='X')
			{

			printf("\n\t\tThis set is occupied");
			inppos();
			}
			else
			{
			 a[1][2]=ox;
			 c++;
			}
			 break;

	 case 7:
			if(a[2][0]=='O' || a[2][0]=='X')
			{
				printf("\n\t\tThis set is occupied");
				inppos();
			}
			else
			{
				 a[2][0]=ox;
				 c++;
			}
			 break;

	 case 8:
				if(a[2][1]=='O' || a[2][1]=='X')
			{
			printf("\n\t\tThis set is occupied");
			inppos();
			}
			else
		       {
			 a[2][1]=ox;
			 c++;
			}
			break;
	 case 9:
				if(a[2][2]=='O' || a[2][2]=='X')
			{
			printf("\n\t\tThis set is occupied");
			inppos();
			}
			else
			{
			 a[2][2]=ox;
			 c++;
			 }
			 break;

	 default:
			printf("Write an appropriate position");
			getch();
			break;
	}
}
void matdisp(int a[3][3])
{
   int i,j,x;
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
      if(a[i][j]==88 || a[i][j]==79)
      printf("\t%c\t",a[i][j]);
      else
      printf("\t%d\t",a[i][j]);
      if(j<2)
	printf("|");
     }
     printf("\n");
     if(i<2)
     printf("\t---------------------------------");
     printf("\n");
   }
   cond();
}

int inppos()
{
    int b;
    printf("\nEnter your position(0 to exit): ");
    scanf("%d",&b);
    return(b);
}

void cond()
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
    printf("Congrats!! %s won",m);
    c=10;
    }
    else if(flag==2)
    {
    printf("Congrats!! %s won",n);
    c=10;
    }
    else if(c==10)
    {
    printf("It's draw");
    }
}
