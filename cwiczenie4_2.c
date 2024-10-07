//cwiczenie 4.2
//Napisz program, który pyta o Twoje imiê, a nastêpnie:

#include <stdio.h>
int main(void)
{
	char imie[11];

	printf("Jak masz na imie?\n");
	scanf_s("%10s", imie, (unsigned)sizeof(imie));
	//a) wyœwietla je w cudzys³owie.
	printf("\"%s\"\n", imie);

	//b) wyœwietla  je  w  polu  o  szerokoœci  20  znaków;  w  cudzys³ów  powinno  byæ
	//ujête ca³e pole, z imieniem przy prawej krawêdzi.
	printf("\"%20s\"\n", imie);

	//c) wyœwietla je przy lewym brzegu pola o szerokoœci 20 znaków; w cudzys³ów
	//powinno byæ ujête ca³e pole.
	printf("\"%-20s\"\n", imie);

	//d) wyœwietla je w polu o trzy znaki d³u¿szym ni¿ imiê.
	int dlugosc = strlen(imie);
	printf("%*s\n", dlugosc + 3, imie);

	return 0;

}