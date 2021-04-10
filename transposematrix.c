#include <stdio.h>

main()
{
 int arr[4][4]={
                1,2,3,4,
                5,6,7,8,
                9,10,11,12,
                13,14,15,16
                };

int trans[4][4];
int i,j;
for(i=0;i<4;i++)
 for(j=0;j<4;j++)
 trans[i][j]=arr[j][i];

for(i=0;i<4;i++)
 {for(j=0;j<4;j++)
 printf("%d ",trans[i][j]);
 printf("\n");}
 }



