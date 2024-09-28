#include <stdio.h>
#include <bsd/string.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    char *pbig;
    char *plitle;

    pbig = (char *)big;
    plitle = (char *)little;

    i = 0;
    if (plitle[i] == '\0')
        return pbig;
    while (i < len)
    {
        if (pbig[i] == plitle[0])
            return pbig + i;
        i++;
    }
    return NULL;
}
/*
int main()
{
    const char *largestring = "Foo Bar paz";
    const char *smallstring = "";
    char *ptr;

    ptr = ft_strnstr(largestring, smallstring, sizeof(largestring));
    printf("%s\n", ptr);
}
*/