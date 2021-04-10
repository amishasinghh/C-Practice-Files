#include <stdio.h>
#include <stdlib.h>

main()

{
  int arr[25],i;
  for(i=0;i<25;i++)
  {
   printf("Enter element %d = ",i+1);
   scanf("%d",&arr[i]);
  }

  system ("cls");
  int m, even=0,odd=0,n=0,p=0;

  for(m=0;m<=24;m++)
    {
     if(arr[m]%2==0)
     even++;
     else
     odd++;
     }
     printf("Odd integers= %d\nEven integers= %d\n",odd,even);

  for(m=0;m<=24;m++)
    {
     if(arr[m]>
     0)
     p++;
     else
     n++;
     }
     printf("Positive integers= %d\nNegative integers= %d",p,n);
}

