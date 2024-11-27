/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:34:53 by psoulie           #+#    #+#             */
/*   Updated: 2024/11/27 14:03:42 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check(t_list *a)
{
	t_list	*iter;
	
	while (a)
	{
		iter = a;
		while (iter)
		{
			iter = iter->next;
			if (iter->content == a->content)
			{
				ft_putstr_fd("Error\n", 3);
				exit(EXIT_FAILURE);
			}
		}
		/* if (a->content < -2147483648 || a->content > 2147483647)
		{
			ft_putstr_fd(3, "Error\n");
				exit(EXIT_FAILURE);
		} */
		a = a->next;
	}
	return ;
}
