#include <stdio.h>

int main(void) {

	char znak;
	int kropki = 0;
	int wykrzykniki = 0;

	printf("Podaj tekst: \n");

	while ((znak = getchar()) != '#') {
		if (znak == '.') {
			printf("!");
			kropki++;
		}
		else if (znak == '!') {
			printf("!!");
			wykrzykniki++;
		}
		else {
			printf("%c", znak);
		}
	}

	return 0;
}