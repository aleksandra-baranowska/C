//cwiczenie 4.2
//Napisz program, kt�ry pyta o Twoje imi�, a nast�pnie:

#include <stdio.h>
int main(void)
{
	char imie[11];

	printf("Jak masz na imie?\n");
	scanf_s("%10s", imie, (unsigned)sizeof(imie));
	//a) wy�wietla je w cudzys�owie.
	printf("\"%s\"\n", imie);

	//b) wy�wietla  je  w  polu  o  szeroko�ci  20  znak�w;  w  cudzys��w  powinno  by�
	//uj�te ca�e pole, z imieniem przy prawej kraw�dzi.
	printf("\"%20s\"\n", imie);

	//c) wy�wietla je przy lewym brzegu pola o szeroko�ci 20 znak�w; w cudzys��w
	//powinno by� uj�te ca�e pole.
	printf("\"%-20s\"\n", imie);

	//d) wy�wietla je w polu o trzy znaki d�u�szym ni� imi�.
	int dlugosc = strlen(imie);
	printf("%*s\n", dlugosc + 3, imie);

	return 0;

}