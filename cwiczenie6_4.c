#include <stdio.h>

int main() {
    int wiersz, litery;
    char ch = 'A';

    for (wiersz = 1; wiersz <= 6; wiersz++) {
        for (litery = 1; litery <= wiersz; litery++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}