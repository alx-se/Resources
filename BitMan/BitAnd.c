#include <stdio.h>
#include <stdbool.h>

int main(){

    bool A = false;
    bool B = false;

    if (A && B) {
        printf("Both A and B are true.\n");
    } else {
        printf("Either A or B is false.\n");
    }

}
