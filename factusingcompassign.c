#include <stdio.h>

main()

{
 int num,i;
  printf("Enter a number=");
  scanf("%d",&num);

  int fac=num;
 for(i=1;i< num;i++)
   {
    fac*=i;
   }
   printf("%d",fac);
}
