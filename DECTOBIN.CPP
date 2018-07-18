#include<stdio.h>
#include<conio.h>
int convert (int);
  void main()
  {
  clrscr();
  int d,b;
  printf("Enter a Decimal number:");
  scanf("%d",&d);
  b=convert(d);
  printf("The binary eqivalent of  %d is %d:\n",d,b);
  getch();
  }

  int convert(int x)
   {
    if(x==0)
     return 0;
    else
     return(x%2+10 * convert(x/2));
     }