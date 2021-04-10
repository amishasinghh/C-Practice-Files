#include <stdio.h>

main()

{
 int r,s,a;
 scanf("%d",&a);

 for(r=1;r<=a;r++)
  {
   if(r==a)
   for(s=1;s<=a;s++)
   printf("%d ",s);

   else
   for(s=1;s<=r;s++)
    {
     if(s==1||s==r)
     printf("%d ",s); //no. only printed for first and last digit in a row
      else
      printf("  ");
      }

      printf("\n");
    }
}
