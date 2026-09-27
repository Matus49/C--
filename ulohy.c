// uloha nakup


#include <stdio.h>

typedef struct {
    char nazov[50];
    double cena;
    int pocet;
} Produkt;

int main(void) {
    Produkt produkty[3];
    double celkova_cena = 0.0;

    for (int i = 0; i < 3; i++) {
        printf("Produkt %d\n", i + 1);
        printf("Nazov: ");
        scanf(" %49[^\n]", produkty[i].nazov);
        printf("Cena za kus: ");
        scanf("%lf", &produkty[i].cena);
        printf("Pocet kusov: ");
        scanf("%d", &produkty[i].pocet);
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        double spolu_za_produkt = produkty[i].cena * produkty[i].pocet;
        celkova_cena += spolu_za_produkt;

        printf("%d. %s - Cena: %.2f eur, Pocet: %d ks, Spolu: %.2f eur\n",
               i + 1,
               produkty[i].nazov,
               produkty[i].cena,
               produkty[i].pocet,
               spolu_za_produkt);
    }

    printf("Na zaplatenie: %.2f eur\n", celkova_cena);

    return 0;
}