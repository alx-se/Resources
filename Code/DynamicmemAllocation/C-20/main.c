#include <stdio.h>
#include <stdlib.h>


void print_array(int *arr, size_t size)
{
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int sum_array_int(int* array, size_t size)
{
  int sum = 0;

  for (int i = 0; i < size; i++)
    sum += array[i];

  return (sum);
}

int main(int argc, char **argv)
{
  /**
   * creating an array with 3 values which is dynamically allocated
   */
  // int nums[3];
  int *nums;

  //     malloc(number_of_elements * size_of_one_element)
  nums = malloc(3 * sizeof(int));

  if (!nums)
    //  free(nums)
    return (-1);

  for (int i = 0; i < 3; i++)
    nums[i] = i + 4;
  print_array(nums, 3);

  free(nums);
  
  /**
   * a function that takes x number of integers ./program 1 2 3
   * store the elements in an array
   * get the sum of the integers
   */
  // argc -> have the count argv = {"1", "2", "3"}
  int *numbers;

  if (argc - 1 == 0)
    {
      printf("enter at least one number\n");
      return (-1);
    }
  
  numbers = malloc((argc - 1) * sizeof(int));

  if (!numbers)
    return (-1);
  
  for (int i = 1; i < argc; i++)
    numbers[i - 1] = atoi(argv[i]);

  printf("The numbers that you provided are: ");
  print_array(numbers, argc - 1);
  printf("The sum of the numbers that you provided is %d\n",
	 sum_array_int(numbers, argc - 1));

  free(numbers);

  return (0);
}
