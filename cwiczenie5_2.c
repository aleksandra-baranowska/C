#include <stdio.h>
#pragma warning(disable : 4996)
int main(void)
{
    int liczba;


    printf("Podaj liczbe calkowita: ");
    scanf("%d", &liczba);

    int licznik = 0;

    while (licznik <= 10)
    {
        printf("%d ", liczba);
        liczba++;
        licznik++;
    }

    printf(" ");
    return 0;
}
