/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:49:36 by psoulie           #+#    #+#             */
/*   Updated: 2024/12/04 17:05:52 by psoulie          ###   ########.fr       */
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

void	sab(t_list **a, char c)
{
	swap(a);
	if (c == 'a')
		ft_printf("sa\n");
	else
		ft_printf("sb\n");
}

void	ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
