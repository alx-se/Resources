#include <stdio.h>

int main(int argc, char **argv)
{
	// { "Amanuel", "ALX" }
	// [xxxx, yyyy,]
	int i = 0;
	while (argv[i] != NULL)
	{
		printf("The %d argument is: %s\n", i, argv[i]);
		i++;
	}
	return (0);
}
