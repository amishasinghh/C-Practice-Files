#include <stdio.h>
modify(int*a,int D);
main()
{
 int d,i;
 printf("Enter array size: ");
 scanf("%d",&d);

 int arr[d];
 printf("Enter elements of arr[%d]: ",d);
 for(i=0;i<d;i++)
 scanf("%d",&arr[i]);

 modify(arr,d);

 for(i=0;i<d;i++)
 printf("%d ",arr[i]);
 }

 modify(int*a,int D)
 {int i;
  for(i=0;i<D;i++)
  *(a+i)*=3;
 }





