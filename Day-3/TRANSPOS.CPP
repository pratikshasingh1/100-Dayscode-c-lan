#include<stdio.h>
#include<conio.h>
   void main()
   {
     clrscr();
     int a[5][5];
     int i,j,m,n;
     printf("Enter the order of the matrix \n");
     scanf("%d %d",&m,&n);
     printf("Enter the cofficient of the matrix \n");
     for(i=0;i<m;i++)
	{
	  for(j=0;j<n;j++)
	   {
	    scanf("%d",&a[i][j]);
	    }
	 }
     printf("the given matrix is: \n");
      for(i=0;i<m;i++)
	{
	  for(j=0;j<n;j++)
	   {
	    printf("%d\t",a[i][j]);
	    }
	    printf("\n");
	 }
      printf("the transpose of  matrix is: \n");
      for(j=0;j<n;j++)
	{
	  for(i=0;i<m;i++)
	   {
	    printf("%d\t",a[i][j]);
	    }
	    printf("\n");
	 }


     getch();
   }