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

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst; // *lst = @list
    *lst = new;       // head point to new
}

int main()
{
    t_list *src = NULL;
    src = (t_list *)malloc(sizeof(t_list));

    src->content = "como";
    src->next = (t_list *)malloc(sizeof(t_list));

    src->next->content = "estas";
    src->next->next = NULL;

    ft_lstadd_front(&src, ft_lstnew("hola"));

    while (src != NULL)
    {
        printf("%s ", (char *)src->content);
        src = src->next;
    }

    free(src);
}