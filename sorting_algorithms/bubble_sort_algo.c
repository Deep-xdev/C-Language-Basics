#include <stdio.h>
#include <stdbool.h> // Needed for bool type

int main() {
    int arr[5] = {5, 40, 300, 2, 1};
    int n = 5;

    printf("Original: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    // --- Bubble Sort ---
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false; // Optimization flag
        
        for (int j = 0; j < n - 1 - i; j++) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) { 
                // Swap if they are in wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        
        // If no swaps occurred, array is already sorted
        if (swapped == false) {
            break;
        }
    }

    printf("Sorted:   ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}