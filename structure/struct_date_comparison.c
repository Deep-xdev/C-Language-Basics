#include <stdio.h>

int main() {
    // 1. Basic Date Struct
    typedef struct date {
        int day; 
        int month;
        int year;
    } date;

    // 2. Nested Struct (Contains a 'date' struct)
    typedef struct date_wrapper {
        date normal;
    } date_wrapper;

    // Initialize two separate dates
    date a = {12, 2, 2025};
    date b = {12, 2, 2025};

    // Initialize nested struct
    date_wrapper dw;
    dw.normal.day = 12; // Accessing nested member

    // Comparison Logic
    if (a.day == b.day && a.month == b.month && a.year == b.year) {
        printf("The dates are Equal.\n");
    } else {
        printf("The dates are Not Equal.\n");
    }

    return 0;
}