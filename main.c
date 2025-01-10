/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:43:03 by psoulie           #+#    #+#             */
/*   Updated: 2025/01/10 11:32:47 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(t_list **a, int ac, char **av)
{
	int		i;
	t_list	*save;

	i = 2;
	*a = ft_lstnew(ft_atoi(av[1]));
	save = *a;
	while (i < ac)
	{
		(*a)->next = ft_lstnew(ft_atoi(av[i]));
		*a = (*a)->next;
		i++;
	}
	(*a)->next = NULL;
	*a = save;
}

void	freeall(t_list *stack)
{
	t_list *freed;

	while (stack)
	{
		freed = stack;
		stack = stack->next;
		free(freed);
	}
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	check(ac, av);
	init_stack(&a, ac, av);
	if (ac <= 4)
		minisort(&a);
	else if (ac <= 50)
		littlesort(&a, &b);
	else
		bigsort(&a, &b);
	freeall(a);
	return (0);
}
