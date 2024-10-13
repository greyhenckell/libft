#include <stdlib.h>

int counter(char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char *ft_strdup(char *src)
{
    char *str_p;

    str_p = (char *)malloc((counter(src) + 1) * sizeof(char));
    if (str_p)
        ft_strcpy(str_p, src);
    return (str_p);
}
/*
int	main(void)
{
    char source[] = "hola";
    char *copy = ft_strdup(source);
    printf("%s",copy);
    return (0);
}*/