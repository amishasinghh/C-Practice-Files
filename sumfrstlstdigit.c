#include <stdio.h>

main()
{
 int n;
 printf("Enter 4 digit no.=");
 scanf("%d",&n);

 int r1,r2,r3,r4;
  r1=n%10;
  r2=n%100/10;
  r3=n%1000/100;
  r4=n%10000/1000;

  printf("sum of first and last digit of the number is %d",r1+r4);
  }
