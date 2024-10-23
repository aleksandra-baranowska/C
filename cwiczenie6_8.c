#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
    float liczba1, liczba2;

    printf("Podaj dwie liczby zmiennoprzecinkowe: ");

    while (scanf("%f %f", &liczba1, &liczba2) == 2) {
        printf("Roznica podzielona przez iloczyn: %f\n", (liczba1 - liczba2) / (liczba1 * liczba2));
        printf("Podaj dwie liczby zmiennoprzecinkowe: ");
    }
    printf("\n");
    return 0;
}