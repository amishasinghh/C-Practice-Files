#include <stdio.h>
#include <math.h>

main()

{
 int ;
 float i, x,t,p,s=0;
 printf("enter no.");
 scanf("%f",&x);

 t=(x-1)/x; //if using integers to divide answer is truncated as in case of pow, use float to get exact values

 for(i=1;i<=7;i++)
   {
    p=pow(t,i);
    if(i!=1)
     p/=2;


     s+=p;
     }
    printf("%f",s);
 }
