#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *ft_memset(void *str, int c, size_t n)
{
    // strcat
    char *p;
    size_t i;
    // unsigned char ci = c;
    p = (char *)str;

    i = 0;
    while (i < n)
    {
        p[i] = c;
        i++;
    }

    return str;
}
/*
int main()
{
    // char s[10];
    char t[10];

    // memset(s, 65, 12);
    ft_memset(t, 0, 5);
    ft_memset(t + 5, 97, 5);

    // printf("%s\n", s);
    printf("--------------\n");
    printf("%s\n", t);
}
*/
