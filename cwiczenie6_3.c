#include <stdio.h>

int main() {
    int wiersz;
    char ch;

    for (wiersz = 1; wiersz <= 6; wiersz++) {
        for (ch = 'A'; ch <= ('A' + wiersz - 1); ch++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}