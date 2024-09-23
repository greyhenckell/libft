#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{

    char *d;
    char *s;
    size_t i;

    s = (char *)src;
    d = (char *)dest;

    if (dest > src)
    {
        // printf("here");
        i = n;
        while (i > 0)
        {
            i--;
            d[i] = s[i];
        }
    }

    else
    {

        i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return d;
}

int main()
{
    char str[30] = "hola como estas!!!";

    printf("dest: %s\nsource: %s\n", str + 10, str + 5);
    // memmove(str + 10, str + 5, 10);
    ft_memmove(str + 10, str + 5, 10);
    printf("new: %s\n", str);
}