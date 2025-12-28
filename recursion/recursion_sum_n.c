#include <stdio.h>

int sum(int n) {
    // Base Case: If n reaches 0, stop adding
    if (n <= 0) {
        return 0;
    }
    // Recursive Step
    return n + sum(n - 1);
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int result = sum(number);
        printf("Sum of 1 to %d is %d\n", number, result);
    }
    return 0;
}