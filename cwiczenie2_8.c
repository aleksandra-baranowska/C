//cwiczenie 2.8
#include <stdio.h>
void raz_trzy(void);
void dwa(void);

int main(void)

{
	printf("zaczynamy:\n");
	raz_trzy();
	printf("koniec!\n");
	return 0;
}

void raz_trzy(void)
{
	printf("raz\n");
	dwa();
	printf("trzy\n");
}

void dwa(void)
{
	printf("dwa\n");
}