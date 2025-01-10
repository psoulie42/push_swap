/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:43:03 by psoulie           #+#    #+#             */
/*   Updated: 2025/01/10 15:23:28 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	invalid(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

int	check(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i] && ac >= 3)
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				invalid();
			j++;
		}
		i++;
	}
	return (0);
}

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

void	freeall(t_list *stack, int spleet, char **tab)
{
	t_list	*freed;
	int		i;

	i = 1;
	while (stack)
	{
		freed = stack;
		stack = stack->next;
		free(freed);
	}
	if (spleet)
	{
		while (tab[i])
		{
			free(tab[i]);
			i++;
		}
		free(tab);
	}
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int		spleet;

	a = NULL;
	b = NULL;
	spleet = 0;
	if (ac == 1)
		return (0);
	if (ac == 2)
	{
		av = ft_split(av[1], ' ');
		ac = tablen(av);
		spleet = 1;
	}
	check(ac, av);
	init_stack(&a, ac, av);
	sort(ac, &a, &b);
	freeall(a, spleet, av);
	return (0);
}
