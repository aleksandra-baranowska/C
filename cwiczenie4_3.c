//cwiczenie 4.3
//Napisz program, który pobiera liczbê zmiennoprzecinkow¹, a nastêpnie wyœwietla
//j¹ w postaci u³amka dziesiêtnego i w zapisie wyk³adniczym.Niech wyœwietlany
//tekst wygl¹da nastêpuj¹co :
//a) Wpisano liczbê 21.3 lub 2.1e+001.
//e) Wpisano liczbê + 21.290 lub 2.129E+001.

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