//cwiczenie 4.7
//Napisz program, kt�ry przypisuje zmiennej typu double warto�� 1.0/3.0, a typu
//float � 1.0 / 3.0.Ka�dy wynik ma by� wy�wietlony trzykrotnie � raz maj� by�
//przedstawiane cztery cyfry od prawej, drugi raz 12 cyfr od prawej, trzeci � 16 cyfr
//od prawej.Niech program za��cza plik nag��wkowy float.h i wy�wietla warto�ci
//FLT_DIG i DBL_DIG.Czy wy�wietlone warto�ci 1.0 / 3.0 s� sp�jne z tymi warto�ciami ?

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