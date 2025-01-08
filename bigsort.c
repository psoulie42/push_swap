/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 09:00:31 by psoulie           #+#    #+#             */
/*   Updated: 2025/01/08 17:16:02 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	refis1(t_list **a, t_list **b, int ref)
{
	t_list	*iter;

	while (*b)
	{
		iter = *b;
		while (iter && ((iter->index >> ref) & 0))
			iter = iter->next;
		if (!iter)
			return ;
		if (*b && iter)
		{
			while ((*b)->index != iter->index)
				rab(b, 'b');
			pa(a, b);
		}
	}
}

void	refis0(t_list **a, t_list **b, int ref)
{
	t_list	*iter;

	while (*a)
	{
		iter = *a;
		while (iter && ((iter->index >> ref) & 1))
			iter = iter->next;
		if (!iter)
			return ;
		if (*a && iter)
		{
			while ((*a)->index != iter->index)
				rab(a, 'a');
			pb(a, b);
		}
	}
}

void	bigsort(t_list **a, t_list **b)
{
	int	i;
	int	j;
	int	bigindex;
	int	bigbit;

	i = 0;
	findindex(a);
	bigindex = findbiggest(*a);
	bigbit = findbits(bigindex);
	while (i <= bigbit)
	{
		j = -1;
		while (++j <= bigindex)
			refis1(a, b, i);
		j = -1;
		while (++j <= bigindex)
			refis0(a, b, i);
		i++;
	}
	pushall(a, b);
}
