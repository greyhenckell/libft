//----Testing----
#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

void ft_putstr(char *src)
{
    write(1, src, ft_strlen(src));
}
/*
int main()
{
    ft_putstr("hola hiver!\n");
}
*/