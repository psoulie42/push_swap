/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:34:53 by psoulie           #+#    #+#             */
/*   Updated: 2024/11/26 15:03:34 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check(t_list a)
{
	t_list	iter;
	
	while (a)
	{
		iter = a;
		while (iter)
		{
			iter = iter->next;
			if (iter->content == a->content)
			{
				ft_putstr_fd(3, "Error\n");
				exit(EXIT_FAILURE);
			}
		}
		/* if (a->content != int)
		{
			ft_putstr_fd(3, "Error\n");
				exit(EXIT_FAILURE);
		} */
	}
}