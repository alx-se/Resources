#include <stdio.h>

int main() {
  // Open the file "myfile.txt" for reading.
  FILE *fp = fopen("myfile.txt", "r");
  if (fp == NULL) {
    printf("Error opening file.\n");
    return 1;
  }

  // Read data from the file.
  char buffer[1024];
  int bytes_read = fread(buffer, 1, sizeof(buffer), fp);

  // Close the file.
  fclose(fp);

  // Open the file "myfile.txt" for writing.
  fp = fopen("myfile2.txt", "w+");
  if (fp == NULL) {
    printf("Error opening file.\n");
    return 1;
  }

  // Write data to the file.
  int bytes_written = fwrite(buffer, 1, bytes_read, fp);

  // Close the file.
  fclose(fp);

  return 0;
}
