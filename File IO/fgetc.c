#include <stdio.h>

int main() {
  // Open the file "fgetc.txt" for reading.
  FILE *fp = fopen("fgetc.txt", "r");
  if (fp == NULL) {
    printf("Error opening file.\n");
    return 1;
  }

  // Read a character from the file.
  char c = fgetc(fp);

  // Print the character to the console.
  printf("%c\n", c);

  // Close the file.
  fclose(fp);

  return 0;
}
