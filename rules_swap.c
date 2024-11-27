/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:49:36 by psoulie           #+#    #+#             */
/*   Updated: 2024/11/27 10:28:52 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*sa(t_list *first)
{
	t_list	*swap;

	swap = first;
	first = first->next;
	swap->next = first;
	return (swap);
}

void main()
{
	t_list *first = ft_lstnew(1);
	t_list *second = ft_lstnew(2);

	ft_lstadd_back(&first, second);
	sa(first);
	printf("%d%d\n", first->content, second->content);
}