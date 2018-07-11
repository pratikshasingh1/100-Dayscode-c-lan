#include<stdio.h>
#include<conio.h>
 void factors(int);
 void main()
  {
  clrscr();
  int n;
  printf("Enter  no:");
  scanf("%d",&n);
  factors(n);
  getch();
  }

  void factors(int x)
  {
  int f,i,r;
  printf("factors of %d=",x);
  for(i=1;i<=x;i++)
   {
   r=x%i;
   if(r==0)
    printf("\t %d",i);
   }
  }