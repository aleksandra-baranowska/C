//cwiczenie 3.7
#include <stdio.h>
int main(void)
{
	float wzrost;

	printf("Podaj swoj wzrost w cm: ");
	scanf_s("%f", &wzrost);

	float cale = wzrost * 2.54;

	printf("Twoj wzrost w calach to %f\n", cale);
	printf("Podaj swoj wzrost w calach: ");
	scanf_s("%f", &wzrost);

	float cm = wzrost / 2.54;

	printf("Twoj wzrost w cm to %f.\n", cm);
	return 0;
}