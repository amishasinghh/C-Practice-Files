#include <stdio.h>

main()
{
char *names[]={
              "anmol",
              "amisha",
              "anjani",
              "reeta",
              "amit",
              "gayatree"
              };

              printf("%s %s ",names[2], names[4]);

              int temp=names[2];
              names[2]=names[4];
              names[4]=temp;

              printf("%s %s ",names[2], names[4]);
              }
