#include <stdio.h>
#include <stdbool.h>
#include <stdarg.h>

// a function that accepts array, size of the array, and a function pointer
// to allow filter one element that meets the requirement of the function
int find(int *array, int size, bool (*comp)(int, int))
{
  if (!array)
    return 0;

  int ans = array[0];
  int i;

  
  for (i = 1; i < size; i++)
  {
    if ((*comp)(array[i], ans))
      ans = array[i];
  }

  return (ans);
}

bool getMax(int a, int b)
{
  return (a > b);
}

bool getMin(int a, int b)
{
  return (a < b);
}


float getAverage(int count, ...)
{
  va_list args;
  va_start(args, count);
  int total_sum = 0;

  for(int i = 0; i < count; i++)
    total_sum = total_sum + va_arg(args, int);

  va_end(args);
  return (total_sum / count);
}


int add(int a, int b)
{
  return (a + b);
}

/**
 * pritnf("%s - is name %d", "Name", "3")
 * printf("abc%c", 'a') -> expected out put is -> abc(c)
 */

void custom_print(char *format, ...)
{
  va_list args;
  va_start(args, format);

  while (*format != '\0')
    {
      if (*format == '%')
	{
	  format++;
	  switch (*format){
	     case 'c':
	       putchar('(');
	       putchar(va_arg(args, int));
	       putchar(')');
	  }
	    
	}
      else
	putchar(*format);
      format++;
    }

  va_end(args);
}


int main(void)
{
  // using the vardiac function (vardiac functions)
  printf("2, 3 -> %f\n", getAverage(2, 2, 3));
  printf("12345-> %f\n", getAverage(5, 1,2,3,4,5));

  // custom print-f (vardiac functions)
  custom_print("alksdfjalsdkfja\n");
  custom_print("tring the %c\n", 'A');
  
  // Function pointer (find one element based on your requirement)
  int array[6] = {2,3,1,4,5,6};
  printf("The maximum number is %d\n", find(array, 6, &getMax));
  printf("The minimum number is %d\n", find(array, 6, &getMin));


  // Function pointer (declaration, and usage)
  int (*calc)(int, int);
  calc = &add;
  printf("%d = %d\n", add(4, 5), (*calc)(4, 5));
  printf("What calc is holding = %p", calc);
  return (0);
}
