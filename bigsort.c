/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 09:00:31 by psoulie           #+#    #+#             */
/*   Updated: 2025/01/10 15:04:21 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	findbits(int bigindex)
{
	int	bigbit;

	bigbit = 0;
	while (bigindex > 0)
	{
		bigindex >>= 1;
		bigbit++;
	}
	return (bigbit);
}

int	findbiggest(t_list *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (stack->index > i)
			i = stack->index;
		stack = stack->next;
	}
	return (i);
}

void	refis1(t_list **a, t_list **b, int ref)
{
	int	i;

	i = stacklen(*b);
	while (*b && i--)
	{
		if ((*b)->index & ref)
			pa(a, b);
		else
			rab(b, 'b');
	}
}

void	refis0(t_list **a, t_list **b, int ref)
{
	int	i;

	i = stacklen(*a);
	while (*a && i--)
	{
		if ((*a)->index & ref)
			rab(a, 'a');
		else
			pb(a, b);
	}
}

void	bigsort(t_list **a, t_list **b)
{
	int	ref;
	int	bigindex;
	int	bigbit;
	int	i;

	i = 0;
	ref = 1;
	bigindex = findbiggest(*a);
	bigbit = findbits(bigindex);
	while (i < bigbit)
	{
		refis1(a, b, ref);
		refis0(a, b, ref);
		ref <<= 1;
		i++;
	}
	pushall(a, b);
}
