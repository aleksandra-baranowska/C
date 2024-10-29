#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {

	int Dunbar = 150;
	int znajomi = 5;
	int i;

	for (i = 1; znajomi < Dunbar; i++) {
		printf("tydzien: %d, znajomi: %d\n", i - 1, znajomi);
		
		znajomi = (znajomi - i) * 2;
	}
	
	return 0;
}