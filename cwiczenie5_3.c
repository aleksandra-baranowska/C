#include <stdio.h>
#define TYDZIEN 7

int main(void)
{
	int dni, tygodnie, reszta;

	while (dni > 0)
	{
		printf("Podaj liczbe dni: ");
		scanf_s("%d", &dni);

		tygodnie = dni / TYDZIEN;
		reszta = dni % TYDZIEN;
		printf("%d dni to %d tygodnie, %d dni.\n", dni, tygodnie, reszta);
	}
	return 0;
}