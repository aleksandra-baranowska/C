#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {

	float inw = 1000000.0;
	int i = 0;

	while (inw > 0) {
		inw += inw * 0.08;
		inw -= 100000.0;
		i++;
	}

	printf("%d", i);

	return 0;
}