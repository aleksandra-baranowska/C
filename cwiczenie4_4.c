//czwiczenie 4.4
// Napisz program, który pobiera Twój wzrost w centymetrach oraz Twoje imiê,
//a nastêpnie wyœwietla te dane w nastêpuj¹cej postaci :
//Robert, masz 1.82 metra wzrostu.
//U¿yj typu float, a dzielenie wykonaj za pomoc¹ operatora / .

#include <stdio.h>
int main(void)
{
	float wzrost;
	char imie[20];

	printf("Podaj wzrost: ");
	scanf_s("%f", &wzrost);
	printf("\nPodaj imie: ");
	scanf_s("%21s", imie, (unsigned)sizeof(imie));
	printf("\n%s, masz %1.2f metra wzrostu.\n", imie, wzrost / 100);
	return 0;
}