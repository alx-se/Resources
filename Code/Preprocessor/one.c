// Define a constant
#define MAX_SIZE 100
#define MIN_SIZE 1
#undef MAX_SIZE 

// Include a header file
#include <stdio.h>
#include "./Documents/Headers/main.h"

// Compile the following code only if the DEBUG macro is defined
#ifdef DEBUG
    printf("Debug message\n");
#endif

// Compile the following code only if the DEBUG macro is not defined
#ifndef DEBUG
    // Release code
#endif

// Compile the following code only if the VALUE variable is greater than 10
#if VALUE > 10
    printf("VALUE is greater than 10\n");
#elif VALUE < 5
    printf("VALUE is less than 5\n");
#else
    printf("VALUE is between 5 and 10\n");
#endif

// End of the preprocessor conditional block
#endif
