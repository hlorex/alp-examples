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
    int a, c, d, i, x, k, q, tmp;
    char strnum[32];
    if (argc <= 1)
        return 1;

    a = str_to_int(argv[1]);

    for (tmp = a , i = 0 ; tmp ; strnum[i++] = '0' + tmp % 10 , tmp/=10)
    {
        putc('0' + tmp % 10, stdout);
    }
    //strrev(strnum);

    putc('\n', stdout);

    return 0;
}
