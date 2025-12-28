#include <stdio.h>

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;

    printf("Original: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    // --- Insertion Sort ---
    for (int i = 1; i < n; i++) {
        int current = arr[i]; // The card we want to insert
        int j = i - 1;

        // Shift elements of arr[0..i-1] that are greater than 'current'
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current; // Place the element
    }

    printf("Sorted:   ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}