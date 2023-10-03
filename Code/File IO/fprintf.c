#include <stdio.h>

int main() {
  // Open the file "fprintf.txt" for writing.
  FILE *fp = fopen("fprintf.txt", "w");
  if (fp == NULL) {
    printf("Error opening file.\n");
    return 1;
  }

  // Write an integer and a string to the file.
  int age = 18;
  char name[] = "beta";
  fprintf(fp, "%d %s\n", age, name);

  // Close the file.
  fclose(fp);

  return 0;
}
