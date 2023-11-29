#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	char *fileName = "test2.txt";

	// open the file test.txt
	// 111 -> 777 -> 111 111 111
	int fd = open(fileName, O_RDWR | O_CREAT | O_TRUNC, 777);
	if (fd == -1)
		return (-1);

	// How to read a file
        // process / read/ write
	// how do we know when we reach an EOF?
	// ALX Amanuel
	//            |
	// readCount = 5, 5 , 1, 0 
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

	// how to write to a file
	char *data = "This is a test data\n second line of the file test2.txt";

	int written = write(fd, data, strlen(data));
	if (written == -1)
		return (-1);

        // close
	int closed = close(fd);
	if (closed == -1 || readCount == -1)
		return (-1);
	return (0);
}
