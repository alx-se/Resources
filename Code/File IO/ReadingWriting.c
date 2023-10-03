// how to use fscanf(), fprintf(), fgetc(), fputc(), fgets(), and fputs() functions

#include <stdio.h>

int main(){

    // Read formatted data from a file.
    FILE *fp = fopen("myfile.txt", "r");
    int age;
    char name[100];
    fscanf(fp, "%d %s", &age, name);
    fclose(fp);

    // Write formatted data to a file.
    fp = fopen("myfile.txt", "w");
    fprintf(fp, "%d %s", 25, "John Doe");
    fclose(fp);

    // Read a single character from a file.
    fp = fopen("myfile.txt", "r");
    char c = fgetc(fp);
    fclose(fp);

    // Write a single character to a file.
    fp = fopen("myfile.txt", "w");
    fputc('c', fp);
    fclose(fp);

    // Read a line of text from a file.
    fp = fopen("myfile.txt", "r");
    char buffer[1024];
    fgets(buffer, sizeof(buffer), fp);
    fclose(fp);

    // Write a line of text to a file.
    fp = fopen("myfile.txt", "w");
    fputs("This is a line of text.\n", fp);
    fclose(fp);

    return 0;
}
