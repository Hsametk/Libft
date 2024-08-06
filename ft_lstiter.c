
#include "libft.h"
void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *curr;

    curr = lst;
    while (curr)
    {
        f(tmp->content);

        curr = curr->next;
    }
    
}