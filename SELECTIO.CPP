#include <stdio.h>
#include<conio.h>

void main()
{
  int a[100], n, i, j, temp,pos;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (i= 0; i < n; i++)
    scanf("%d", &a[i]);
 
  for (i=0 ; i < n - 1; i++)
  {
    pos=i;
    for (j= i+1 ; j < n ; j++)
    {
      if (a[pos] > a[d])
	pos=j;
      }
      if(pos!=c)
	 {
	temp= a[j];
	a[i]   = a[pos];
	a[pos] = temp;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i= 0; i < n; i++)
     printf("%d\n", a[i]);

  getch();
}