//cwiczenie4.1  Napisz program, kt�ry pyta o Twoje imi�, a nast�pnie o nazwisko, 
// po czym wy�wietla je w uk�adzie Nazwisko, Imi�.
#include <stdio.h>
int main(void)
{
	char imie[11];
	char nazwisko[11];
	
	printf("Jak masz na imie?\n");
	scanf_s("%10s", imie, (unsigned)sizeof(imie));
	printf("Jak masz na nazwisko?\n");
	scanf_s("%10s", nazwisko, (unsigned)sizeof(nazwisko));
	printf("%s, %s\n", nazwisko, imie);
	return 0;

}