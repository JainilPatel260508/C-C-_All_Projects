#include<iostream.h>
#include<conio.h>

class DB;
class DM
{
  float dm;

  public:
	float res;
	void initial()
	{
	 dm=4365;

	 cout<<"\n\n\tYour input in meters: "<<dm;
	}

	friend DM add_dm(DB x, DM y);
	friend DB add_db(DB x, DM y);
};

class DB
{
  float db;

  public:
	float res;
	void initial()
	{
	 db=5422;

	 cout<<"\tYour input in feets: "<<db;
	}

	friend DM add_dm(DB x, DM y);
	friend DB add_db(DB x, DM y);
};

DB add_db(DB y,DM x)
{
  float feet,meters;
  DB res_db;

  res_db.res=x.dm*3.281+y.db;

  return(res_db);
}


DM add_dm(DB y,DM x)
{
  float feet,meters;
  DM res_dm;

  res_dm.res=y.db/3.281+x.dm;

  return(res_dm);
}

void main()
{
   DB db, db_1;
   DM dm, dm_1;

   clrscr();

   db.initial();
   dm.initial();

   db_1=add_db(db,dm);
   dm_1=add_dm(db,dm);

   cout<<"\n\n\tIn feet:"<<db_1.res;
   cout<<"\n\tIn Meters:"<<dm_1.res;

   getch();
}