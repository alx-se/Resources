// we want to check if the 3rd bit
// (from the right, 0-indexed) of a number is set or not.
// We can do this using a bitwise AND operation with a bit mask.


#include <stdio.h>

    int main(){
    int num = 8; // Binary: 1000
    int mask = 1 << 3; // Binary: 1000

    if (num & mask) {
        printf("Bit is set.\n");
    } else {
        printf("Bit is not set.\n");
    }
}
