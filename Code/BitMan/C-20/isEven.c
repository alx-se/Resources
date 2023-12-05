#include <stdio.h>
int isOdd(int num)
{
	printf("%d, %d\n", num ^ 1, num - 1);
	if ((num ^ 1) == (num - 1))
		return 1;
	return 0;
//	return (num ^ 1 == num - 1);
	// 5 -> 101 ^ 1 -> num - 1 -> is odd
	// 4 -> 100 ^ 1 -> num + 1 -> is Even
//	return num & 1;
	// 4 & 1 -> 100 & 1-> 0
	// 5 & 1 -> 101 & 1-> 1
}

void printBinaryNotReversed(int num)
{
	for(int i = 31; i >= 0; i--)
	{
		// 5 & 4 -> 4
		// 101 & 100 -> 4
		// 6 -> 00110
		//       &
		//      00100
		//      000 -> 4
		// 100000000000000000
		// 01000000000000000
		// 001000000000000000
		// 1 << 2 = 4 -> 100
		int isOneLastDigit = num & (1 << i);
		if (isOneLastDigit != 0)
			isOneLastDigit = 1;
		printf("%d", isOneLastDigit);
		// num = num >> 1;
	}
	printf("\n");
}

void swap(int *a, int *b)
{
	//  a ^ b ^ a -> a ^ a ^ b -> 0 ^ b -> b
	// a ^ b ^ b -> b ^ b ^ a -> 0 ^ a -> a
	// c = a ^ b
	// what can we do to find a c ^ b, c ^ a
	// a = a ^ b
	// b = a ^ b = a
	// a = a ^ b
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int main(void)
{
	int odd = 5;
	int even = 12;
	printf("%d -> isOdd(%d)\n", odd, isOdd(odd));
	printf("%d -> isOdd(%d)\n", even, isOdd(even));
	printBinaryNotReversed(5);
	printBinaryNotReversed(12);
	swap(&odd, &even);
	printf("odd - %d, even = %d\n", odd, even);
	return (0);
}
