#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {

	char opcja;
	float waga_arbuz = 0, waga_burak = 0, waga_cebul = 0, cena_arbuz = 1.25, cena_burak = 0.65, cena_cebula = 0.89;
	float arbuzy = 0, buraki = 0, cebule = 0, suma = 0, waga_cal = 0, przesylka = 0;

	printf("A - Zamow arbuzy.\n");
	printf("B - Zamow buraki.\n");
	printf("C - Zamow cebulê.\n");
	printf("K - Koniec.\n");

	do {
		printf("Wybierz opcje: \n");
		scanf("%c", &opcja);

		switch (opcja) {
		case 'A': {
			printf("Podaj ilosc arbuzow (w kg): \n");
			scanf("%f", &waga_arbuz);
			break;
		}
		case 'B': {
			printf("Podaj ilosc burakow (w kg): \n");
			scanf("%f", &waga_burak);
			break;
		}
		case 'C': {
			printf("Podaj ilosc cebuli (w kg): \n");
			scanf("%f", &waga_cebul);
			break;
		}
		case 'K': {
			printf("Koniec.\n");
			break;
		}
		}
	}while (opcja != 'K');

	//oplaty
	arbuzy = waga_arbuz * cena_arbuz;
	buraki = waga_burak * cena_burak;
	cebule = waga_cebul * cena_cebula;

	suma = arbuzy + buraki + cebule;

	//rabat
	if (suma > 100) {
		suma -= suma * 0.05;
	}

	//przesylka
	waga_cal = waga_arbuz + waga_burak + waga_cebul;

	if (waga_cal <= 5) {
		przesylka = 3.50;
	}
	else if (waga_cal > 5 && waga_cal < 20) {
		przesylka = 10;
	}
	else {
		przesylka = 10 + waga_cal * 0.1;
	}

	printf("Suma do zaplaty: %.2f", suma + przesylka);

	return 0;
}