/*
    1234 = one thousand 
           two hundred 
           thirty four
*/
#include<stdio.h>
#include<conio.h>

void word(int);
void main()
{    
    int i,j,k=0,l,num[9]={'\0','\0','\0','\0','\0','\0','\0','\0','\0'},z,n;
    long int a;
    clrscr();
 
    printf("Enter a maximum number of 9 digit :\n");
    scanf("%ld",&a);
    printf("\n");
    printf("In words:-\n\n");
    

    if(a==0)
    printf("zero\n\n");
        else
        {
            for(j=0;j<9;j++)
            {
                z=a%10;
                num[j]=z;
                a=a/10;
                if(a<10)
                {
                    j++;
                    num[j]=a;
                    break;
                }
            }
     
            for(i=0;i<9;i++)
                {
                  if(j==8)
                     {
                      k=num[j]*10;
                      if(num[j]!=1)
                      word(k);
                      j=j-1;
                     }
                  else if(j==7)
                      {
                       k=num[j];
                       l=(num[j+1]*10)+num[j];
                       if(l>=10 && l<20)
                       word(l);
                       else
                       word(k);
                       if(num[j+1]!=0 || num[j]!=0)
                       printf("crore\n");
                       j=j-1;        
                      }
                  else if(j==6)
                     {
                      k=num[j]*10;
                      if(num[j]!=1)
                      word(k);
                      j=j-1;
                     }
    else if(j==5)
    {
     k=num[j];
     l=(num[j+1]*10)+num[j];
     if(l>=10 && l<20)
     word(l);
     else
     word(k);
     if(num[j+1]!=0 || num[j]!=0)
     printf("lakh\n");
     j=j-1;
    }
     else if(j==4)
    {
     k=num[j]*10;
     if(num[j]!=1)
     word(k);
     j=j-1;
    }
     else if(j==3)
    {
      k=num[j];
     l=(num[j+1]*10)+num[j];
     if(l>=10 && l<20)
     word(l);
     else
     word(k);
     if(num[j+1]!=0 || num[j]!=0)
     printf("thousand\n");
     j=j-1;
    }
    else if(j==2)
    {
     k=num[j];
     word(k);
     if(num[j]!=0)
     printf("hundred\n");
     j=j-1;
    }
     else if(j==1)
    {
     k=num[j]*10;
     if(num[j]!=1)
     word(k);
     j=j-1;
    }
    else if(j==0)
    {
     k=num[j];
     l=(num[j+1]*10)+num[j];
    if(l>=10 && l<20)
    word(l);
    else
    word(k);
    j=j-1;
    printf("\n\n");
    }
    }
    }   
    
    getch();
}
void word(int x)
{
    switch(x)
    {
    case 0: printf("");
    break;
    case 1: printf("one ");
    break;
    case 2: printf("two ");
    break;
    case 3: printf("three ");
    break;
    case 4: printf("four ");
    break;
    case 5: printf("five ");
    break;
    case 6: printf("six ");
    break;
    case 7: printf("seven ");
    break;
    case 8: printf("eight ");
    break;
    case 9: printf("nine ");
    break;
    case 10: printf("ten ");
    break;
    case 11: printf("eleven ");
    break;
    case 12: printf("twelve ");
    break;
    case 13: printf("thirteen ");
    break;
    case 14: printf("fourteen ");
    break;
    case 15: printf("fifteen ");
    break;
    case 16: printf("sixteen ");
    break;
    case 17: printf("seventeen ");
    break;
    case 18: printf("eighteen ");
    break;
    case 19: printf("ninteen ");
    break;
    case 20: printf("twenty ");
    break;
    case 30: printf("thirty ");
    break;
    case 40: printf("fourty ");
    break;
    case 50: printf("fifty ");
    break;
    case 60: printf("sixty ");
    break;
    case 70: printf("seventy ");
    break;
    case 80: printf("eighty ");
    break;
    case 90: printf("ninety ");
    break;
    }
}