#include <stdio.h>
#include <math.h>
float area (float *p);
main()
{
 float arr[4][3]={
                137.4, 80.9, 0.78,
                155.2, 92.62, 0.89,
                149.3, 97.93, 1.35,
                160, 100.25, 9};

//input to area function
int i;
float ar[4];
for(i=0;i<4;i++)
ar[i]= area(arr+i);


//calculate max array element
float max;
int n;
for(i=1,max=ar[0],n=0;i<4;i++)
    {
     if(max<ar[i])
     {max=ar[i];
      n=i;}
    }
    printf(" %d %f ",n,max);

}


float area (float *p)
{
     double s;
     float a;
     float C= *(p+2);
     s= sin(C);
     float A= *(p+0);
     float B= *(p+1);
     a=(A*B*s)/2;
     return a;
}
