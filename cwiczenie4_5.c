//cwiczenie 4.5
//Napisz program, który pobiera prêdkoœæ pobierania (w megabitach na sekundê)
//oraz rozmiar pliku do pobrania(w megabajtach=8 bitow).Program powinien obliczyæ czas
//pobierania pliku.Zauwa¿, ¿e w tym kontekœcie jeden bajt to osiem bitów.U¿yj
//typu float oraz operatora / do dzielenia.Program powinien wypisaæ wszystkie
//trzy wartoœci(prêdkoœæ pobierania, rozmiar pliku i wyliczony czas) do dwóch miejsc
//po przecinku, jak tutaj :
//Przy 18.12 megabitow na sekunde plik o rozmiarze 2.20 megabajta
//zostanie pobrany w 0.97 sekundy

#include <stdio.h>
int main(void)
{
	float predkosc;
	float rozmiar;

	printf("Podaj predkosc pobierania pliku: \n");
	scanf_s("%f", &predkosc);
	printf("Podaj rozmiar pliku: \n");
	scanf_s("%f", &rozmiar);

	float rozmiar_bit = rozmiar * 8;
	float czas = rozmiar_bit / predkosc;

	printf("Przy %.2f megabitow na sekunde plik o rozmiarze %.2f megabajta "
		"zostanie pobrany w %.2f sekundy.\n", predkosc, rozmiar, czas);
	return 0;
}