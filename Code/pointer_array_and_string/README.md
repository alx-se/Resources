# Live Workshop for C2-Blended On Pointers, Arrays and Strings

## Tasks

### Task 1: Modify Array Values Using Pointers

#### Description:
Write a function `double_values` that takes an array of integers and its size as arguments. The function should double the value of each element in the array using pointers. This task will help you understand how to manipulate array elements through pointers.

#### Function Prototype:
```c
void double_values(int *arr, int size);
```

#### Example Usage:
```c
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    double_values(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Output: 2 4 6 8 10
    }
    return 0;
}
```

---

### Task 2: Convert String to Lowercase

#### Description:
Write a function `to_lowercase` that takes a string as an argument and converts all its uppercase characters to lowercase using pointers. This task will help you understand character manipulation and string handling in C.

#### Function Prototype:
```c
void to_lowercase(char *str);
```

#### Example Usage:
```c
int main() {
    char str[] = "HeLLo WoRLd!";
    to_lowercase(str);
    printf("%s\n", str); // Output: hello world!
    return 0;
}
```

---

### Task 3: Find the Maximum Value in an Array

#### Description:
Write a function `find_max` that takes an array of integers and its size as arguments and returns the maximum value in the array using pointers. This task will help you understand how to traverse arrays and compare elements using pointers.

#### Function Prototype:
```c
int find_max(int *arr, int size);
```

#### Example Usage:
```c
int main() {
    int arr[] = {10, 25, 5, 40, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = find_max(arr, size);
    printf("Maximum value: %d\n", max); // Output: Maximum value: 40
    return 0;
}
```

### Task 4: Add Value to Pointer

#### Description:
Write a function `add_value_to_pointer` that takes a pointer to an integer and an integer value as arguments. The function should add the given value to the integer pointed to by the pointer. This task will help you understand how to modify values using pointers and pointer dereferencing.

#### Function Prototype:
```c
void add_value_to_pointer(int *ptr, int value);
```

#### Example Usage:
```c
#include <stdio.h>

void add_value_to_pointer(int *ptr, int value) {
    *ptr += value;
}

int main() {
    int num = 10;
    int value_to_add = 5;
    
    printf("Before: %d\n", num); // Output: Before: 10
    add_value_to_pointer(&num, value_to_add);
    printf("After: %d\n", num); // Output: After: 15

    return 0;
}
```
