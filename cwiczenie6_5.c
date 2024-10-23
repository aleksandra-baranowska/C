#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
    char ch, litera;
    int rosn, mal, odstep;

    printf("Podaj wielka litere: ");
    scanf("%c", &ch);
    for (litera = 'A'; litera <= ch; litera++) {
        for (odstep = ch - litera; odstep > 0; odstep--) {
            printf(" ");
        }
        for (rosn = 'A'; rosn <= litera; rosn++) {
            printf("%c", rosn);
        }
        for (mal = litera - 1; mal >= 'A'; mal--) {
            printf("%c", mal);
        }
        printf("\n");
    }
    return 0;
}
