//cwiczenie 4.8
//Napisz program pytaj¹cy u¿ytkownika o liczbê przebytych mil i liczbê zu¿ytych
//galonów paliwa.Nastêpnie niech program obliczy i wyœwietli poziom zu¿ycia
//w postaci wskaŸnika mile / galon, z jednym miejscem po przecinku.

#include <stdio.h>

int main(void)
{
	float mile;
	float paliwo;

	printf("Mile: \n");
	scanf_s("%f", &mile);
	printf("Paliwo w galonach: \n");
	scanf_s("%f", &paliwo);
	printf("Poziom zuzycia mile/galon: %.1f.\n", mile / paliwo);

	//Nastêpnie — korzystaj¹c z faktu, ¿e jeden galon to 3, 785 litra, a jedna mila to ok. 1, 609 kilometra
	//—  skonwertuj wskaŸnik  mile / galon  na litry / 100 km, w jakim  zwykle  opisuje  siê
	//zu¿ycie paliwa w Europie.

	const float MILA_KM = 1.609;
	const float GALON_L = 3.785;
	float km = mile * MILA_KM;
	float ltr = paliwo * GALON_L;

	printf("Poziom zuzycia litry/km: %.1f.\n", ltr / km);
	return 0;
}