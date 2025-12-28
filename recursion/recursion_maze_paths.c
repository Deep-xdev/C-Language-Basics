#include <stdio.h>

// Function to find total paths from (cr, cc) to (er, ec)
int maze(int cr, int cc, int er, int ec) {
    int rightWays = 0;
    int downWays = 0;

    // Base Case: Reached destination
    if (cr == er && cc == ec) {
        return 1;
    }
    
    // Valid Move: Right (increment column)
    if (cc < ec) {
        rightWays += maze(cr, cc + 1, er, ec);
    }
    
    // Valid Move: Down (increment row)
    if (cr < er) {
        downWays += maze(cr + 1, cc, er, ec);
    }

    return rightWays + downWays;
}

int main() {
    int n, m;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    // Start at 1,1
    int totalWays = maze(1, 1, n, m);
    printf("Total ways to reach (%d,%d) are %d\n", n, m, totalWays);
    return 0;
}