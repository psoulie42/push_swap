/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:40:45 by psoulie           #+#    #+#             */
/*   Updated: 2024/10/11 13:53:26 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nl;
	t_list	*save;

	if (!lst || !del || !f)
		return (NULL);
	nl = ft_lstnew(f(lst->content));
	if (!nl)
		return (NULL);
	save = nl;
	lst = lst->next;
	while (lst)
	{
		nl->next = ft_lstnew(f(lst->content));
		if (!nl->next)
		{
			ft_lstclear(&save, del);
			return (NULL);
		}
		nl = nl->next;
		lst = lst->next;
	}
	nl->next = NULL;
	return (save);
}
