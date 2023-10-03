// how to use a file pointer to read data from a file

#include <stdio.h>

int main() {
  // Open the file "myfile.txt" for reading.
  FILE *fp = fopen("myfile.txt", "r");
  if (fp == NULL) {
    printf("Error opening file.\n");
    return 1;
  }

  // Move the file pointer to the middle of the file.
  fseek(fp, ftell(fp) / 2, SEEK_SET);

  // Read data from the file.
  char buffer[1024];
  int bytes_read = fread(buffer, 1, sizeof(buffer), fp);

  // Close the file.
  fclose(fp);

  return 0;
}
