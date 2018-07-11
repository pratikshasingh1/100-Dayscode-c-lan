#include<stdio.h>
#include<conio.h>
void fahren (float);
  void main()
    {
    clrscr();
     float n;
     printf("enter tempture in celsius");
     scanf("%f",&n);
     fahren(n);
  getch();
    }

    void fahren(float x)
     {
     float f;
     f=x*(9/5)+32;
     printf("value of %f in celsius covert into fahrenhit=%f",x,f);
     }
