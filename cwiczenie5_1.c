#include <stdio.h>
#define GODZINA 60
#pragma warning(disable : 4996)

int main(void) 
{
    int czas;

    printf("Podaj czas w minutach (wpisz 0 lub liczbê ujemn¹, aby zakoñczyæ): ");
    scanf("%d", &czas);

    int h, min;

    while (czas > 0) 
    {
        h = czas / GODZINA;
        min = czas % GODZINA;

        printf("%d minut to %d godzin i %d minut.\n", czas, h, min);
        printf("Podaj czas w minutach (wpisz 0 lub liczbê ujemn¹, aby zakoñczyæ): ");
        scanf("%d", &czas);
    }
    return 0;
}