//cwiczenie 4.3
//Napisz program, kt�ry pobiera liczb� zmiennoprzecinkow�, a nast�pnie wy�wietla
//j� w postaci u�amka dziesi�tnego i w zapisie wyk�adniczym.Niech wy�wietlany
//tekst wygl�da nast�puj�co :
//a) Wpisano liczb� 21.3 lub 2.1e+001.
//e) Wpisano liczb� + 21.290 lub 2.129E+001.

#include <stdio.h>
int main(void)
{
	float liczba;

	printf("Podaj liczbe: ");
	scanf_s("%f", &liczba);
	printf("\nWpisano liczbe %.1f lub %.1e.\n", liczba, liczba);
	printf("Wpisano liczbe %+3.3f lub %.3E\n", liczba, liczba);
	return 0;
}