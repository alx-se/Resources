#include <stdio.h>
#include <stdbool.h>

int main(){

    bool A = true;
    bool B = false;

    if (A || B) {
        printf("Either A or B or Both are true.\n");
    } else {
        printf("Either A or B is false.\n");
    }

}
