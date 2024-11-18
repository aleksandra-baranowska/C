#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {

	const int podstawa = 40; //za godzine
	const float nadgodziny = 1.5 * podstawa; //powyzej 40h/tydzien
	const float podatek1200 = 0.15; //dla pierwszych 1200
	const float podatek600 = 0.2; //dla kolejnyh 600
	const float podatek = 0.25; //dla reszty
	float po_podatku = 0;
	float podatek_suma = 0;
	int godziny = 0;

	printf("Podaj liczbe przepracowanych godzin: ");
	scanf("%d", &godziny);

	int wynagrodzenie = godziny <= 40 ? podstawa * godziny : 40 * podstawa + (godziny - 40) * nadgodziny;

	if (wynagrodzenie <= 1200) {
		podatek_suma = wynagrodzenie * podatek1200;
	}
	else if (wynagrodzenie <= 1800) {
		podatek_suma = 1200 * podatek1200 + (wynagrodzenie - 1200) * podatek600;
	}
	else {
		podatek_suma = 1200 * podatek1200 + 600 * podatek600 + (wynagrodzenie - 1800) * podatek;
	}

	po_podatku = wynagrodzenie - podatek_suma;

	printf("Brutto: %d\n", wynagrodzenie);
	printf("Podatek: %.2f\n", wynagrodzenie - po_podatku);
	printf("Netto: %.2f\n", po_podatku);

	return 0;
}