#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
    int a = 124124, c, i, x;

    if (argc <= 1)
        return 1;

    char *str = argv[1];
    int len = strlen(str);
    for (a = 0, i = len - 1, x = 1; i > 0; x *= 10, i--)
    {
        a = a + str[i] * x;
        putc(str[i], stdout);
    }
    putc('\n', stdout);

    for (c = 0; a > 0; a = a / 10)
    {
        c++;
    }

    putc(0x30 + c, stdout);
    putc('\n', stdout);

    return 0;
}
