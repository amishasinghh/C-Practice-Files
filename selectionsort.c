#include <stdio.h>

main()
{
 int arr[]={23,56,3,4,5};

 int j,i,temp;
 for(j=0;j<5;j++)
    {
     for(i=j;i<5;i++)
        {
         if(arr[i]>arr[i+1])
            {
             temp=arr[j];
             arr[j]=arr[i];
             arr[i]=temp;
            }
         }
    }

    for(i=0;i<5;i++)
    printf("%d ",arr[i]);
}
