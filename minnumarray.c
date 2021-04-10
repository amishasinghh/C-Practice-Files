#include <stdio.h>

main()
{
 int arr[5]={7,9,11,5,6};

 int temp,i;

 temp=arr[0];

 for(i=1;i<5;i++)
 {
    if(temp>arr[i])
    temp=arr[i];

 }
 printf("%d",temp);
}
