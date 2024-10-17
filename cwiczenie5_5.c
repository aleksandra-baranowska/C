#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
    int zaplata, suma, dni;

    printf("Podaj przepracowane dni: ");
    scanf("%d", &dni);

    zaplata = 1;
    suma = 0;

    while (zaplata <= dni)
    {
        suma = suma + 1;
        zaplata++;
    }

    printf("Suma za %d dni wynosi %d\n", dni, suma);
    return 0;
}
