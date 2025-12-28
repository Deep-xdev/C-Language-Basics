#include <stdio.h>

int factorial(int x) {
    // Base Case: Stop recursion when x is 0 or 1
    if (x == 0 || x == 1) {
        return 1;
    }
    // Recursive Case
    else {
        return x * factorial(x - 1);
    }
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int fact = factorial(num);
        printf("Factorial of %d is %d\n", num, fact);
    }
    return 0;
}