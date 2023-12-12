#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
/**
 * {"/bin/ls", "/bin/pwd"}
 * ls
 * { char * input, char *path}
 * { "ls", "/bin/ls" }
 * what is the difference between stat and access function.
 */


/**
 * tokenize("/bin/ls -l usr", " ")
 * return -> {"/bin/ls", "-l", "usr", NULL}
 * strtok(str, delim)
 */

char **tokenize(char *command, char *delim)
{
	char **argv;
        char *cpyCommand = strdup(command);
	char *cpyCommand2 = strdup(command);
	int num_tokens = 0;

        // how many tokens there are
	// we need to allocat for argv on how many tokens there are
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
		argv[i] = malloc((strlen(token) + 1) * sizeof(char));
		strcpy(argv[i], token);
		token = strtok(NULL, delim);
		i++;
	}

	argv[i] = NULL;
	free(cpyCommand);
	free(cpyCommand2);
	cpyCommand = NULL;
	cpyCommand2 = NULL;
	return (argv);
}

void free_tokens_array(char **tokens)
{
	int i = 0;
	while (tokens[i] != NULL)
	{
		free(tokens[i]);
		i++;
	}
	free(tokens);
}

void find_path_for_command(char **argv)
{
	//
}

int main()
{
	/**
	   create a program that reads a prompt and then prints
	   here is your prompt
	   $ enter your prompt: input-command
	   your command is: input-command
	   $ enter your prompt:
	 */
	char *command = NULL;

	while(1)
	{
		printf("$ enter your prompt: ");
		size_t n = 0;
		int num_read = 0;

		num_read = getline(&command, &n, stdin);
		if (num_read == -1)
		{
			free(command);
			command = NULL;
			n = 0;
			return (1);
		}

		char **argv = tokenize(command, " \n\t");
		find_path_for_command(argv);

		if (access(argv[0], F_OK | X_OK) == -1)
		{
			free(command);
			free_tokens_array(argv);
			perror("The file is not found");
			continue;
		}
		pid_t child_pid = fork();
		int status;

		if (child_pid == -1)
		{
			free(command);
			free_tokens_array(argv);
			perror("Failed to Fork");
			exit(EXIT_FAILURE);
		}
		if (child_pid == 0)
		{
			free(command);
//			printf("The id of the child process is %d\n", child_pid);
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
			}
		}
		else
		{
			// free_array_tokens
			free_tokens_array(argv);
			free(command);
			command = NULL;
			n = 0;
			pid_t terminated_child = wait(&status);
//			printf("The id of the parent is %d\n", getpid());
//			printf("The id of the terminated_child/wait is %d", terminated_child);
		}


	}
	free(command);
	command = NULL;
	return (0);
}
