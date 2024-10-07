//cwiczenie 4.5
//Napisz program, kt�ry pobiera pr�dko�� pobierania (w megabitach na sekund�)
//oraz rozmiar pliku do pobrania(w megabajtach=8 bitow).Program powinien obliczy� czas
//pobierania pliku.Zauwa�, �e w tym kontek�cie jeden bajt to osiem bit�w.U�yj
//typu float oraz operatora / do dzielenia.Program powinien wypisa� wszystkie
//trzy warto�ci(pr�dko�� pobierania, rozmiar pliku i wyliczony czas) do dw�ch miejsc
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