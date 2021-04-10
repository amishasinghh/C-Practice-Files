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

  system("cls");

  int a;
  printf("Enter the element to check: ");
  scanf("%d",&a);

  int n=0,m;

  for(m=0;m<=24;m++)
    {
     if (a==arr[m])
     n++;
    }

  printf("%d",n);
}
