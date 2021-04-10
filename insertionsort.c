#include <stdio.h>
main()
{
 int arr[]={5,2,8,3,1};
 int i,j,temp;

 for(i=0;i<5;i++)
   {
    for(j=i;j>0;j--)
     {
      if(arr[j]<arr[j-1])
          {
           temp=arr[j];
           arr[j]=arr[j-1];
           arr[j-1]=temp;
          }
      }
    }

    for(i=0;i<5;i++)
    printf("%d ",arr[i]);
}



