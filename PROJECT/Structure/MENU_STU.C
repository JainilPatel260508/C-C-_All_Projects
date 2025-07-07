/*
	student info

	Menu driven
	    New stu
	    disp all stu
	    search stu
	    update stu
	    delete stu
	    sorted stu by %
	    exit
 */
#include<stdio.h>
#include<conio.h>

struct stu
{
  int rollno;
  char name[25];

  struct
  {
  int m1,m2,m3;
  float total;
  char grade;
  float per;
  }marks;
};

union ustu
{
  int rollno;
  char name[25];
  int m1,m2,m3;
  float total;
  char grade;
  float per;
};

void add();
char grade(float);
void menu();
void info_disp();
void search();
void update();
void delite();
void studsort();
int n=0,x=0;

struct stu s[25];

void studsort()
{
    int i,j;
    struct stu tmp;
    union ustu utmp;
/*    printf("\n\n struct tmp size : %d",sizeof(tmp));
    printf("\n\n union tmp size : %d",sizeof(utmp));*/
    for(i=0;i<n;i++)
    {
       for(j=0;j<n-i-1;j++)
       {
	    if(s[j].marks.per<s[j+1].marks.per)
	    {
		   utmp.rollno=s[j].rollno;
		   s[j].rollno=s[j+1].rollno;
		   s[j+1].rollno=utmp.rollno;

		   utmp.per=s[j].marks.per;
		   s[j].marks.per=s[j+1].marks.per;
		   s[j+1].marks.per=utmp.per;

		   utmp.m1=s[j].marks.m1;
		   s[j].marks.m1=s[j+1].marks.m1;
		   s[j+1].marks.m1=utmp.m1;

		   utmp.m2=s[j].marks.m2;
		   s[j].marks.m2=s[j+1].marks.m2;
		   s[j+1].marks.m2=utmp.m2;

		   utmp.m3=s[j].marks.m3;
		   s[j].marks.m3=s[j+1].marks.m3;
		   s[j+1].marks.m3=utmp.m3;

		   utmp.total=s[j].marks.total;
		   s[j].marks.total=s[j+1].marks.total;
		   s[j+1].marks.total=utmp.total;

		   strcpy(utmp.name,s[j].name);
		   strcpy(s[j].name,s[j+1].name);
		   strcpy(s[j+1].name,utmp.name);
	    }
       }
    }
    printf("\n\n\t\t Data sorted successfully.");
    getch();
}

void main()
{

clrscr();

  menu();

 getch();
}

void add()
{
 int i;

clrscr();
l1:  clrscr();

  printf("\nEnter student Roll.no: ");
  scanf("%d",&s[n].rollno);
  if(s[n].rollno<=0)
  goto l1;
  printf("\nEnter students name :");
  scanf("%s",s[n].name);
  printf("\nEnter Marks of Maths :");
  scanf("%d",&s[n].marks.m1);
  printf("\nEnter Marks of Physics :");
  scanf("%d",&s[n].marks.m2);
  printf("\nEnter Marks of Chemistry :");
  scanf("%d",&s[n].marks.m3);

  s[n].marks.total=s[n].marks.m1+s[n].marks.m2+s[n].marks.m3;
  s[n].marks.per=s[n].marks.total/3;
  n++;


}
void menu()
{

   int a,b,c,k;
   do
   {
	clrscr();

   printf("1) New student info \n");
   printf("2) Display all student \n");
   printf("3) Search student info \n");
   printf("4) Update student info\n");
   printf("5) Delete student info\n");
   printf("6) Sorted student by percentage\n");
   printf("7) Exit");

   printf("\nEnter no. to operate the respective option: ");
   scanf("%d",&c);

    switch(c)
    {
      case 1:
	      add();
	      break;

      case 2:
	      info_disp();
	      break;

      case 3:
	      search();
	      break;

      case 4:
	       update();
	      break;

      case 5:
	       delite();
	      break;

      case 6:
	      studsort();
	      break;

      case 7:
	      break;

      default:
		printf("\n Enter a no. between 1 and 7 ");
      break;

    }
    getch();
    }while(c!=7);

}

void info_disp()
{
    int i;
clrscr();

  printf("   Roll.No |");
  printf(" Name |");
  printf(" Maths |");
  printf(" Physics |");
  printf(" Chemistry |");
  printf(" Total |");
  printf(" Percentage |");
  printf(" Grade ");
  printf("\n-----------|------|-------|---------|-----------|-------|------------|----------");
    for(i=0;i<n;i++)
    {
    if(s[i].rollno>0)
     {
       char g=grade(s[i].marks.per);

      printf("%11d|%6s|%7d|%9d|%11d|%7.0f|%11.2f%|",s[i].rollno,s[i].name,s[i].marks.m1,s[i].marks.m2,s[i].marks.m3,s[i].marks.total,s[i].marks.per);
	   printf("%c\n",g);
      printf("-----------|------|-------|---------|-----------|-------|------------|----------");
     }
    }

    getch();
}
char grade(float per)
{

   if(per>90 && per<=100)
	return 'A';
   else if(per<90 && per>75)
	return 'B';
   else if(per<75 && per>60)
	return 'C';
   else if(per<60 && per>50)
	return 'D';
   else if(per<50 && per>40)
	return 'E';
   else
	return 'F';

}

void search()
{
     int i,flag=0,a[5],j=0;
     char b[15];

     clrscr();

     printf("\n\t Enter a name of student to find: ");
     scanf("%s",b);

     for(i=0;i<=n;i++)
     {
      if(stricmp(b,s[i].name)==0)
      {
     a[j]=i;
     j++;
      flag=1;
      }
     }
     if(flag==1)
     {
	printf("   Roll.No |");
	printf(" Name |");
	printf(" Maths |");
	printf(" Physics |");
	printf(" Chemistry |");
	printf(" Total |");
	printf(" Percentage |");
	printf(" Grade ");
	printf("\n-----------|------|-------|---------|-----------|-------|------------|----------");
	for(i=0;i<j;i++)
    {

      printf("%11d|%6s|%7d|%9d|%11d|%7.0f|%11.2f%|%c\n",s[a[i]].rollno,s[a[i]].name,s[a[i]].marks.m1,s[a[i]].marks.m2,s[a[i]].marks.m3,s[a[i]].marks.total,s[a[i]].marks.per,s[a[i]].marks.grade);
      printf("-----------|------|-------|---------|-----------|-------|------------|----------");
    }

   }
     else
	printf("\n\t %s does not exist in this list",b);

	getch();
}

void update()
{
      int i,flag=0,a[5],j=0;
     char b[15];

     clrscr();

     printf("\n\t Enter a name of student to replace: ");
     scanf("%s",b);

     for(i=0;i<=n;i++)
     {
      if(stricmp(b,s[i].name)==0)
      {
     a[j]=i;
     j++;
      flag=1;
      }
     }

       if(flag==1)
       {
	 for(i=0;i<j;i++)
	 {
	 if(s[a[i]].rollno>0)
	 {
	    printf("\nEnter student Roll.no: ");
	    scanf("%d",&s[a[i]].rollno);
	    printf("\nEnter students name :");
	    scanf("%s",s[a[i]].name);
	    printf("\nEnter Marks of Maths :");
	    scanf("%d",&s[a[i]].marks.m1);
	    printf("\nEnter Marks of Physics :");
	    scanf("%d",&s[a[i]].marks.m2);
	    printf("\nEnter Marks of Chemistry :");
	    scanf("%d",&s[a[i]].marks.m3);

  s[a[i]].marks.total=s[a[i]].marks.m1+s[a[i]].marks.m2+s[a[i]].marks.m3;

  s[a[i]].marks.per=s[a[i]].marks.total/3;

}
	 }
       }
       else
       {
	    printf("\n\t %s does not exist in this list",b);
       }
}

void delite()
{
   int i,flag,j;
   char b[10];

  l1:
  clrscr();
     printf("\n\t Enter a name of student to Delete: ");
     scanf("%s",b);

     for(i=0;i<=n;i++)
     {
      if(stricmp(b,s[i].name)==0)
      {
     j=i;
      flag=1;
      }
     }
     if(flag==1)
     {
     s[j].rollno=0;
     printf("\n\tSuccessfully deleted!!");
     getch();
     }
     else
     {
     printf("\n\tName not found");
     getch();
     goto l1;
     }
}
