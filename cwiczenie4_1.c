//cwiczenie4.1  Napisz program, który pyta o Twoje imiê, a nastêpnie o nazwisko, 
// po czym wyœwietla je w uk³adzie Nazwisko, Imiê.
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