#include <stdio.h>
void year (int y);

main()
{int d;
 printf("Enter year=");
 scanf("%d",&d);
 year(d);
 }

 void year (int y)
 {
  int r=y%4;

    if(r==0)
    printf("Leap year");

    else
    printf("Not leap year");
}
