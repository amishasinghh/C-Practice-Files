#include <stdio.h>
#include "math.h"

float dec (float n);
int binaryW (int n,int u);
int binaryD (float D);

main()
{
 printf("Enter the number to conver to binary=");
 float n;
 scanf("%f",&n);

 int W=binaryW(n,1);
 float D=dec(n);
 printf("%d.",W);
 binaryD(D);
}



 int binaryW (int n,int u)
   {
    if(n!=0)
     {
      int r=n%2;
      int N=(r*u)+ binaryW(n/2,u*10);
      return (N);
     }
    else
    return 0;
    }

int binaryD (float D)
{
 if(D!=0)
  {
   D*=2;
   int s=D;
   printf("%d",s);
   float d1=dec(D);
   binaryD(d1);
   }
  else
  return 0;
}


float dec (float n)
    { int n1=n;
      float dec=n-n1;
      return dec;
    }
