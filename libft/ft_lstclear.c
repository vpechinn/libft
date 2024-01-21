

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*new;

	if (!*lst || !del)
		return ;
	while ((*lst))
	{
		del((*lst)->content);
		new = *lst;
		*lst = new->next;
		free(new);
	}
	*lst = NULL;
}
