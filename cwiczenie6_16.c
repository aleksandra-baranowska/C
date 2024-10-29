//Procent skladany = 100*(1 + 0.05)^i

#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)

int main(void) {

	double ewa, kasia;
	const int inw = 100;
	int i = 0;

	ewa = inw;
	kasia = inw;

	while (kasia <= ewa) {
		i++;
		ewa = inw + 10 * i;
		kasia = inw * (pow((1 + 0.05), i));
	}

	printf("Kasia: %lf\nEwa: %lf\npo %d latach.\n", kasia, ewa, i);
	return 0;

}