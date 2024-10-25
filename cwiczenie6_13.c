#include <stdio.h>
#include <math.h>

int main(void) {
    double tablica[8];  //pow() zwraca double, ale i powinien byc int?
    int i;

    for (i = 0; i < 8; i++) {
        tablica[i] = pow(2, i); 
    }

    i = 0;
    printf("Pierwsze osiem poteg liczby 2:\n");
    do {
        printf("%d\n", tablica[i]);
        i++;
    } while (i < 8);

    return 0;
}
