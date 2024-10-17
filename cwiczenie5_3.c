#include <stdio.h>
#pragma warning(disable : 4996)
#define TYDZIEN 7

int main(void)
{
	int dni, tygodnie, reszta;

	printf("Podaj liczbe dni: ");
	scanf_s("%d", &dni);

	while (dni > 0)
	{
		tygodnie = dni / TYDZIEN;
		reszta = dni % TYDZIEN;
		printf("%d dni to %d tygodnie, %d dni.\n", dni, tygodnie, reszta);

		printf("Podaj liczbe dni: ");
		scanf_s("%d", &dni);
	}
	return 0;
}
