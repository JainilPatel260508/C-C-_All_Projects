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

void add(struct stu *);
char grade(float);
void menu();
void info_disp(struct stu *);
void search(struct stu *);
void update(struct stu *);
void delite(struct stu *);
void studsort(struct stu *);


int n=0;

void main()
{

clrscr();

  menu();

 getch();
}

void add(struct stu *a)
{
 int i;

clrscr();

l1:  clrscr();

  printf("\nEnter student Roll.no: ");
  scanf("%d",&a->rollno);
  if(a->rollno<=0)
  goto l1;
  printf("\nEnter students name :");
  scanf("%s",a->name);
  printf("\nEnter Marks of Maths :");
  scanf("%d",&a->marks.m1);
  printf("\nEnter Marks of Physics :");
  scanf("%d",&a->marks.m2);
  printf("\nEnter Marks of Chemistry :");
  scanf("%d",&a->marks.m3);

   a->marks.total = a->marks.m1 + a->marks.m2 + a->marks.m3;
   a->marks.per=a->marks.total/3;

   n++;


}
void menu()
{

   int c;
   struct stu *ptr_s,s[25];;

   do
   {
    l1:
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
	      ptr_s=&s[n];
	      add(ptr_s);
	      break;

      case 2:
	      ptr_s=&s[0];
	      info_disp(ptr_s);
	      break;

      case 3:
	      ptr_s=&s[0];
	      search(ptr_s);
	      break;

      case 4:
	      ptr_s=&s[0];
	      update(ptr_s);
	      break;

      case 5:
	      ptr_s=&s[0];
	      delite(ptr_s);
	      break;

      case 6:
	      ptr_s=&s[0];
	      studsort(ptr_s);
	      break;

      case 7:
	      break;

      default:
		printf("\n Enter a no. between 1 and 7 ");
		getch();
		goto l1;

    }
    getch();
    }while(c!=7);

}

void info_disp(struct stu *id)
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


    for(i=0;i<n;i++,id++)
    {
    if(id->rollno>0)
     {
       char g=grade(id->marks.per);

      printf("%11d|%6s|%7d|%9d|%11d|%7.0f|%11.2f%|",id->rollno,id->name,id->marks.m1,id->marks.m2,id->marks.m3,id->marks.total,id->marks.per);
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

void search(struct stu *se)
{
     int i,flag=0,flag2=0;
     char b[15],*ptr_b=&b[0];

     clrscr();


     printf("\n\t Enter a name of student to find: ");
     scanf("%s",&*ptr_b);


     for(i=0;i<=n;i++,se++)
     {
	   if(stricmp(b,se->name)==0)
	  {
	     if(flag2==0)
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
	     flag2=1;
	     }

		   printf("%11d|%6s|%7d|%9d|%11d|%7.0f|%11.2f%|%c\n",se->rollno,se->name,se->marks.m1,se->marks.m2,se->marks.m3,se->marks.total,se->marks.per,se->marks.grade);
		   printf("-----------|------|-------|---------|-----------|-------|------------|----------");

	      flag++;

	  }

      }

	if(flag==0)
	{
	 printf("\n\t %s does not exist in this list",b);
	}


	getch();
}

void update(struct stu *u)
{
      int i,flag=0;
     char b[15],*ptr_b=&b[0];

     clrscr();


     printf("\n\t Enter a name of student to replace: ");
     scanf("%s",&*ptr_b);

     for(i=0;i<=n;i++,u++)
     {
      if(stricmp(b,u->name)==0)
      {
	     if(u->rollno>0)
	     {
	       printf("\nEnter student Roll.no: ");
	       scanf("%d",&u->rollno);
	       printf("\nEnter students name :");
	       scanf("%s",u->name);
	       printf("\nEnter Marks of Maths :");
	       scanf("%d",&u->marks.m1);
	       printf("\nEnter Marks of Physics :");
	       scanf("%d",&u->marks.m2);
	       printf("\nEnter Marks of Chemistry :");
	       scanf("%d",&u->marks.m3);

		u->marks.total = u->marks.m1 + u->marks.m2 + u->marks.m3;

		u->marks.per = u->marks.total/3;

	       flag=1;
	       break;
	     }



      }
     }


	if(flag==0)
	    printf("\n\t %s does not exist in this list",b);
	else
	    printf("Successfully updated....");

}

void delite(struct stu *d)
{
   int i,flag,j;
   char b[10],*ptr_b=&b[0];
   struct stu *ptr_d;

  l1:
  clrscr();
     printf("\n\t Enter a name of student to Delete: ");
     scanf("%s",&*ptr_b);

     ptr_d=&d[0];

     for(i=0;i<=n;i++,ptr_d++)
     {
      if(stricmp(b,ptr_d->name)==0)
      {
	  flag=1;
	  break;
      }
     }
     if(flag==1)
     {
     d->rollno=0;
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

void studsort(struct stu *s)
{
    int i,j;
    struct stu *p1,*p2;
    union ustu utmp;
    union ustu *u;

    u=&utmp;

    for(i=0;i<n;i++)
    {
	p1=&s[0];
	p2=&s[0];
	p2++;
       for(j=0;j<n-i-1;j++,p1++,p2++)
       {
	    if(p1->marks.per<p2->marks.per)
	    {
		   u->rollno=p1->rollno;
		   p1->rollno=p2->rollno;
		   p2->rollno=u->rollno;

		   u->per=p1->marks.per;
		   p1->marks.per=p2->marks.per;
		   p2->marks.per=u->per;

		   u->m1=p1->marks.m1;
		   p1->marks.m1=p2->marks.m1;
		   p2->marks.m1=u->m1;

		   u->m2=p1->marks.m2;
		   p1->marks.m2=p2->marks.m2;
		   p2->marks.m2=u->m2;

		   u->m3=p1->marks.m3;
		   p1->marks.m3=p2->marks.m3;
		   p2->marks.m3=u->m3;

		   u->total=p1->marks.total;
		   p1->marks.total=p2->marks.total;
		   p2->marks.total=u->total;

		   strcpy(u->name,p1->name);
		   strcpy(p1->name,p2->name);
		   strcpy(p2->name,u->name);
	    }
       }
    }
    printf("\n\n\t\t Data sorted successfully.");
    getch();
}
