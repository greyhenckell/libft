// #include <stdio.h>

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    return (0);
}
/*
int main()
{
    char s[] = "h123ola";
    int i = 0;
    int d;
    while (s[i] != '\0')
    {
        d = s[i];
        printf("%d\n", d);
        printf("%c-> %d\n", s[i], ft_isalpha(d));
        i++;
    }
}
*/