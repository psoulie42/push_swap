/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minisort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:49:14 by psoulie           #+#    #+#             */
/*   Updated: 2025/01/10 11:31:01 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	microsort(t_list **a)
{
	t_list	*first;
	first = *a;
	if (first->content > first->next->content)
		return (sab(a, 'a'));
}

void	minisort(t_list **a)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	first = *a;
	second = first->next;
	if (second->next)
	{
		third = second->next;
		third->next = NULL;
		if (first->content > second->content && first->content >= third->content)
			rab(a, 'a');
		else if (second->content >= first->content && second->content > third->content)
			rrab(a, 'a');
	}
	return (microsort(a));
}
