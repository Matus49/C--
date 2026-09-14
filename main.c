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
        for (int i = 0; i < spaces; i++) {
            printf(" ");
        }

        for (int i = 0; i < stars; i++) {
            printf("*");
        }

        for (int i = 0; i < spaces; i++) {
            printf(" ");
        }
        printf("\n");
        
        stars -= 2;
        spaces += 1;
    }
    return 0;
}
