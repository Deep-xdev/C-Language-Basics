#include <stdio.h>

int main() {
    // Open file in Read ("r") mode
    FILE* ptr = fopen("deep.txt", "r"); // Changed to read the file we created above

    if (ptr == NULL) {
        printf("Error: File not found. Run the write code first!\n");
        return 1;
    }

    char buffer[100]; // Buffer to store read content

    printf("--- File Content ---\n");
    
    // fgets reads until a newline or EOF
    // Loop continues as long as fgets doesn't return NULL (End of File)
    while (fgets(buffer, sizeof(buffer), ptr) != NULL) {
        printf("%s", buffer);
    }

    printf("\n--------------------\n");

    fclose(ptr);
    return 0;
}