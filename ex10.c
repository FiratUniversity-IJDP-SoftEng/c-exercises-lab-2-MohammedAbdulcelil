#include <stdio.h>

int main() {
    // حلقة للصفوف
    for (int row = 1; row <= 10; row++) {
        // حلقة للأعمدة
        for (int col = 1; col <= 10; col++) {
            printf("%4d", row * col); 
        }
        printf("\n"); 
    }

    return 0;
}
