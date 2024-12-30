#include <stdio.h>

int main(void) {
    int low = 1; 
    int high = 100;
    int proba;
    char odpowiedz;

    printf("Wybierz liczbe od 1 do 100. Sprobuje ja odgadnac.\n");
    printf("Wpisz 't', jesli moja proba jest udana, lub 'n', jesli nie trafilem.\n");

    while (low <= high) {
        proba = (low + high) / 2;
        printf("Hmm...czy Twoja liczba jest %d?\n", proba);

        odpowiedz = getchar();
        getchar();

        if (odpowiedz == 't') {
            printf("Wiedzialem, ze mi sie uda!\n");
            return 0;
        }
        else if (odpowiedz == 'n') {
            printf("Czy Twoja liczba jest wieksza od %d?\n", proba);
            odpowiedz = getchar();
            getchar();

            if (odpowiedz == 't') {
                low = proba + 1;
            }
            else {
                high = proba - 1;
            }
        }
        else {
            printf("Odpowiedz 't' lub 'n'.\n");
        }
    }

    return 0;
}
