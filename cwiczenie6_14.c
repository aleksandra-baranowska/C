#include <stdio.h>
#pragma warning(disable : 4996)


int main(void) {
    double tablica1[8];
    double tablica2[8];
    int i;

    printf("Podaj 8 liczb (oddzielonych spacjami): ");
    for (i = 0; i < 8; i++) {
        scanf("%lf", &tablica1[i]);  //pierwsza tablica zapakowana
    }
 
    tablica2[0] = tablica1[0]; //pierwszy element ten sam

    for (i = 1; i < 8; i++) {
        tablica2[i] = tablica2[i - 1] + tablica1[i];  //poprzedni + obecny
    }

    printf("\nTablica 2: ");
    for (i = 0; i < 8; i++) {
        printf("%lf ", tablica2[i]);
    }

    return 0;
}
