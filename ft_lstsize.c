#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int ft_lstsize(t_list *lst)
{
    t_list *ind;
    int i = 0;
    ind = lst;
    while (ind != NULL)
    {
        ind = ind->next;
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