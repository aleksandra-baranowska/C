#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {
	int dolna_granica, gorna_granica, n;

	printf("Podaj dolna granice: ");
	scanf("%d", &dolna_granica);

	printf("Podaj gorna granice: ");
	scanf("%d", &gorna_granica);

	for (n = dolna_granica; n <= gorna_granica; n++) {
		printf("%d    %d    %d\n", n, n * n, n * n * n);
	}
	return 0;
}