#include<stdio.h>
#include<conio.h>
#include<math.h>
   void main()
   {
     clrscr();
     float p,r,t,ci;
     printf("Enter Principle, Rate And Time :");
     scanf("%f%f%f",&p,&r,&t);
     ci=p*pow((1+r/100),t);
     printf("Bank Loans Compound Interest=%f",ci);
     getch();
   }