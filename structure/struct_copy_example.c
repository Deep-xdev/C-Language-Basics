#include <stdio.h>
#include <string.h>

int main() {
    // 1. Define the structure
    struct employee {
        char name[20];
        int employee_id;
        float salary;
    };

    // 2. Initialize a structure variable 'Rohan'
    struct employee Rohan;
    Rohan.salary = 4500.50;
    strcpy(Rohan.name, "Secret Seven");
    Rohan.employee_id = 101;

    // 3. Structure Assignment (Deep Copy)
    // All data from 'Rohan' is copied into 'a' automatically.
    struct employee a;
    a = Rohan; 

    printf("--- Original (Rohan) ---\n");
    printf("Name: %s\n", Rohan.name);
    printf("Salary: %.2f\n", Rohan.salary);

    printf("\n--- Copy (a) ---\n");
    printf("Name: %s\n", a.name);   // Proof that data was copied
    printf("Salary: %.2f\n", a.salary);

    return 0;
}