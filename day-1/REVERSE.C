#include<stdio.h>
#include<conio.h>
void main()
 {
   clrscr();
   char a[15];
   int i,n;
   printf("No of letter in the string");
   scanf("%d",&n);
   printf("enter the string");
   for(i=0;i<n;i++)
    {
     scanf("%c",&a[i]);
    }
   for(i=n;i>=0;i--)
    {
     printf("%c",a[i]);
    }
    getch();
    }
