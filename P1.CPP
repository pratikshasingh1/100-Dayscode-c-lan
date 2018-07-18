#include<stdio.h>
#include<conio.h>
  void main()
   {
   clrscr();
   int i,n,j,a[10];

    for(j=1;j<=3;j++)
     {
      scanf("%d",&n);
       for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
       printf("\nInput %d:",j);
       printf("[");
       for(i=0;i<n;i++)
	  printf("%d\t",a[i]);
       printf("]");
	printf("\nOutput %d:",j);
	for(i=0;i<n;i++)
	  {
	    if(a[i]!=i)
	    {
	     printf("%d",i);
	     break;
	     }
	    }
	  }
	  getch();

      }