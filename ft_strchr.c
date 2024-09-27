#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i;
    char *p;
    p = (char *)s;

    i = 0;
    if (c == '\0')
        return "\0";
    while (s[i] != '\0')
    {
        if (s[i] == (char)c)
        {
            return (p + i);
        }
        i++;
    }
    return NULL;
}

int main()
{
    printf("%s\n", ft_strchr("hola", 'b'));
}