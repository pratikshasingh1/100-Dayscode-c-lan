#include <stdio.h>
#include<conio.h>
 
void main()
{
  int a[100], n, i, j, temp;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (i= 0; i < n; i++)
    scanf("%d", &a[i]);
 
  for (i=0 ; i < n - 1; i++)
  {
    j=i;
    while(j>0 && a[j-1]>a[j])
    {
	temp= a[j];
	a[j]   = a[j-1];
	a[j-1] = temp;
	j--;
      }
  }

  printf("Sorted list in ascending order:\n");

  for (i= 0; i < n-1; i++)
     printf("%d\n", a[i]);

  getch();
}