/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rules.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:03:11 by psoulie           #+#    #+#             */
/*   Updated: 2025/01/07 10:27:26 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rab(t_list **stack, char c)
{
	rotate(stack);
	if (c == 'a')
		ft_printf("ra\n");
	else
		ft_printf("rb\n");
}

void	rrab(t_list **stack, char c)
{
	revrotate(stack);
	if (c == 'a')
		ft_printf("rra\n");
	else
		ft_printf("rrb\n");
}

void	rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}

void	rrr(t_list **a, t_list **b)
{
	revrotate(a);
	revrotate(b);
	ft_printf("rrr\n");
}
