#include <stdio.h>
#pragma warning(disable : 4996)

//to Ÿle liczy, ale na razie nie wiem dlaczego

int main(void) {
	int dolna, gorna, suma, i;

	printf("Podaj dolna i gorna granice przedzialu liczb calkowitych: ");
	scanf("%d %d", &dolna, &gorna);

	while (gorna > dolna){
		suma = 0;

		for (i = dolna; i <= gorna; i++) {
			suma =+ i * i + gorna * gorna;
		}

	printf("Suma kwadratow od %d do %d to %d\n", dolna * dolna, gorna * gorna, suma);

	printf("Podaj dolna i gorna granice przedzialu liczb calkowitych: ");
	scanf("%d %d", &dolna, &gorna);
	}
	printf("Koniec");
	return 0;
}