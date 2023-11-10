#include <stdio.h>
#include <stdarg.h>

void print_messages(char *message, ...) {
  va_list ap;
  va_start(ap, message);
  for (char *arg = va_arg(ap, char *); arg != NULL; arg = va_arg(ap, char *)) {
    printf("%s\n", arg);
  }
  va_end(ap);
}

int main() {
  print_messages("Hello", "World", "This", "is", "a", "variadic", "function", "example.");

  return 0;
}

// This code defines a function print_messages that takes a string argument and any number of additional string arguments. 
// The print_messages function prints each of the string arguments to the console. 
// The main function calls the print_messages function with seven string arguments.