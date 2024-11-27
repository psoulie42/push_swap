/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:49:36 by psoulie           #+#    #+#             */
/*   Updated: 2024/11/27 17:04:38 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	first = *stack;
	if (!first || !first->next)
		return ;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	return ;
}

void	sa(t_list *a)
{
	swap(&a);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_list *b)
{
	swap(&b);
	ft_putstr_fd("sa\n", 1);
}

void	ss(t_list *a, t_list *b)
{
	swap(&a);
	swap(&b);
	ft_putstr_fd("ss\n", 1);
}
