#include <stdio.h>

main()
{
 int arr[5][5]={
                1,6,4,7,3,
                2,8,9,10,30,
                23,56,0,5,14,
                11,35,32,21,2,
                2,4,5,15,8,31,
                };

 int i,max,temp=arr[0][0],*p;
 p=arr;

 for(i=1;i<25;i++)
    {if(temp<*(p+i))
     temp=*(p+i);
     }
   printf("%d",temp);
 }





