#include <stdio.h>

int main() {
  // Open the file "fscanf.txt" for reading.
  FILE *fp = fopen("fscanf.txt", "r");
  if (fp == NULL) {
    printf("Error opening file.\n");
    return 1;
  }

  // Read an integer and a string from the file.
  int age;
  char name[100];
  fscanf(fp, "%d %s", &age, name);

  // Close the file.
  fclose(fp);

  // Print the age and name to the console.
  printf("Age: %d\n", age);
  printf("Name: %s\n", name);

  return 0;
}
