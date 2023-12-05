#include <stdio.h>

/**
 * is going to accept an integer and print the hexadecimal format
 * doesn't return anything
 */
void decimalToHex(int num)
{
	char *hexVal = "0123456789abcdef";
	char ans[50];
	int base = 16;
	int i = 0;


	while (num != 0)
	{
		int remainder = num % base;
		ans[i] = hexVal[remainder];
		num = num / base;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
	{
		printf("%c", ans[j]);
	}
	printf("\n");
}



int main(void)
{
	decimalToHex(10);
	decimalToHex(35);
	decimalToHex(45);
	return (0);
}
