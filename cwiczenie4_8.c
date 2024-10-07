//cwiczenie 4.8
//Napisz program pytaj�cy u�ytkownika o liczb� przebytych mil i liczb� zu�ytych
//galon�w paliwa.Nast�pnie niech program obliczy i wy�wietli poziom zu�ycia
//w postaci wska�nika mile / galon, z jednym miejscem po przecinku.

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

	//Nast�pnie � korzystaj�c z faktu, �e jeden galon to 3, 785 litra, a jedna mila to ok. 1, 609 kilometra
	//�  skonwertuj wska�nik  mile / galon  na litry / 100 km, w jakim  zwykle  opisuje  si�
	//zu�ycie paliwa w Europie.

	const float MILA_KM = 1.609;
	const float GALON_L = 3.785;
	float km = mile * MILA_KM;
	float ltr = paliwo * GALON_L;

	printf("Poziom zuzycia litry/km: %.1f.\n", ltr / km);
	return 0;
}