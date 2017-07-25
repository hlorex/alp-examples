#include <stdio.h>
#include <string.h>

int str_to_int(const char *str)
{
    int a, i, x, len = strlen(str);
    for (a = 0, i = len - 1, x = 1; i >= 0; x *= 10, i--)
    {
        a = a + (str[i] - 0x30) * x;
    }
    return a;
}

int main (int argc, char *argv[])
{
    int a, c, d, i, x, k, q;

    if (argc <= 1)
        return 1;

    a = str_to_int(argv[1]);
    q = a;

    for (k = 1, c = 0; a > 0; a = a / 10)
    {
        k *= 10;
        c++;
    }
    k = k / 10;
    printf("%d, %d, %d\n", c, k, q);
    for (d = 0; c > 0; k/=10)
    {
        d = q / k;
        q = q % k;
        c--;
        putc(0x30 + d, stdout);
        putc('\n', stdout);
    }

    putc('\n', stdout);

    return 0;
}
