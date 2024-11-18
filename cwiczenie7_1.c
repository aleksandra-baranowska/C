#include <stdio.h>

int main(void) {

	char ch;
	int odstepy = 0;
	int nowa_linia = 0;
	int inne_znaki = 0;

	printf("Wpisz tekst: ");

	while ((ch = getchar()) != '#') {
		if (ch == ' ') {
			odstepy++;
		}
		else if (ch == '\n') {
			nowa_linia++;
		}
		else {
			inne_znaki++;
		}
	}

	printf("Odstepy: %d\n", odstepy);
	printf("Znaki nowej linii: %d\n", nowa_linia);
	printf("Inne znaki: %d\n", inne_znaki);

	return 0;
}