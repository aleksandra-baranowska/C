#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
    int liczba;

    printf("Podaj dodatnia liczba calkowita: ");
    scanf("%d", &liczba);


    for (int i = 2; i <= liczba; i++) {
        int pierwsza = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                pierwsza = 0;
                break;
            }
        }

        if (pierwsza) {
            printf("%d ", i);
        }
    }

    printf("Liczby pierwsze mniejsze lub rowne %d:\n", liczba);
    printf("\n");
    return 0;
}
