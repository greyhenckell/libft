// #include <stdio.h>
// #include <string.h>

int ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
    unsigned int i;
    char *p1;
    char *p2;

    p1 = (char *)s1;
    p2 = (char *)s2;
    i = 0;
    while (i < n)
    {
        if (p1[i] != p2[i])
            return (p1[i] - p2[i]);
        i++;
    }
    return (0);
}
/*
int main()
{
    printf("%d\n", ft_strncmp("hola", "", 6));
    printf("---------\n");
    printf("%d\n", strncmp("hola", "", 6));
}
*/