//only for positive int
#include<stdio.h>
#include<conio.h>
   void main()
    {
      clrscr();
     long int n,m,r,b=1,bin=0;
     printf("Enter a int");
     scanf("%li",&n);
     m=n;
     while(n>0)
       {
	r=n%2;
	bin=bin+r*b;
	n=n/2;
	b=b*10;
       }
       printf("%li int is convert into equivalent binary:%li",m,bin);
       getch();
     }

