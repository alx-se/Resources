#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

void free_tokens_array(char **tokens)
{
        int i = 0;
        while (tokens[i] != NULL)
	{
		printf("token %s\n", tokens[i]);
		free(tokens[i]);
		i++;
	}
	free(tokens);
}

char **tokenize(char *command, char *delim)
{
    char **argv;
    char *cpyCommand = strdup(command);
    char *cpyCommand2 = strdup(command);
    int num_tokens = 0;

    // Count how many tokens there are
    char *token = strtok(cpyCommand, delim);
    while (token != NULL)
    {
        num_tokens++;
        token = strtok(NULL, delim);
    }

    argv = malloc((num_tokens + 1) * sizeof(char *));
    token = strtok(cpyCommand2, delim);
    int i = 0;
    while (token != NULL)
    {
        // Allocate memory for argv[i]
        argv[i] = malloc((strlen(token) + 1) * sizeof(char));
        strcpy(argv[i], token);

        token = strtok(NULL, delim);
        i++;
    }

    argv[i] = NULL;
    free(cpyCommand);
    free(cpyCommand2);

    return argv;
}


int main(void)
{
	char **x = tokenize("ls bin h", " ");
	free_tokens_array(x);
	return (0);
}
