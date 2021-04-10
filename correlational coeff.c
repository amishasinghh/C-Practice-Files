#include <stdio.h>
#include <math.h>
main()
{
 float  arr[3][2]={
                34.22,102.43,
                39.87,100.93,
                41.85,97.43,
                };

//summation xy
float xy=0,x=0,y=0,x2=0,y2=0;
int i;
for(i=0;i<3;i++)
    {xy=xy+arr[i][0]*arr[i][1];
     x=x+arr[i][0];
     y=y+ arr[i][1];
     x2=x2+arr[i][0]*arr[i][0];
     y2=y2+arr[i][1]*arr[i][1];
     }
     printf("%f %f %f %f %f ",xy,x,y,x2,y2);

float r,n,d,s;
n=xy-x*y;
s=sqrt((3*x2-x*x)*(3*y2-y*y));
r=n/s;
printf("%f %f %f ",n,s,r);
}
