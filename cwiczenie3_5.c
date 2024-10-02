//cwiczenie 3.5
#include <stdio.h>
int main(void)
{
	float wiek;

	printf("Podaj wiek w latach: \n");
	scanf_s("%d", &wiek);

	float sekundy = wiek * 3.156E+07;

	printf("Twoj wiek w sekundach to %e sekund.\n", sekundy);
	return 0;
}