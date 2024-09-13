#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *p;
    char *s;

    p = (char *)dest;
    s = (char *)src;

    i = 0;
    while (i < n)
    {
        p[i] = s[i];
        i++;
    }
    return dest;
}

int main()
{
    char s[12] = "hello world";
    char d[10];
    ft_memcpy(d, s, 2);

    printf("%s", d);
}