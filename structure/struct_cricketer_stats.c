#include <stdio.h>

int main() {
    typedef struct cricket_record {
        char name[50];
        int age;
        int no_of_matches;
        float avg_runs;
    } C_record;

    C_record arr[3]; 
    int n = 3;

    for (int i = 0; i < n; i++) {
        printf("\n--- Cricketer %d ---\n", i + 1);
        
        printf("Enter Name: ");
        // Space before % consumes the newline left by previous inputs
        scanf(" %[^\n]s", arr[i].name); 
        
        printf("Enter Age: ");
        scanf("%d", &arr[i].age);
        
        printf("Matches Played: ");
        scanf("%d", &arr[i].no_of_matches);
        
        printf("Average Runs: ");
        scanf("%f", &arr[i].avg_runs);
    }

    printf("\n--- Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("%s | Age: %d | Matches: %d | Avg: %.2f\n", 
               arr[i].name, arr[i].age, arr[i].no_of_matches, arr[i].avg_runs);
    }
    return 0;
}