#include <stdio.h>

int main() {
	int male = 0;
	int wielkie = 0;
	int inne = 0;
	int ch;

	while ((ch = getchar()) != EOF) {
		if (ch > 64 && ch < 91) {
			wielkie++;
		}
		else if (ch > 96 && ch < 123) {
			male++;
		}
		else {
			inne++;
		}
	}
	printf("Liczba wielkich liter: %d\n liczba malych liter: %d\n liczba innych znakow: %d\n", wielkie, male, inne);

	return 0;
}