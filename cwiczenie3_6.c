//cwiczenie 3.6
#include <stdio.h>
int main(void)
{
	float litr;
	printf("Podaj objetosc wody w l: \n");
	scanf_s("%f", &litr);
	
	float czasteczki = litr * 1000 / 3.0E-23;
	printf("%f litrow to %e czasteczek wody.\n", litr, czasteczki);
	return 0;
}