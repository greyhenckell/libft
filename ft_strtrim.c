#include <stdio.h>
#include <stdlib.h>

int ft_length(char *s)
{
    int i = 0;

    while (s[i] != '\0')
        i++;
    return i;
}

int ft_checker(char *c, char *set)
{
    int i = 0;
    while (set[i] != '\0')
    {
        if (c[i] == set[i])
        {
            i++;
        }
        else
            return 0;
    }
    return i;
}

int ft_checker_r(char *c, char *set, int len)
{

    int i = ft_length(set);
    int counter = 0;

    while (i > 0)
    {
        len--;
        i--;
        if (c[len] == set[i])
            counter++;
        else
            return 0;
    }
    return counter;
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *p1 = (char *)s1;
    char *pset = (char *)set;
    char *out;

    int c = 0;
    int i = 0;
    int y = 0;

    int lenstr = ft_length(p1);

    out = (char *)malloc((lenstr + 1) * sizeof(char));
    if (out == NULL)
        return NULL;

    while (p1[i] != '\0')
    {
        c = ft_checker(p1 + i, pset);
        if (c > 0)
            i = c + i;
        else
            break;
    }
    // update pointer, len string,
    p1 = p1 + i;
    lenstr = ft_length(p1);
    y = lenstr;
    i = 0;

    // use recursive function
    int r = ft_checker_r(p1, pset, lenstr);
    if (r == ft_length(pset))
    {
        lenstr = lenstr - r;
        r += ft_checker_r(p1, pset, lenstr);
    }
    y = y - r;
    while (i < y)
    {
        out[i] = p1[i];
        i++;
    }
    out[i] = '\0';
    return out;
}
/*
int main()
{
    printf("%s\n", ft_strtrim("++----hola--++--", "++--")); //---ho-la
}
*/