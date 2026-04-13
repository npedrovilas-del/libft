#include "libft.h"
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
   
    void  *content_new;
    t_list  *new_node;
    t_list  *new2;

    new2 = NULL;
    while(lst != NULL)
    {
        content_new = f(lst->content);
        new_node = ft_lstnew(content_new);
        ft_lstadd_back(&new2, new_node);
        lst = lst->next;
    }
    return(new2);
}