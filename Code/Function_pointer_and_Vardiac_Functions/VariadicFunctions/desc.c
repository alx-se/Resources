// 1. Declaring a Variadic Function
// A variadic function is declared using the same syntax as a regular function, but with an ellipsis (...) after the last fixed argument. 
// The ellipsis indicates that the function can take any number of additional arguments. 
// e.g, the following code declares a variadic function named add_numbers that takes an integer argument and any number of additional int args:
int add_numbers(int first, ...) {
  // Function body
}

// 2. Calling a Variadic Function
// To call a variadic function, you simply list the arguments in parentheses after the function name. 
// e.g, the following code calls the add_numbers function with three arguments:
int result = add_numbers(10);
int result1 = add_numbers(12, 5);

// 3. Accessing Variadic Arguments
// Inside a variadic function, you can access the variadic arguments using a special set of macros defined in the stdarg.h header file.
// These macros include va_start, va_arg, and va_end. The va_start macro initializes a variable that is used to keep track of the position 
// of the current argument.
// The va_arg macro retrieves the next argument and advances the position of the current argument. 
// The va_end macro cleans up the variable used to keep track of the position of the current argument.
// e.g, the following code shows how to use the va_arg macro to access the variadic arguments in the add_numbers function:
// This code initializes a variable ap using the va_start macro and then repeatedly retrieves the next argument using the va_arg macro. 
// the variable ap is declared as a va_list before it is used in the va_start macro.
// The loop continues until the argument is zero, which indicates that there are no more arguments.
int add_numbers(int first, ...) {
  int sum = first;
  va_list ap;
  va_start(ap, first);
  for (int arg = va_arg(ap, int); arg != 0; arg = va_arg(ap, int)) {
    sum += arg;
  }
  va_end(ap);
  return sum;
}

