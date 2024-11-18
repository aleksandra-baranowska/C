#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {

    int opcja;
    int podstawa;
    const float podatek1200 = 0.15f; 
    const float podatek600 = 0.2f; 
    const float podatek = 0.25f; 
    float po_podatku = 0;
    int godziny = 0;

    printf("***************************************************************\n");
    printf("1) 35 zl/godz.                         2) 37 zl/godz.\n");
    printf("3) 40 zl/godz.                         4) 45 zl/godz.\n");
    printf("5) wyjscie\n");
    printf("***************************************************************\n");
    
    printf("Wybierz opcje: ");
    scanf("%d", &opcja);

    switch (opcja) {
    case 1:
        podstawa = 35;
        break;
    case 2:
        podstawa = 37;
        break;
    case 3:
        podstawa = 40;
        break;
    case 4:
        podstawa = 45;
        break;
    case 5:
        printf("wyjscie\n");
        break;
    default:
        printf("Wybierz opcje od 1 do 5.\n");
    }

    printf("Podaj liczbe przepracowanych godzin: ");
    scanf("%d", &godziny);

    float nadgodziny = 1.5 * podstawa;
    int wynagrodzenie = godziny <= 40 ? podstawa * godziny : 40 * podstawa + (godziny - 40) * nadgodziny;

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

    printf("Brutto: %d\n", wynagrodzenie);
    printf("Podatek: %.2f\n", podatek_suma);
    printf("Netto: %.2f\n", po_podatku);

    return 0;
}