/**
 * strtok(string, delimitor)
 * strtok("Do hard things", " ")
 * Do  string -> "hard things"
 * hard string -> "things"
 * things string -> ""
 * NULL
 */
#include <string.h>
#include <stdio.h>

void print_tokens(char *str1, char *delim)
{
	// str -> Do hard things, delim -> " "
	// strtok will return NULL if it at the
	char *str = strdup(str1);
	char *token = strtok((char *)str, delim);
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}

	printf("Finished\n");
}

int main(void)
{
	print_tokens ("Do hard things", " ");
	print_tokens("Do,hard,things", " ,");
	print_tokens("ABC", "ABC");
	print_tokens( "            ", " ,");
	print_tokens("abc       hard       ", " ");
	return (0);
}
