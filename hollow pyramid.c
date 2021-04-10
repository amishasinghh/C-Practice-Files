#include <stdio.h>

main()
{
 int a,r,s,S;
 printf("Enter no. of rows=");
 scanf("%d",&a);

 for(r=1;r<=a;r++)
   {
    for(s=1;s<=a-r;s++)
    printf(" ");

     printf("*");

     for(S=1;S<=r*2-3;)
     {
      if(r!=a)
      {printf(" ");
       s++;}

      else
      {printf(" *");
      s+=2;}
      }
      if(r!=a)
      printf("*\n");
     }
}
