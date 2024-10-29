#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {

	char linia[255];
	int dlugosc = 0;
	int i;
	char c;

	printf("Podaj linie: ");

	while (scanf("%c", &c) == 1 && c != '\n') {
		linia[dlugosc++] = c;
	}

	printf("Odwrotnie: ");
	for (i = dlugosc - 1; i >= 0; i--) {
		printf("%c", linia[i]);
	}

	return 0;
}