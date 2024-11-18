#include <stdio.h>

int main(void) {

    char znak;
    int kropki = 0;
    int wykrzykniki = 0;

    printf("Podaj tekst: \n");

    while ((znak = getchar()) != '#') {
        switch (znak) {
        case '.':
            printf("!");
            kropki++;
            break;

        case '!':
            printf("!!");
            wykrzykniki++;
            break;

        default:
            printf("%c", znak);
            break;
        }
    }

    return 0;
}
