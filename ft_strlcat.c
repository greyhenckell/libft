#include <stdio.h>
#include <bsd/string.h>

int ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t d;
    int s;

    d = 0;
    while (dst[d] != '\0')
    {
        d++;
    }
    s = 0;
    while (src[s] != '\0')
    {
        s++;
    }

    if (size <= d)
    {
        return (size + s);
    }

    s = 0;
    while (d < size)
    {
        dst[d] = src[s];
        s++;
        d++;
    }
    dst[d - 1] = '\0';
    return (d + s + 1);
}
/*
int main()
{
    char input[] = "como_es";
    char buffer[20] = "hola_";
    int r = ft_strlcat(buffer, input, 8);
    printf("%s\n", buffer);
    printf("%d\n", r);
}*/