#include <stdio.h>
#pragma warning(disable : 4996)

void szescian(float liczba);
int main(void)
{
    float liczba;

    printf("Podaj liczbe typu float: ");
    scanf("%f", &liczba);
    szescian(liczba);
    return 0;
}

void szescian(float liczba)
{
    float wynik;

    wynik = liczba * liczba * liczba;

    printf("Liczba %f podniesiona do trzeciej potegi wynosi %f\n", liczba, wynik);
}
