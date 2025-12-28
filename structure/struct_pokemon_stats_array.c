#include <stdio.h>
#include <string.h>

int main() {
    typedef struct pokemon {
        char name[15];
        int speed;
        int attack;
    } pokemon;

    // Array to store 3 pokemon
    pokemon arr[3];

    // Input Loop
    for (int i = 0; i < 3; i++) {
        printf("\nPokemon %d:\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", arr[i].name); // Reads single word
        printf("Enter Attack: ");
        scanf("%d", &arr[i].attack);
        printf("Enter Speed: ");
        scanf("%d", &arr[i].speed);
    }

    // Output Loop
    printf("\n--- Pokedex Data ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %-10s | Attack: %d | Speed: %d\n", 
               arr[i].name, arr[i].attack, arr[i].speed);
    }
    return 0;
}