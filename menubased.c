#include <stdio.h>
#include<stdlib.h>

main()
{ int n,m,i,fac,r;
 while(1)
 {
 printf("\n1.Factorial\n2.Prime no.\n3.Odd/Even\n4.Exit\nChoose the desired option = ");
 scanf("%d",&n);

 printf("Enter integer=");
 scanf("%d",&m);

 switch(n)
 {
  case 1:
  fac=m;
  for(i=1;i<m;i++)
  fac=fac*i;
  printf("%d",fac);
  break;

  case 2:
  for(i=2;i<=m;i++)
  {r=m%i;
  if(r==0&&i==m)
  printf("Prime");
  else
  printf("Not prime");}
  break;

  case 3:
  r=m%2;
  if(r==0)
  printf("Even");
  else
  printf("Odd");
  break;

  case 4:
  exit(0);
  }
 }
}
