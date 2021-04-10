#include <stdio.h>
#include <stdlib.h>

main()
{
 int arr[][2]={
                1,3,
                2,6,
                3,9,
              };

 int (*p)[2];
 int i,j;
 for(i=0;i<=2;i++)
     {
      p=&arr[i];
      int * q = p;
      printf("\n");

        for(j=0;j<=1;j++)
            {
            printf("%d ",*(q+j));
            system ("cls");
            }
        }
}
