#include <stdio.h>

void szescian();

int main(void) 
{
    float liczba;

    printf("Podaj liczbe typu float: ");
    scanf("%f", &liczba);

    szescian();
    return 0;
}

szescian() 
{
    float wynik;

    wynik = liczba * liczba * liczba;

    printf("Liczba %f podniesiona do trzeciej potegi wynosi %f\n", liczba, wynik);
}
