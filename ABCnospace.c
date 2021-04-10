#include <stdio.h>

main()
{
 int a;
 char e,d1,d2,i;
 scanf("%d",&a);

 i=64+a;
 for(e='A';e<=i;e++)
  {
   for(d1='A';d1<=e;d1++)
   printf("%c ",d1);

   for(d2=e-1;d2>='A';d2--)
   printf("%c ",d2);

   printf("\n");
   }

}

