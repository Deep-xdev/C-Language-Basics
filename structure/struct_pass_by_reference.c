#include <stdio.h>
#include <string.h>

typedef struct person {
    int age;
    float weight;
} person;

// Function receives a pointer to the person struct
void change(person* p) {
    // Modifies the original 'x' variable in main
    p->age = 56;       
    p->weight = 78.6; 
}

int main() {
    person x = {60, 60.56};
    
    // Create pointer to x
    person* y = &x;

    printf("Before change: Age = %d, Weight = %.2f\n", x.age, x.weight);
    
    // Pass the pointer
    change(y);
    
    printf("After change:  Age = %d, Weight = %.2f\n", x.age, x.weight);
    
    return 0;
}