#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char *p;

    p = (char *)s;

    i = 0;
    while (i < n)
    {
        if (p[i] == (char)c)
        {
            return p + i;
        }
        i++;
    }
    return NULL;
}
/*
int main()
{
    char input[] = "hola_como";
    char *s;
    s = memchr(input, 'c', 10);
    printf("%s\n", s);
}
*/