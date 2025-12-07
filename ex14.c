#include <stdio.h>


unsigned long long fibonacci(int n) {
    if (n == 0) return 0; 
    if (n == 1) return 1;   
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter the position n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Position must be non-negative.\n");
    } else {
        printf("Fibonacci numbers up to position %d:\n", n);
        for (int i = 0; i <= n; i++) {
            printf("%llu ", fibonacci(i));
        }
        printf("\n");

        printf("The %d-th Fibonacci number is: %llu\n", n, fibonacci(n));
    }

    return 0;
}
