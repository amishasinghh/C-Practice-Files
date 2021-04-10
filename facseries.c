#include <stdio.h>

main()

{
 int n;
 float i,fac,d,sum;

 for(sum=0,i=1;i<=7;i++)
      {
         for(fac=1,n=1;n<=i;n++)
            fac*=n;
            d=i/fac;
            sum+=d;
      }

    printf("%f",sum);
}
