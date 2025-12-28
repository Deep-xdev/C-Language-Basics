#include <stdio.h>

typedef struct person {
    int age;
    int weight;
} person;

int main() {
    person x;
    x.age = 45;
    x.weight = 67;

    // Create a pointer pointing to 'x'
    person* ptr = &x;

    // Accessing members via pointer:
    // Method 1: Dereference then dot (Rarely used)
    (*ptr).age = 65; 

    // Method 2: Arrow Operator (Standard practice)
    printf("Age: %d\n", ptr->age); 
    printf("Weight: %d\n", ptr->weight);

    return 0;
}