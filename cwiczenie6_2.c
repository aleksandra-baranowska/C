#include <stdio.h>

int main() {
    int wiersz, znaki;

    for (wiersz = 1; wiersz <= 5; wiersz++) {
        for (znaki = 1; znaki <= wiersz; znaki++) {
            printf("$");
        }
        printf("\n");  // Nowa linia po ka¿dym wierszu
    }

    return 0;
}