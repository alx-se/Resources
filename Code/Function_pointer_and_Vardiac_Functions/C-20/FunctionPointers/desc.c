// 1. Declaring Function pointer
// Function pointers are declared using the same syntax as regular pointers, but with an asterisk (*) before the variable name and a function type after it. 
// eg, the following code declares a function pointer named add that points to a function that takes two integer arguments and returns an integer
int (*add)(int, int);


// 2. Initializing a Function Pointer
// A function pointer can be initialized to point to a function using the address-of operator (&). 
// e.g the following code initializes the add function pointer to point to the add_numbers function:
int add_numbers(int a, int b) {
  return a + b;
}

int (*add)(int, int) = &add_numbers;


// 3. Calling a Function Through a Pointer
// To call a function through a pointer, you simply use the parentheses () after the pointer variable. 
// eg, the following code calls the add_numbers function through the add function pointer:
int result = (*add)(10, 20);
add_numbers(10,20);

// Benefits of Using Function Pointers

// - Flexibility: Function pointers allow you to call functions indirectly, which can be useful for implementing callbacks, dynamic dispatch, and polymorphism.
// - Efficiency: Calling a function through a pointer can be more efficient than calling it by name, especially if the function is called frequently.
// - Code Reusability: Function pointers can be used to create generic code that can work with different functions.
