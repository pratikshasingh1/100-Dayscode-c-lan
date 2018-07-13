#include<stdio.h>
#include<conio.h>
int hcf(int,int);
int four_hcf(int,int,int,int);
int lcm(int,int);
void main()
{
 clrscr();
 int a,b,c,d,l,k,x,y;
 printf("Enter any four positive integers ");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 if(a<b)
  l = lcm(a,b);
 else
  l = lcm(b,a);
 if(c>d)
  k= lcm(c,d);
 else
  k= lcm(d,c);
 if(l<k)
  x=lcm(l,k);
 else
  x=lcm(k,l);
 printf("LCM of four integers is %d\n",x);
 hcf(a,b);
 hcf(c,d);
 y= four_hcf(a,b,c,d);
 printf("hcf of four integers is %d",y);
getch();
}

int lcm(int a,int b)
{
 int temp = a;
 while(1)
 {
  if(temp % b == 0 && temp % a == 0)
  break;
 temp++;
 }
 return temp;
}
int hcf(int a,int b)
{
   if(b==0)
	return a;
  return hcf(b,a%b);
}
int four_hcf(int a,int b,int c,int d)
{
  return hcf(hcf(a,b),hcf(c,d));
}