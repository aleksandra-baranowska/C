#include <stdio.h>

void Temperatura(double fahrenheit);

int main(void) {
    double fahrenheit;
    int status;

    printf("Podaj temperature w stopniach Fahrenheita (lub wpisz 'k', aby zakonczyc): ");
    scanf("%lf", &fahrenheit);

    while ((status = fahrenheit)) == 1) 
    {
        Temperatura(fahrenheit);
        printf("Podaj temperature w stopniach Fahrenheita (lub wpisz 'k', aby zakonczyc): ");
    }

    printf("Koniec programu.\n");
    return 0;
}

void Temperatura(double fahrenheit) 
{
    const double przelicznik = 5.0 / 9.0;
    const double stala_kelwina = 273.16;

    double celsjusz = przelicznik * (fahrenheit - 32);
    double kelwin = celsjusz + stala_kelwina;

    printf("%.2f Fahrenheita to %.2f stopni Celsjusza i %.2f Kelwinow.\n", fahrenheit, celsjusz, kelwin);
}
