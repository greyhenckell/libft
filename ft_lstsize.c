#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int ft_lstsize(t_list *lst)
{
    int i = 0;
    while (lst != NULL)
    {
        lst = lst->next;
        i++;
    }
    return i;
}

int main()
{
    t_list *p = NULL;

    p = malloc(sizeof(t_list));
    p->content = "hola";
    p->next = malloc(sizeof(t_list));

    p->next->content = "como";
    p->next->next = malloc(sizeof(t_list));

    p->next->next->content = "estas";
    p->next->next->next = NULL;

    printf("%d\n", ft_lstsize(p));

    free(p);
}