#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {
    int kategoria, dochod;
    float podatek, granica;

    printf("Wybierz kategoriê podatkow¹:\n");
    printf("1. Stan wolny\n");
    printf("2. Glowa rodziny\n");
    printf("3. Malzenstwo, rozliczenie wspolne\n");
    printf("4. Malzenstwo, rozliczenie osobne\n");
    printf("Podaj numer kategorii: ");

    while(scanf("%d", &kategoria) == 1)
    {
        if (kategoria == 1) {
            granica = 17850;
        }
        else if (kategoria == 2) {
            granica = 23900;
        }
        else if (kategoria == 3) {
            granica = 29750;
        }
        else if (kategoria == 4) {
            granica = 14875;
        }

        printf("Podaj dochod: ");
        scanf("%d", &dochod);

        if (dochod <= granica) {
            podatek = dochod * 0.15;
        }
        else {
            podatek = granica * 0.15 + (dochod - granica) * 0.28;
        }

        printf("Kwota podatku wynosi: %f.\n", podatek);
    }

    return 0;
}
