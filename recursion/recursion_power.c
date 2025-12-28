#include <stdio.h>

int power(int x, int y) {
    // Base case: x^0 = 1
    if (y == 0) return 1;
    
    // Optimization: Calculate half-power once and store it
    int half_power = power(x, y / 2);
    
    if (y % 2 == 0) {
        // If even: x^4 = x^2 * x^2
        return half_power * half_power;
    } else {
        // If odd: x^5 = x^2 * x^2 * x
        return half_power * half_power * x;
    }
}

int main() {
    int a, b;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter exponent: ");
    scanf("%d", &b);

    int p = power(a, b);
    printf("%d^%d = %d\n", a, b, p);
    return 0;
}