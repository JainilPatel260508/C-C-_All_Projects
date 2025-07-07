//Conversion of Fahrenheit to celsius using inheritance

#include<conio.h>
#include<iostream.h>

class celsius;
class fahrenheit;

class fahrenheit
{
   float f;

   public:

   fahrenheit()
   {
      f=0;
   }
   void inp_f()
   {
      cout<<"\n\t Enter Temp. in Fahrenheit: ";
      cin>>f;
   }

   float ret_f()
   {
     return f;
   }

   void disp_f()
   {
      cout<<"\n\t Temperature(in F)"<<f;
      getch();
   }

   fahrenheit(celsius );

/*     fahrenheit(celsius c)
     {
       f=c.ret_c()*1.8+32;
     }  */

};

class celsius
{
   float c;

   public:

   celsius()
   {
      c=0;
   }

   void inp_c()
   {
      cout<<"\n\t Enter Temp. in celsius: ";
      cin>>c;
   }

   float ret_c()
   {
     return c;
   }

   void disp_c()
   {
      cout<<"\n\t Temperature(in C)"<<c;
      getch();
   }

   celsius(fahrenheit f)
   {
     c=(f.ret_f()-32)/1.8;
   }

};

fahrenheit :: fahrenheit(celsius c)
{
   f=c.ret_c()*1.8+32;
}

void main()
{
  int n;
  celsius c;
  fahrenheit f;

  do
  {
    clrscr();

    cout<<"\n\t 1. Celsius To Fahrenheit";
    cout<<"\n\t 2. Fahrenheit To Celsius";
    cout<<"\n\t 3. Exit";

    cout<<"\n\n\t Enter Your Choice: ";
    cin>>n;

    switch(n)
    {
       case 1:
	      c.inp_c();
	      f=c;
	      c.disp_c();
	      f.disp_f();
	      break;

       case 2:
	      f.inp_f();
	      c=f;
	      c.disp_c();
	      f.disp_f();
	      break;

       case 3:
	      break;

       default:
	       cout<<"\n\t Enter appropriate choice";
	       getch();
	       break;
    }
  }while(n!=3);

  getch();
}