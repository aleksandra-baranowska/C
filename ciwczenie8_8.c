#include <stdio.h>
#include <ctype.h>
#pragma warning(disable : 4996)

float pobierz_liczbe(void);
char pobierz_wybor(void);

int main(void) {
    char wybor;
    float liczba1, liczba2, wynik;

    while ((wybor = pobierz_wybor()) != 'k') {
        printf("Podaj pierwsza liczbe: ");
        liczba1 = pobierz_liczbe();

        printf("Podaj druga liczbe: ");
        liczba2 = pobierz_liczbe();

        if (wybor == 'd') {
            while (liczba2 == 0) {
                printf("Podaj liczbe inna niz 0: ");
                liczba2 = pobierz_liczbe();
            }
        }

        switch (wybor) {
        case 'a':
            wynik = liczba1 + liczba2;
            printf("%.2f + %.2f = %.2f\n", liczba1, liczba2, wynik);
            break;
        case 'b':
            wynik = liczba1 - liczba2;
            printf("%.2f - %.2f = %.2f\n", liczba1, liczba2, wynik);
            break;
        case 'c':
            wynik = liczba1 * liczba2;
            printf("%.2f * %.2f = %.2f\n", liczba1, liczba2, wynik);
            break;
        case 'd':
            wynik = liczba1 / liczba2;
            printf("%.2f / %.2f = %.2f\n", liczba1, liczba2, wynik);
            break;
        default:
            printf("Nieprawidlowy wybor.\n");
        }
    }

    printf("Koniec.\n");
    return 0;
}

float pobierz_liczbe(void) {
    float liczba;
    char ch;

    while (scanf("%f", &liczba) != 1) {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" nie jest liczba.\nPodaj liczbe, np. 2.5, -178E8 czy 3: ");
    }
    return liczba;
}

char pobierz_wybor(void) {
    char wybor;

    printf("Wybierz jedno z dzialan:\n");
    printf("a. dodawanie      b. odejmowanie\n");
    printf("c. mnozenie       d. dzielenie\n");
    printf("k. koniec\n");

    wybor = getchar();

    while ((wybor < 'a' || wybor > 'd') && wybor != 'k') {
        printf("Wybierz opcje a, b, c, d lub k: ");
        wybor = getchar();
        while (getchar() != '\n');
    }
    return wybor;
}
