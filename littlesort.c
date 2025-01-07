/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   littlesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 09:48:59 by psoulie           #+#    #+#             */
/*   Updated: 2025/01/07 10:43:10 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pushi(t_list **a_stack, t_list **b_stack, int index, int mode)
{
	while ((*a_stack)->index != index)
	{
		if (mode == 0)
			rab(a_stack, 'a');
		else
			rrab(a_stack, 'a');
	}
	pa(a_stack, b_stack);
}

void	getnode(t_list **a_stack, t_list **b_stack, int index, int size)
{
	int		i;
	t_list	*iter;

	i = 0;
	iter = *a_stack;
	while (iter)
	{
		if (iter->index == index)
			break ;
		iter = iter->next;
		i++;
	}
	if (i < size / 2)
		pushi(a_stack, b_stack, index, 0);
	else
		pushi(a_stack, b_stack, index, 1);
}

void	findindex(t_list **stack)
{
	t_list	*save;
	t_list	*iter;
	int		index;

	save = *stack;
	while (save)
	{
		index = 0;
		iter = *stack;
		while (iter)
		{
			if (iter == save && !iter->next)
				break ;
			else if (iter == save)
				iter = iter->next;
			if (iter->content < save->content || 
				(iter->content == save->content && iter < save))
				index++;
			iter = iter->next;
		}
		save->index = index;
		save = save->next;
	}
}

void	littlesort(t_list **a_stack, t_list **b_stack)
{
	int		index;
	int		size;

	findindex(a_stack);
	index = 0;
	size = ft_lstsize(*a_stack);
	while (index < size - 1)
	{
		getnode(a_stack, b_stack, index, size);
		index++;
	}
	while (index)
	{
		pb(a_stack, b_stack);
		index--;
	}
}
