/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:43:03 by psoulie           #+#    #+#             */
/*   Updated: 2025/01/07 15:20:03 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	t_list	*stack;
	t_list	*stackb;
	t_list	*save;

	i = 2;
	stack = ft_lstnew(ft_atoi(av[1]));
	stackb = NULL;
	save = stack;
	while (i < ac)
	{
		stack->next = ft_lstnew(ft_atoi(av[i]));
		stack = stack->next;
		i++;
	}
	stack->next = NULL;
	stack = save;
	/* if (ac <= 4)
		minisort(&stack);
	else if (ac <= 50)
		littlesort(&stack, &stackb);
	else */
		bigsort(&stack, &stackb);/* 
	while (stack->next)
	{
		ft_printf("%i -> %i\n", stack->content, stack->index);
		stack = stack->next;
	}
	ft_printf("%i -> %i\n", stack->content, stack->index); */
	return (0);
}
