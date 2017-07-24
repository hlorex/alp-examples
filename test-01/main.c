#include <stdio.h>

int main ()
{
    int a = 124124, c;

    for (c = 0; a > 0; a = a / 10)
    {
        c++;
    }

    putc(0x30 + c, stdout);
    putc('\n', stdout);
}
