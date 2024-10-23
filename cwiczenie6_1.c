#include <stdio.h>
int main(void)
{
	char tablica[26];
	for (int n = 0; n < 26; n++) {
		tablica[n] = 'a' + n;
	}
	printf("%s\n", tablica);
	return 0;
}
