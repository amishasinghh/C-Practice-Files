#include <stdio.h>

main()
{
float l,b,r;

printf("Enter length and breadth of rectangle in cms.=");
scanf("%f%f",&l,&b);

printf("Enter radius of circle in cms.=");
scanf("%f",&r);

//formulae

float p,ar,c,ac;

p=2*(l+b);
ar=l*b;

c=2*3.14*r;
ac=3.14*r*r;

printf("Perimeter of rectangle is %f\n Area of rectangle is %f\n Circumference of circle is %f\n Area of circle is %f",p,ar,c,ac);
}
