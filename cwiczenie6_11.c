#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {
	int tablica[8], i;

	printf("Podaj 8 liczb calkowitych: ");

	for (i = 0; i < 8; i++) {
		scanf("%d", &tablica[i]);
	}

	printf("Odwrotna kolejnosc: ");
	for (i = 7; i >= 0; i--) {
		printf("%d", tablica[i]);
	}
	return 0;
}