#include <stdio.h>

int maze2(int n, int m) {
    int rightways = 0;
    int downways = 0;

    // Base Case: 1x1 grid has 1 way (standing still/reached)
    if (n == 1 && m == 1) {
        return 1;
    }
    
    // If only 1 row remains, can only move right (reduce columns)
    if (n == 1) {
        rightways += maze2(n, m - 1);
    }
    // If only 1 column remains, can only move down (reduce rows)
    else if (m == 1) {
        downways += maze2(n - 1, m);
    }
    // Otherwise, move both ways
    else {
        rightways += maze2(n, m - 1);
        downways += maze2(n - 1, m);
    }

    return rightways + downways;
}

int main() {
    int n, m;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    int totalWays = maze2(n, m);
    printf("The total ways are %d\n", totalWays);
    return 0;
}