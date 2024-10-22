#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_lstnew(void *content)
{
    t_list *new;

    new = NULL;

    new = (t_list *)malloc(sizeof(t_list));
    if (new == NULL)
        return NULL;

    new->content = content;
    new->next = NULL;

    return new;
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *p;
    p = *lst;
    while (p->next != NULL)
        p = p->next;

    p->next = new;
}

int main()
{
    t_list *src;
    src = malloc(sizeof(t_list));

    src->content = "hola";
    src->next = malloc(sizeof(t_list));

    src->next->content = "Franck";
    src->next->next = NULL;

    ft_lstadd_back(&src, ft_lstnew(", Welcome to Hive!"));

    // test
    while (src != NULL)
    {
        printf("%s ", (char *)src->content);
        src = src->next;
    }
    printf("\n");
    free(src);
}