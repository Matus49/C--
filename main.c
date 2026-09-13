#include <stdio.h>

int main(void) {
    int rows;

    printf("Daj cislo: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Nespravny vstup.\n");
        return 1;
    }

    int spaces = 0;
    int stars = rows;

    while (stars > 0) {
        // Vytlačenie medzier na začiatku
        for (int i = 0; i < spaces; i++) {
            printf(" ");
        }

        // Vytlačenie hviezdičiek
        for (int i = 0; i < stars; i++) {
            printf("*");
        }

        // Vytlačenie medzier na konci a nový riadok
        for (int i = 0; i < spaces; i++) {
            printf(" ");
        }
        printf("\n");

        // V každom kroku zmenšíme počet hviezdičiek o 2 a pridáme 1 medzeru
        stars -= 2;
        spaces += 1;
    }

    return 0;
}