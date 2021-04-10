#include <stdio.h>
 main()

 {
 int i=1,r1,r2,r3,s;
 printf("Armstrong nos. between 0-500 are:");
 while(i<=500)
  {
   r1=(i%10);
   r2=(i%100)/10;
   r3=(i%1000)/100;

   s=pow(r1,3)+pow(r2,3)+pow(r3,3);

   if(i==s)
   printf("%d\n",i);

   i++;
   }
}
