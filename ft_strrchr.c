#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    int i;
    int pos;

    char *p;
    p = (char *)s;

    i = 0;
    if (c == '\0')
        return "\0";
    while (s[i] != '\0')
    {
        if (s[i] == (char)c)
        {
            pos = i;
        }
        i++;
    }

    return p + pos;
}

int main()
{
    printf("%s\n", ft_strrchr("hola_b_a_como", '\0'));
}