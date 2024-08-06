
#include "libft.h"
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *new_list;
    t_list *new_obj;

    if (!lst || !f || !del)
        return(del);
    
    while (lst)
    {
        new_obj = ft_lstnew(f(lst->content));
        if (!new_obj)
        {
            ft_lstclear(&lst,del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_obj);
        lst = lst->next;
    }
    return (new_list);
}