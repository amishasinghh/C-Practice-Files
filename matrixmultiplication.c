#include <stdio.h>

main()
{
 int a[2][3]={
              2,1,3,
              4,5,6};
 int b[3][3]={
              1,2,3,
              4,5,6,
              7,8,9};
int m[3][3],i,j,k,e;

for(i=0;i<2;i++)
    for(j=0;j<3;j++)
        {e=0;
         for(k=0;k<3;k++)
            e=e+ a[i][k]*b[k][j];
            m[i][j]=e;
        }

  for(i=0;i<2;i++)
    {for(j=0;j<3;j++)
    printf("%d ",m[i][j]);
    printf("\n");}
}



