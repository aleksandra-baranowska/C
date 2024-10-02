//cwiczenie3_4
#include <stdio.h>
int main(void)
{
	float liczba;
	printf("Podaj liczbe: ");
	scanf_s("%f", &liczba);
	printf("Podana liczba to %f ", liczba);
	printf("lub %e ", liczba);
	printf("lub %a.\n", liczba);
	return 0;
}