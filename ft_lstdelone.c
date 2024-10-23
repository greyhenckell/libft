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

    new->content = content; // dynamic allocated
    new->next = NULL;

    return new;
}

void del(void *content)
{
    free(content); // memory content
}

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    del(lst->content);
    free(lst); // releasing node
}

int main()
{
    t_list *src = NULL;

    char *content = (char *)malloc(5 * sizeof(char));
    content[0] = 'a';
    content[1] = 'b';
    content[2] = 'c';
    printf("%s\n", content);
    src = ft_lstnew(content); // NODE 1

    ft_lstdelone(src, del);

    return 0;
}