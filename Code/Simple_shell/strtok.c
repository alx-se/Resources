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

void print_tokens(char *str, char *delim)
{
	// str -> Do hard things, delim -> " "
	// strtok will return NULL if it at the
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
	char s[] = "Do hard things";
	print_tokens (s, " ");
	char a[] = "Do,hard,things";
	print_tokens(a, " ,");
	char b[] = "ABC";
	print_tokens(b, "ABC");
	char d[] = "            ";
	print_tokens(d, " ,");
	char e[] = "abc       hard       ";
	print_tokens(e, " ");
	return (0);
}
