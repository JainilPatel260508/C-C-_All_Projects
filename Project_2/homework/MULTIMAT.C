/*
	multiply of 2 matrix
*/

void main()
{
	int r1,r2,c1,c2,i,j,k;
	int m1[20][20],m2[20][20],m3[20][20];

clrscr();

   l1:  clrscr();
	printf("\n\n\t\tEnter no. of Rows of 1st matrix:");
	scanf("%d",&r1);
	printf("\n\n\t\tEnter no. of Coulums of 1st matrix:");
	scanf("%d",&c1);

	printf("\n\n\t\tEnter 1st Matrix:");

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		scanf("%d",&m1[i][j]);
		}
	}

	printf("\n\n\t\tEnter no. of Rows of 2st matrix:");
	scanf("%d",&r2);
	printf("\n\n\t\tEnter no. of Coulums of 2st matrix:");
	scanf("%d",&c2);

	printf("\n\n\t\tEnter 2nd Matrix:");

	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
		scanf("%d",&m2[i][j]);
		}
	}
	if(r1!=c2 || r2!=c1)
	{
	printf("\n\tInvalid No. of Rows & Coulums of 2 matrix.\n\tEnter to re input.");
	getch();
	goto l1;
	}
	clrscr();

	printf("\n\n\t\t Here is the 1st Matrix:\n");

	for(i=0;i<r1;i++)
	{
	printf("\t\t\t\t\t");
		for(j=0;j<c1;j++)
		{
		printf("%3d",m1[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\t\t Here is the 2st Matrix:\n");

	for(i=0;i<r2;i++)
	{
	printf("\t\t\t\t\t");
		for(j=0;j<c2;j++)
		{
		printf("%3d",m2[i][j]);
		}
		printf("\n");
	}

	 for(i=0;i<r1||i<r2;i++)
	{
		for(j=0;j<c2||j<c1;j++)
		{
		m3[i][j]=0;
		}
	}

	//for rows
	for(i=0;i<r1;i++)
	{       //for cols
		for(j=0;j<c2;j++)
		{       //multi of two alternative roes and cols and then adding
			for(k=0;k<c1;k++)
			{
			m3[i][j]+=m1[i][k]*m2[k][j];
			}
		}
	}

	printf("\n\n\t\t Here is the Multiplication 2 Matrix:\n");
	for(i=0;i<r1;i++)
	{
	printf("\t\t\t\t\t");
		for(j=0;j<c2;j++)
		{
		printf("%4d",m3[i][j]);
		}
		printf("\n");
	}



getch();
}