#include <stdio.h>

main()
{
 int a[4][4]={
              2,4,3,6,
              45,6,8,23,
              12,17,4,9,
              2,3,70,65,
              };
 int *ptr,i,j,temp,n=0;
 ptr = a ;
 int b[16];
 for ( i = 0 ; i <16  ; i++ )
  b[i]=*(ptr+i);

  for(j=16;j>0;j--)
    for(i=0;i<j;i++)
         if(b[i]>b[i+1])
            {
             temp=b[i];
             b[i]=b[i+1];
             b[i+1]=temp;
             }

             for(i=0;i<4;i++)
                for(j=0;j<4;j++)
                    {a[i][j]=b[n];
                     n++;}

for(i=0;i<4;i++)
 {for(j=0;j<4;j++)
  printf("%d ",a[i][j]);
  printf("\n");
  }
}







