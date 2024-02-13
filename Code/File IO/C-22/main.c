#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  // opened a file
  int fd = open("./names.txt", O_RDWR | O_CREAT, 777);
  if (fd == -1)
    return (-1);

  /**
   * O_RDONLY | OWRONLY == O_RDWR
   * 0 | 1 == 2 -> THIS IS NOT TURE INSTEAD IT IS EQUAL 1 -> 0_WRONLY
   */
  printf("O_RDONLY = %d, O_CREAT = %d\n", O_RDONLY, O_CREAT);
  // we do operation like reading, and writing
  printf("fd = %d\n", fd);

  //char buf[100];
  size_t count = 5;
  char *buf;
  buf = malloc(sizeof(char) * count);

  ssize_t stat = read(fd, buf, count);
  while (stat != 0) {
  //printf("stat = %ld", stat);
    if (stat == -1) {
      perror("Error");
      return (-1);
    }

    printf("data = %s\n", buf);
    stat = read(fd, buf, count);
  }
 
  // close a file
  int isSuccess = close(fd);
  if (isSuccess == -1)
    return (-1);

  // write to a file

  // first let's open the file
  fd = open("./sotHere.txt", O_RDWR | O_TRUNC | O_CREAT, 0644);
  if (fd == -1)
    {
      perror("Error creating the file");
      return (-1);

    }
      // write to the file
  //  ssize_t writeStat = write(fd, "Here is writing to a file", 20);
  int written = dprintf(fd, "My name is %s, year is %d", "Amanuel", 2024);
  printf("Char written by dprintf: %d", written);
  //printf("Written bytes are: %ld\n", writeStat);
  perror("Error");
  // close the file
  close(fd);
}
