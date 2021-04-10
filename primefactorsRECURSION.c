#include <stdio.h>
#include <stdlib.h>
int prime (int n);
main()

{int n;
 printf("Enter number=");
 scanf("%d",&n);
 prime(n);
 }

int prime (int n)
{

        int i,r;
        for(i=2;i<=n;)
        {
            r=n%i;

            if(r==0)
                {
                    printf("%d ",i);

                    if(n/i==1)
                    exit(0);

                    else
                    prime(n/i);
                }

            else if(r!=0)
                {
                    i++;
                    continue;
                }
            }
}
