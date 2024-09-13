#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ft_bzero(void *str, size_t n)
{
    char *p;
    size_t i;

    p = (char *)str;
    i = 0;
    while (i < n)
    {
        p[i] = '\0';
        i++;
    }

    return;
}

/*
int main()
{
    char buffer[10];
    // filling
    int i = 0;
    while (i < 10)
    {
        buffer[i] = 'A' + i;
        i++;
    }

    printf("%s\n", buffer);


    ft_bzero(buffer + 3, 4);
    printf("%s\n", buffer);
}
*/
