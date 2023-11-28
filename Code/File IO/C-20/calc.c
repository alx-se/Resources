#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int readFile(char *fileName)
{
	int fd = open(fileName, O_RDONLY | O_CREAT, 777);

	char buff[100];
        int size_of_buffer = 100;
        int readCount = read(fd, buff,size_of_buffer);
	printf("The file we print\n");
        while (readCount > 0)
        {
                buff[readCount] = '\0';
		printf("%s", buff);
                readCount = read(fd, buff, size_of_buffer);
        }

        int closed = close(fd);
        if (closed == -1 || readCount == -1)
                return (-1);
	return (0);
}

int appendToFile(char *fileName, char *data)
{
	int fd = open(fileName, O_WRONLY | O_APPEND | O_CREAT, 777);

        int written = write(fd, data, strlen(data));
	if (written == -1)
                return (-1);
        int closed = close(fd);
        if (closed)
                return (-1);
}

int main(char argc, char **argv)
{
	char *fileName = "calcHistory.txt";
	// we want to save our history of calculation even if we exit the app
	// we want to see the history
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	char formattedString[100];

	sprintf(formattedString, "%d + %d = %d\n", num1, num2, num1 + num2);

	appendToFile(fileName, formattedString);
	readFile(fileName);
	return (0);
}
