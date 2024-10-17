#include <stdio.h>

#define CM_W_CALACH 2.54
#define CALE_W_STOPIE 12

int main(void) 
{
    float cm, cale, reszta_cali;
    int stopy;

    printf("Podaj wzrost w centymetrach: ");
    scanf("%f", &cm);

    while (cm > 0) 
    {
        cale = cm / CM_W_CALACH;
        stopy = cale / CALE_W_STOPIE;
        reszta_cali = cale - (stopy * CALE_W_STOPIE);

        printf("%.1f cm = %.0f stop, %.1f cali\n", cm, stopy, reszta_cali);

        printf("Podaj wzrost w centymetrach (<=0 — koniec): ");
        scanf("%f", &cm);
    }

    printf("Do widzenia!\n");
    return 0;
}