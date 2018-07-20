#include<stdio.h>
#include<conio.h>
   void main()
    {
     clrscr();
     long d ,r,q;
     int oct[100],i=1,j;
     printf("Enter the decimal no :");
     scanf("%ld",&d);
     q=d;
     while(q!=0)
       {
	oct[i++]=q%8;
	q=q/8;
       }
     printf("Equivalent octal value of int  %d :",d);
     for(j=i-1 ;j>0 ; j--)
	printf("%d",oct[j]);
     getch();
     }