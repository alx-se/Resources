#include <stdio.h>

int check(int a)
{
  printf("Values are %d\n", a);
  return (a);
}

int main(void)
{
  // 0 -> is false                                                                                                                                                                                                                                                      
  // 1 -> is True                                                                                                                                                                                                                                                       

  // true & false                                                                                                                                                                                                                                                       
  printf("1 & 0: ");
  check(1) && check(0);
  // print both 1, and 0                                                                                                                                                                                                                                                

  printf("0 & 1: ");
  check(0) && check(1); // print only 0                                                                                                                                                                                                                                 


  printf("False status:\n");
  printf("0 || 1: ");
  check(0) || check(1);  // print both 0 and 1                                                                                                                                                                                                                          
  printf("1 || 0: ");
  check(1) || check(0); // print only 1                                                                                                                                                                                                                                 
}