#include <stdio.h>

int main() {
	
	int liczba_liter = 0; //litery w s³owie
	int liczba_slow = 0;
	int litery = 0; //wszystkie wpisane
	int ch, srednia;

	printf("Wpisz tekst: \n");

	while ((ch = getchar()) != EOF) {
		if (ch > 64 && ch < 123) {
			liczba_liter++;
		}
		else if (liczba_liter > 0) {
			liczba_slow++;
			litery += liczba_liter;
			liczba_liter = 0;
		}
	}

	srednia = litery / liczba_slow;

	printf("Srednia liczba liter w slowie: %d", srednia);

	return 0;
}