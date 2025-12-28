#include <stdio.h>

int main() {
    // Open file in Write ("w") mode.
    // Warning: This wipes the file if it already exists!
    FILE* ptr = fopen("deep.txt", "w");

    // Always check if file opened successfully
    if (ptr == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    char str[] = "Hello bro\nNew line segments and\nJust writing stuff\n";
    
    // Write string to file
    fputs(str, ptr);
    
    printf("Data successfully written to 'deep.txt'.\n");

    // Always close the file
    fclose(ptr);
    return 0;
}