#include <stdio.h>
#include "calc.h"


int main(int argc, char **argv)
{
  printf("We have %d number of arguments\n", argc);


  printf("The name of the executable file is (%s)\n", argv[0]);
  printf("The arguments are: \n");
  int i;
  for(i = 0; i < argc; i++)
    printf("\tThe %d argument is %s\n", i, argv[i]);

  printf("%d + %d = %d\n", 2, 3, add(2, 3));
  printf("%d - %d = %d\n", 12, 4, subtract(12, 4));

  return (0);
}
  
