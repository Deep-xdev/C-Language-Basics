#include <stdio.h>

int fibonacci(int n) {
    // Base Case: 1st and 2nd terms are 1
    if (n == 1 || n == 2) {
        return 1;
    }
    // Recursive Step
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter term number: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("The %dth term is %d\n", n, fibonacci(n));
    }
    return 0;
}