/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_code.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 09:47:47 by psoulie           #+#    #+#             */
/*   Updated: 2025/01/10 15:28:21 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	first = *stack;
	last = first;
	while (last->next)
		last = last->next;
	*stack = first->next;
	last->next = first;
	first->next = NULL;
	return ;
}

void	revrotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	first = *stack;
	last = first;
	while (last->next->next)
		last = last->next;
	*stack = last->next;
	last->next->next = first;
	last->next = NULL;
	return ;
}
