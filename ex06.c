
#include <stdio.h>

int main() {
    int numbers[20]; 
    int index = 0;


    for (int i = 99; i >= 50; i -= 3) {
        numbers[index++] = i;
    }


    for (int i = 0; i < index; i++) {
        printf("%d", numbers[i]);
        if (i < index - 1) {
            printf(", ");
        }
    }

    return 0;
}
