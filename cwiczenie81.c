#include <stdio.h>

int main() {
	int ch; 
	int licznik = 0;

	printf("Podaj tekst: \n");

	while ((ch = getchar()) != EOF) {
		licznik++;
	}

	printf("Liczba znakow: \n.", licznik);

	return 0;
}