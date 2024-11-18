#include <stdio.h>

int main(void) {

	char ch;
	int i = 1;

	printf("wpisz tekst: \n");

	while ((ch = getchar()) != '#') {
		printf("%c-%d, ", ch, (int)ch);

		if (i % 8 == 0) {
			printf("\n");
		}
		i++;
	}

	return 0;
}