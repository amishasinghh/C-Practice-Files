#include <stdio.h>

main()
{
 int i,a,b;
 printf("Enter base=");
 scanf("%d",&a);
 printf("Enter power=");
 scanf("%d",&b);

 int n=a;
 for(i=1;i<b;i++)
 n*=a;
 printf("%d",n);
 }
