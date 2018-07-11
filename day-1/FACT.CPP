#include<stdio.h>
#include<conio.h>
void fact (int);
  void main()
    {
     int n;
     printf("enter no for factorial");
     scanf("%d",&n);
     fact(n);
  getch();
    }

void fact (int x)
    {
    int f=1,i;
    for(i=1;i<=x;i++)
      f=f*i;
    printf("%d",f);
     }