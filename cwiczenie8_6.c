#include <stdio.h>

char pobierz_pierwszy(void);

int main() {

    char ch;
    printf("Wpisz tekst: \n");
    ch = pobierz_pierwszy();
    printf("Pierwszy drukowalny znak to %c", ch);
    return 0;
}

char pobierz_pierwszy(void)
{
    int ch;
    ch = getchar();
    while (!(ch >= 32 && ch <= 126) && ch != EOF) {
        ch = getchar();
    }

    while (getchar() != '\n')
        continue;

    return ch;
}
