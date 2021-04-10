#include <stdio.h>

main()
{ int i;
  int a[]={1,2,3,4,5};

 int b[5];

 for(i=0;i<5;i++)
 b[i]=a[4-i];

 for(i=0;i<5;i++)
 printf("%d ",b[i]);
 }
