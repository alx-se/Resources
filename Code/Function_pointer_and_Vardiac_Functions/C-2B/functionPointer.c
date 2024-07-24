#include <stdio.h>

typedef int (*op)(int, int);

int add(int a, int b)
{
  return (a + b);
}

int sub(int a, int b)
{
  return (a - b);
}

int mul(int a, int b)
{
  return (a * b);
}


int div(int a, int b)
{
  if (b == 0)
    return (-1);
  return (a / b);
}

int calculate(int a, int b, op operation_fun)
{
  return operation_fun(a, b);
}




int increasing(int a, int b)
{
  if (a > b)
    return (1);
  return (0);
}

int decreasing(int a, int b)
{
  if (a < b)
    return (1);
  return (0);
}


void sort(int *nums, int size, op compare)
{
  for(int i = 0; i < size; i++)
    {
      for(int j = 0; j < size; j++)
        {
          if (j < size - 1 && compare(nums[j], nums[j + 1]))
            {
              int temp = nums[j];
              nums[j] = nums[j + 1];
              nums[j + 1] = temp;
            }
        }
    }
}



void print_array(int *nums, int size)
{
  for (int i = 0; i < size; i++)
    printf("%d ", nums[i]);
  printf("\n");
}

int main(void)
{

  op math_op[] = { add, div, sub, mul };
  char *signs = "+/-*";

  for (int i = 0; i < 4; i++)
    printf("%d %c %d = %d\n", 100, signs[i],
           10, math_op[i](100, 10));


  int nums[] = {3, 1, 5,2, 7,2,2,9,4};
  print_array(nums, 9);
  sort(nums, 9, increasing);
  print_array(nums, 9);

  int nums2[] = {3, 1, 5,2, 7,2,2,9,4};
  print_array(nums2, 9);
  sort(nums2, 9, decreasing);
  print_array(nums2, 9);

  return (0);
}
