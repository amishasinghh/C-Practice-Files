#include <stdio.h>
int euclid (int a,int b);

main()
{int a,b,gcd;
 printf("Enter two integers=");
 scanf("%d%d",&a,&b);
 gcd=euclid(a,b);
 printf("%d",gcd);
 }

 int euclid (int a,int b)
 {int n,d;
  n=a;
  d=b;

    while(1)
    {int q,r;
    q=n/d;
    r=n-(q*d);
    if(r==0)
    return(d);
    else
    {
        n=d;
        d=r;
        continue;
    }
 }
}
