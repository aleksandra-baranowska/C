//cwiczenie 4.6 
//Napisz program, kt�ry pobiera imi� i nazwisko u�ytkownika, po czym wy�wie -
//tla w pierwszym wierszu imi� i nazwisko, a w drugim liczb� liter w imieniu
//i nazwisku.Ka�da z liczb powinna znajdowa� si� pod ostatni� liter� odpowiadaj�cego jej wyrazu.

#include <stdio.h>
int main(void)
{
	char imie[20];
	char nazwisko[20];
	int dlugosc_imie = strlen(imie);

	printf("Podaj imie: \n");
	scanf_s("%19s", imie, (unsigned)sizeof(imie));
	printf("Podaj nazwisko: \n");
	scanf_s("%19s", nazwisko, (unsigned)sizeof(nazwisko));
	
	int dlugosc_i = strlen(imie);
	int dlugosc_n = strlen(nazwisko);

	printf("%20s %20s\n%20d %20d\n", imie, nazwisko, dlugosc_i, dlugosc_n);

	//Nast�pnie zmie� program tak, aby liczby by�y zr�wnane z pierwszymi literami
	//imienia i nazwiska.

	printf("%-20s %-20s\n%-20d %-20d\n", imie, nazwisko, dlugosc_i, dlugosc_n);
	return 0;
}