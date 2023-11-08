#define DEBUG

#ifdef DEBUG
    printf("Debugging information: Variable x = %d\n", x);
#endif

// In this example, the debug message will only be printed if DEBUG is defined. 
// If you comment out the #define DEBUG line, the debug message will not be printed. 
// This way, you can easily turn on and off your debug messages by defining or undefining DEBUG.