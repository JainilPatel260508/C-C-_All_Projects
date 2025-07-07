/*
	    1-D	Array
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[5]={56,85,45,65,94};
	int i=0,s=0,os=0,es=0,e=0,o=0;
	clrscr();
	printf("\n arr[0]:%d",arr[0]);
	printf("\n arr[1]:%d",arr[1]);
	printf("\n arr[2]:%d",arr[2]);
	printf("\n arr[3]:%d",arr[3]);
	printf("\n arr[4]:%d",arr[4]);
	printf("\n--------------------------");
	for(i=0;i<5;i++)
	{
	  printf("\n arr[%d]:%d",i,arr[i]);
	  s=s+arr[i];
	  if(arr[i]%2==0)
	  {
	    es=es+arr[i];
	    e++;
	    }
	  else
	  {
	    os=os+arr[i];
	    o++;
	    }
	}
	printf("\n Sum:%d avg:%d ES : %d  OS : %d O:%d E:%d",s,s/5,es,os,o,e);
	getch();
}