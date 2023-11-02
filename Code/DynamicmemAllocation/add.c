// STATIC ALLOC (stack memory)
// - Mem allocated at compile time
// - Used for static & global variables
// - Memory is released back to the computer when program exits

#include <stdio.h>
int one = 3;

int add(int a, int b){
    int c;
    return a + b + one;
}

// DYNAMIC ALLOC (heap memory)
// - Mem is allocated at runtime
// - Special functions used malloc, calloc, realloc, memalign, valloc
// - memory is released manually by free()
int arr[10]= [1, 4, 8, 9, 5]
arr = malloc(10*sizeof(int));

int *a = malloc(sizeof(int));
int *b = calloc(10, sizeof(int));

a = realloc(a, 10 * sizeof(int));

free(a);
free(b);

memcpy(), memmove(), memset(), mlock(), munlock(),

Memory debuggers = {valgrind, memwatch, electric fence, mtrace, dbgmem};


int main(){
    ....
    exit(0);
}
0- succ
1- fail
2- invalid arg
3- out of mem