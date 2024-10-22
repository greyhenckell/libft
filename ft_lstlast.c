#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_lstlast(t_list *lst)
{
    t_list *p;
    p = lst;
    while (p->next != NULL)
        p = p->next;
    return p;
}

int main()
{
    t_list *src;
    src = malloc(sizeof(t_list));

    src->content = "hola";
    src->next = malloc(sizeof(t_list));

    src->next->content = "Franck!";
    src->next->next = NULL;

    t_list *test;
    test = ft_lstlast(src);
    printf("%s", (char *)test->content);
}