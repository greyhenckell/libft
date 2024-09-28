#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
// sizeof smallest array
{
    size_t i;
    char *ps1;
    char *ps2;

    ps1 = (char *)s1;
    ps2 = (char *)s2;

    i = 0;
    while ((i < n))
    {

        if (ps1[i] != ps2[i])
            return (ps1[i] - ps2[i]);

        i++;
    }
    return 0;
}
/*
typedef struct
{
    int age;
    char name[10];
} Person;

int main()
{
    char s1[10] = "hola como";
    char s2[10] = "hola esta";
    printf("%d\n", ft_memcmp(s1, s2, 9));

    Person p1 = {33, "Lola"};
    Person p2 = {33, "Lole"};
    printf("%d\n", ft_memcmp(&p1, &p2, sizeof(Person)));
}*/