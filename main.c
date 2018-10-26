#include <stdio.h>

int main() {
    int znak = 0;

    znak = 0;

    while (znak < 256)
    {
        printf("wartosc calkowita : %d,\t kod ASCII %c\n", znak, znak);

        znak++;

    }
    return 0;
}