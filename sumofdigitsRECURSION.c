#include <stdio.h>
#include <stdlib.h>
int sumd (int n);

main()
{int n;
 printf("Enter 5 digit integer=");
 scanf("%d",&n);
 int s=sumd(n);
 printf("%d",s);
 }

 int sumd (int n)
 {int d;
if(n!=0)
        {

         d=(n%10)+sumd(n/10);
         return(d);
         }
}
