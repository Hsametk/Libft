
#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    /* use the del function on the element's content */
    del(lst->content);
    /* free the element */
    free(lst);
}