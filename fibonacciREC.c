#include <stdio.h>
int print (int a, int b,int i);
void fibo (i);

main()
{
 int i;
 printf("Fibonacci series upto how many terms=");
 scanf("%d",&i);
 fibo(i);
 }

void fibo (i)
{printf("1 ");
 print (0,1,i);
}

int print (int a, int b,int i)
{
 i--;
 if(i>=0)

 {
  int d=b+a;
  printf("%d ",d);
  print(b,d,i);
 }

 else
 return (0);
}
