
#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;
    t_list* curr;

    curr = lst;
    i = 0;
    while (curr != NULL)
    {
       curr = curr->next; 
       i++;
    }
    return (i);
}