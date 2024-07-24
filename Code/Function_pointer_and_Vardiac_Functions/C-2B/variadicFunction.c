#include<stdio.h>
#include<stdarg.h>

int sum(int count, ...)
{
  /**                                                                                                                                                                                                     
   * va_start: to initialize it (prepare it for usage by va_arg and va_end)                                                                                                                               
   * va_arg: gets the next element                                                                                                                                                                        
   * va_end: ends the traversal of elements                                                                                                                                                               
   */
  va_list args;
  va_start(args, count);

  int total = 0;
  for (int i = 0; i < count; i++)
    total += va_arg(args, int);

  return total;
}

int max(int count, ...)
{
  va_list args;
  va_start(args, count);

  int max_num = 0;
  for (int i = 0; i < count; i++)
    {
      int curr_num = va_arg(args, int);;
      if (curr_num > max_num)
        max_num = curr_num;
    }

  return max_num;
}


int main(void)
{
  printf("The sum of number %d + %d + %d = %d\n", 1, 2, 3, sum(3, 1, 2, 3));
  printf("Find the max from %d %d %d %d %d = %d \n", 3, 4,2,15, 5, max(5, 3, 4,2,15, 5));
  return (0);
}
