/*
	km to inch,foot,cm,m
	Hints:
		1 km = 1000 m
		1 km = 100000 cm
		1 m = 3.28084 feet
		1 feet = 12 inches

*/

#include<iostream.h>
#include<conio.h>

class units
{
	private:
		float km;

	public:
	      //	float
		void input()
		{
			cout<<"Enter a length in km :";
			cin>>km;

//			return(km);
		}

		float km_to_cm(void)
		{
			float temp;
			temp=100000*km;

			return(temp);
		}

		float km_to_m(void)
		{
			float temp;
			temp=1000*km;

			return(temp);
		}

		float m_to_feet(float m)
		{
			float temp;
			temp=3.28084*m;

			return(temp);
		}

		float feet_to_inch(float feet)
		{
			float temp;
			temp=12*feet;

			return(temp);
		}
};
void main()
{
	units length;
	float inch=0,feet=0,cm=0,m=0;
	clrscr();
	length.input();

	cm=length.km_to_cm();
	cout<<"\n\n\tcm:"<<cm;

	m=length.km_to_m();
	cout<<"\n\n\tm:"<<m;

	feet=length.m_to_feet(m);
	cout<<"\n\n\tfeet:"<<feet;

	inch=length.feet_to_inch(feet);
	cout<<"\n\n\tinch:"<<inch;

	getch();
}