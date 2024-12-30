#include <stdio.h>
#pragma warning(disable : 4996)

char pobierz_wybor(void);

int main(void) {
    char opcja;
    int podstawa;
    const float podatek1200 = 0.15f;
    const float podatek600 = 0.2f;
    const float podatek = 0.25f;
    float po_podatku = 0;
    int godziny = 0;

    while ((opcja = pobierz_wybor()) != 'q') {
        switch (opcja) {
        case 'a':
            podstawa = 35;
            break;
        case 'b':
            podstawa = 37;
            break;
        case 'c':
            podstawa = 40;
            break;
        case 'd':
            podstawa = 45;
            break;
        case 'q':
            printf("wyjscie\n");
            return 0; 
        default:
            printf("Wybierz opcje od a do d.\n");
        }
    }

    printf("Podaj liczbe przepracowanych godzin: ");
    scanf("%d", &godziny);

    float nadgodziny = 1.5 * podstawa;
    float wynagrodzenie = godziny <= 40 ? podstawa * godziny : 40 * podstawa + (godziny - 40) * nadgodziny;

    float podatek_suma = 0;

    if (wynagrodzenie <= 1200) {
        podatek_suma = wynagrodzenie * podatek1200;
    }
    else if (wynagrodzenie <= 1800) {
        podatek_suma = 1200 * podatek1200 + (wynagrodzenie - 1200) * podatek600;
    }
    else {
        podatek_suma = 1200 * podatek1200 + 600 * podatek600 + (wynagrodzenie - 1800) * podatek;
    }

    po_podatku = wynagrodzenie - podatek_suma;

    printf("Brutto: %.2f\n", wynagrodzenie);
    printf("Podatek: %.2f\n", podatek_suma);
    printf("Netto: %.2f\n", po_podatku);

    return 0;
}

char pobierz_wybor(void) {
    int ch;
    printf("Wybierz opcje a, b, c, d lub q.\n");
    printf("***************************************************************\n");
    printf("a) 35 zl/godz.                         b) 37 zl/godz.\n");
    printf("c) 40 zl/godz.                         d) 45 zl/godz.\n");
    printf("q) wyjscie\n");
    printf("***************************************************************\n");

    ch = getchar();
    while (getchar() != '\n');

    while ((ch < 'a' || ch > 'd') && ch != 'q') {
        printf("Wybierz opcje a, b, c, d lub q: \n");
        ch = getchar();
        while (getchar() != '\n');
    }

    return ch;
}
