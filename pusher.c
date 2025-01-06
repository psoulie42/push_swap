/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pusher.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:13:00 by psoulie           #+#    #+#             */
/*   Updated: 2024/12/19 15:34:29 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_pushthatone(t_list **a, t_list **b, int index, int i)
{
	if (*a)
	{
		while ((*a)->index != index)
		{
			if (i <= ft_lstsize(*a) / 2)
				rab(a, 'a');
			else	
				rrab(a, 'a');
		}
		pa(a, b);
	}
}

void	b_pushthatone(t_list **a, t_list **b, int index, int i)
{
	if (*b)
	{
		while ((*b)->index != index)
		{
			if (i <= ft_lstsize(*b) / 2)
				rab(b, 'b');
			else	
				rrab(b, 'b');
		}
		pb(a, b);
	}
}

void	pushall(t_list **a, t_list **b)
{
	while (*b)
		pb(a, b);
}
