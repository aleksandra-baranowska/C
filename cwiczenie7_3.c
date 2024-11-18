#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {

	int liczba;
	int parzyste = 0;
	int nieparzyste = 0;
	int suma_p = 0;
	int suma_np = 0;

	printf("Podaj liczbe: ");
	scanf("%d", &liczba);

	while (liczba != 0) {

		if (liczba % 2 == 0) {
			suma_p += parzyste;
			parzyste++;
		}
		else if (liczba % 2 != 0) {
			suma_np += nieparzyste;
			nieparzyste++;
		}

		printf("Podaj liczbe: ");
		scanf("%d", &liczba);
	}

	printf("liczba parzystych: %d\nsrednia parzystych: %d\n", parzyste, suma_p / parzyste);
	printf("liczba nieparzystych: %d\nsrednia nieparzystych: %d\n", parzyste, suma_np / nieparzyste);

	return 0;
}