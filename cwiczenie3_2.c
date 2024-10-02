//cwiczenie3.2
#include <stdio.h>
int main(void)
{
	int kod;

	printf("Wpisz kod ASCII: \n");
	scanf_s("%d", &kod);
	printf("Kod %d to litera %c.\n", kod, kod);
	return 0;

}
