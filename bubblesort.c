 #include <stdio.h>
#include <stdlib.h>

main()

{int a,i,j,temp;

 printf("Array size: ");
 scanf("%d",&a);

 int arr[a];

  for(i=0;i<a;i++)
    {
     printf("Element %d = ",i);
     scanf("%d",&arr[i]);
     }

     system("cls");

     printf("The unsorted array is ");
     for(i=0;i<a;i++)
     printf("%d ",arr[i]);

     printf("\n");

 for(j=a;j>0;j--)
    {
     for(i=0;i<j;i++)
        {
         if(arr[i]>arr[i+1])
            {
             temp=arr[i+1];
             arr[i+1]=arr[i];
             arr[i]=temp;
            }
        }
     }

     printf("The sorted array is ");
     for(i=0;i<a;i++)
     printf("%d ",arr[i]);
}
