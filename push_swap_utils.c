/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:02:52 by psoulie           #+#    #+#             */
/*   Updated: 2025/01/10 15:26:53 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	correctindices(t_list *a)
{
	int	i;

	i = 0;
	while (a)
	{
		if (i != a->index)
			return (0);
		i++;
		a = a->next;
	}
	return (1);
}

void	sort(int ac, t_list **a, t_list **b)
{
	findindex(a);
	if (correctindices(*a))
		return ;
	if (ac <= 4)
		minisort(a);
	else if (ac <= 50)
		littlesort(a, b);
	else
		bigsort(a, b);
}

int	stacklen(t_list *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

int	tablen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}
