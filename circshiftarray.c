#include <stdio.h>
shift(int *p,int shiftby, int size);
main()
{
 int p[4][5]={1,2,3,4,5,
          6,7,8,9,10,
          11,12,13,14,15,
          16,17,18,19,20,},i,j;



 for(i=0;i<4;i++)
 shift(p+i,3,5);

 for(i=0;i<4;i++)
    {for(j=0;j<5;j++)
        printf("%d ",p[i][j]);
        printf("\n");}
 }

 shift(int *p,int shiftby,int size)
 {
  int d=size-shiftby;
  int t[size],i;
  for(i=0;i<d;i++)
    t[i+shiftby]=*(p+i);

    int n=0;
    for(i=d;i<size;i++)
       {t[n]=*(p+i);
       n++;}

  for(i=0;i<size;i++)
  *(p+i)=t[i];

}
