#include <stdio.h>

int d = 1;

int main ()
{
    putc(d + '0', stdout);
    putc('\n', stdout);

    return 0;
}
