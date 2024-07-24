### Task 1: Sum a Variable Number of Integers
**Function Prototype**: `int sum(int count, ...);`

**Task**: Write a function that accepts a variable number of integers and returns their sum.

### Task 2: Find the Maximum of a Variable Number of Doubles
**Function Prototype**: `double max(int count, ...);`

**Task**: Write a function that accepts a variable number of doubles and returns the maximum value.

### Task 3: Concatenate a Variable Number of Strings
**Function Prototype**: `char* concatenate(int count, ...);`

**Task**: Write a function that accepts a variable number of strings and returns a single concatenated string.

### Task 4: Print a Variable Number of Arguments of Different Types
**Function Prototype**: `void print_all(const char* format, ...);`

**Task**: Write a function that accepts a variable number of arguments of different types (int, double, char*) and prints them.


### Task 1: Create a Calculator Using Function Pointers
**Function Prototypes**:
```c
typedef int (*operation_func)(int, int);

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int calculate(int a, int b, operation_func operation);
```

**Task**: Implement a calculator that uses function pointers to perform addition, subtraction, multiplication, and division. The `calculate` function should take two integers and a function pointer to the desired operation.

### Task 2: Implement a Sort Function Using Function Pointers for Comparison
**Function Prototypes**:
```c
typedef int (*compare_func)(int, int);

void sort(int* array, int size, compare_func compare);
int ascending(int a, int b);
int descending(int a, int b);
```

**Task**: Write a `sort` function that sorts an array of integers. The sorting order should be determined by a function pointer passed to the `sort` function. Implement comparison functions for both ascending and descending order.

### Task 3: Execute a List of Functions Using Function Pointers
**Function Prototypes**:
```c
typedef void (*task_func)();

void execute_tasks(task_func* tasks, int count);
void task1();
void task2();
void task3();
```

**Task**: Implement a function `execute_tasks` that takes an array of function pointers and the number of functions. This function should execute each function in the array. Create at least three different tasks to demonstrate this functionality.

### Task 4: Event Handler Using Function Pointers
**Function Prototypes**:
```c
typedef void (*event_handler_func)();

void register_event_handler(event_handler_func handler);
void trigger_event();
void event1_handler();
void event2_handler();
```

**Task**: Implement a simple event handling system. The `register_event_handler` function should register an event handler, and `trigger_event` should call the registered event handler. Demonstrate this with at least two different event handlers.
