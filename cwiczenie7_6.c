#include <stdio.h>

int main(void) {

	char znak;
	char znak_poprzedni = '\0';
	int i = 0;

	printf("Wprowadz tekst: \n");

	while ((znak = getchar()) != '#') {

		if (znak_poprzedni == 'o' && znak == 't') {
			i++;
		}
		znak_poprzedni = znak;
	}

	printf("Liczba powtorzen 'ot': %d", i);
}