#include <stdio.h>
#include <limits.h>

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;

    printf("Original Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    // --- Selection Sort ---
    for (int i = 0; i < n - 1; i++) { // Loop for passes
        int min = INT_MAX;
        int minidx = -1;
        
        // Find the minimum element in the unsorted sub-array (i to n-1)
        for (int j = i; j <= n - 1; j++) {
            if (min > arr[j]) {
                min = arr[j];
                minidx = j;
            }
        }
        
        // Swap the found minimum element with the first element of this pass
        // Swap arr[minidx] and arr[i]
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted Array:   ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}