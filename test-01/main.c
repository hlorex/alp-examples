#include <stdio.h>


int main ()
{
    int a = 115, c, d, e, f, g;

    c = a / 100; // c = 1
    d = a % 100; // d = 15
    e = d / 10;  // e = 1
    f = d % 10;  // f = 5

    printf("Сотни:");
    putc(0x30 + c, stdout);
    putc('\n', stdout);
    printf("Десятки:");
    putc(0x30 + e, stdout);
    putc('\n', stdout);
    printf("Единицы:");
    putc(0x30 + f, stdout);
    putc('\n', stdout);
}
