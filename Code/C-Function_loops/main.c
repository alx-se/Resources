#include <stdio.h>

/**
 *  1 2 3 4 5
 *  1 2 3 4 5
 *  1 2 3 4 5
 * row - 3, col - 5
 * row - 6, col - 10
 */
void print_table(int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int count_val = 1;

		for (count_val = 1; count_val <= col; count_val++)
		{
			printf("%d ", count_val);
		}
		printf("\n");
	}
}

/**
 * getSumBetweenNums - prints and returns the sum from start upto end inclusive
 * @start: the start of iteration
 * @end: the last number to be included
 * Return: the sum of numbers between start and end
 */
int getSumBetweenNums(int start, int end)
{
	int total_sum = 0;

	while (start <= end)
	{
		total_sum += start;
		start++;
	}

	printf("the sum of the numbers from %d to %d is %d\n", start, end,
	       total_sum);

	return (total_sum);
}

/**
 * main - an entry point for our program
 * Return: always return 0
 */
int main(void)
{
	print_table(3, 5);
	getSumBetweenNums(1, 100);
	getSumBetweenNums(1, 10);
	return (0);
}
