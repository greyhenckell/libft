#include <stdio.h>
#include <bsd/string.h>

int ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
    while (i < size)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (i - 1);
}

int main()
{
    char input[] = "hola_es";
    char buf[20];
    int r = ft_strlcpy(buf, input, 8);
    printf("%s\n", buf);
    printf("%d\n", r);
}