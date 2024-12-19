/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 09:00:31 by psoulie           #+#    #+#             */
/*   Updated: 2024/12/19 15:34:10 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	refis1(t_list **a, t_list **b, int ref)
{
	t_list	*iter;
	int		check;
	int		i;

	iter = *a;
	i = 0;
	while (1)
	{
		check = 0;
		while (iter)
		{
			if (iter->index & ref)
			{
				check = 1;
				b_pushthatone(a, b, iter->index, i);
			}
			iter = iter->next;
			i++;
		}
		if (!check)
			return ;
	}
}

void	refis0(t_list **a, t_list **b, int ref)
{
	t_list	*iter;
	int		check;
	int		i;

	iter = *b;
	i = 0;
	while (1)
	{
		check = 0;
		while (iter)
		{
			if (!(iter->index & ref))
			{
				check = 1;
				a_pushthatone(a, b, iter->index, i);
			}
			iter = iter->next;
			i++;
		}
		if (!check)
			return ;
	}
}

int	correctindices(t_list **a, t_list **b)
{
	int		i;
	t_list	*iter;

	iter = *a;
	if (iter)
		i = iter->index;
	while (iter)
	{
		if (iter->index != i)
			return (0);
		iter = iter->next;
		i++;
	}
	iter = *b;
	if (iter)
		i = iter->index;
	while (iter)
	{
		if (iter->index != i)
			return (0);
		iter = iter->next;
		i--;
	}
	return (1);
}

void	bigsort(t_list **a, t_list **b)
{
	int	ref;

	ref = 1;
	while (1)
	{
		if (correctindices(a, b))
		{
			pushall(a, b);
			break ;
		}
		refis1(a, b, ref);
		refis0(a, b, ref);
		ref <<= 1;
	}
}
