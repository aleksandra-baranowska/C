#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
    char slowo[40];
    int dlugosc, i;

    printf("Podaj slowo: ");
    scanf("%s", slowo);

    dlugosc = strlen(slowo);

    printf("Wspak: ");
    for (i = dlugosc - 1; i >= 0; i--) {
        printf("%c", slowo[i]);
    }
    printf("\n");

    return 0;
}
