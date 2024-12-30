#include <stdio.h>

int main() {
    int znak;
    int licznik = 0;

    printf("Wprowadz tekst:\n");

    while ((znak = getchar()) != EOF) {
        if (znak < 32) {
            if (znak == '\t') {
                printf("\\t ");
            }
            else if (znak == '\n') {
                printf("\\n \n");
                licznik = 0;
                continue;
            }
            else {
                printf("^%c ", znak + 64);
            }
        }
        else {
            printf("%c ", znak);
        }

        printf("%d ", znak);
        licznik++;

        if (licznik % 10 == 0) {
            printf("\n");
        }
    }

    printf("\n");
    return 0;
}
