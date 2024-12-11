/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 09:48:59 by psoulie           #+#    #+#             */
/*   Updated: 2024/12/11 11:45:52 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stacklen(t_list *stack)
{
	int	i;

	i  = 0;
	while (stack->next)
		i++;
	return (i);
}

static int	nextval(t_list **stack)
{
	int			ref;
	static int	nextval;
	t_list		*iter;

	iter = *stack;
	ref = 0;
	while (iter->next)
	{
		if (iter->content > nextval && iter->content <= ref)
			ref = iter->content;
		iter = iter->next;
	}
	nextval = ref;
	return (nextval);
}

void	findindex(t_list **stack)
{
	int		ref;
	int		i;
	t_list	**save;

	save = stack;
	i  = 0;
	while (i < stacklen(*stack))
	{
		stack = save;
		ref = nextval(stack);
		while ((*stack)->next)
		{
			if ((*stack)->content == ref)
			{
				(*stack)->index = i;
				i++;
			}
			*stack = (*stack)->next;
		}
	}
	stack = save;
}

int	main(int ac, char **av)
{
	int		i;
	t_list	*stack;
	t_list	**save;

	i = 2;
	stack = ft_lstnew(ft_atoi(av[1]));
	*save = stack;
	while (i < ac - 1)
	{
		stack->next = ft_lstnew(ft_atoi(av[i]));
		stack = stack->next;
		i++;
	}
	stack->next = NULL;
	findindex(save);
	while (stack->next)
	{
		ft_printf("%i -> %i\n", stack->content, stack->index);
		stack = stack->next;
	}
	return (0);
}
