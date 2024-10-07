//cwiczenie 4.7
//Napisz program, który przypisuje zmiennej typu double wartoœæ 1.0/3.0, a typu
//float — 1.0 / 3.0.Ka¿dy wynik ma byæ wyœwietlony trzykrotnie — raz maj¹ byæ
//przedstawiane cztery cyfry od prawej, drugi raz 12 cyfr od prawej, trzeci — 16 cyfr
//od prawej.Niech program za³¹cza plik nag³ówkowy float.h i wyœwietla wartoœci
//FLT_DIG i DBL_DIG.Czy wyœwietlone wartoœci 1.0 / 3.0 s¹ spójne z tymi wartoœciami ?

#include <stdio.h>
#include <float.h>

int main(void)
{
	double wartosc_d = 1.0 / 3.0;
	float wartosc_f = 1.0 / 3.0;

	printf("4 cyfry od prawej: %.4lf, %.4f.\n", wartosc_d, wartosc_f);
	printf("12 cyfr od prawej: %.12lf, %.12f.\n", wartosc_d, wartosc_f);
	printf("16 cyfr od prawej: %.16lf, %.16f.\n", wartosc_d, wartosc_f);
	printf("DBL_DIG: %d.\n", DBL_DIG);
	printf("FLT_DIG: %d.\n", FLT_DIG);
	return 0;
}