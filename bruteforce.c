/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bruteforce.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:49:14 by psoulie           #+#    #+#             */
/*   Updated: 2024/12/04 17:12:54 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	case1(t_list **a)
{
	sab(a, 'a');
	rrab(a, 'a');
}

static void	case2(t_list **a)
{
	rab(a, 'a');
	sab(a, 'a');
	rrab(a, 'a');
}

static char	*findorder(t_list **a)
{
	char	*order;
	int		t;
	int		i;
	int		swap;
	t_list	*tmp;

	i = 0;
	swap = 0;
	tmp = *a;
	order = malloc(4);
	order = "123";
	while (1)
	{
		tmp = *a;
		while (tmp->next)
		{
			if (tmp->next->content > tmp->content)
			{
				t = order[i];
				order[i] = order[i + 1];
				order[i + 1] = t;
				swap = 1;
			}
			tmp = tmp->next;
		}
		if (!swap)
			break ;
	}
	return (order);
}

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
	char	*order;

	first = *a;
	second = first->next;
	if (second->next == NULL)
		return (microsort(a));
	third = second->next;
	third->next = NULL;
	order = findorder(a);
	if (ft_strncmp(order, "123", 3) == 0)
		return (case1(a));
	if (ft_strncmp(order, "312", 3) == 0)
		return (rab(a, 'a'));
	if (ft_strncmp(order, "213", 3) == 0)
		return (sab(a, 'a'));
	if (ft_strncmp(order, "231", 3) == 0)
		return (rrab(a, 'a'));
	if (ft_strncmp(order, "132", 3) == 0)
		return (case2(a));
}

int	main()
{
	t_list	*stack = ft_lstnew(1);
	
	stack->next = ft_lstnew(2);
	stack->next->next = ft_lstnew(3);
	stack->next->next->next = NULL;
	minisort(&stack);
	while (stack->next)
	{
		ft_printf("%d\n", stack->content);
		stack = stack->next;
	}
	ft_printf("%d\n", stack->content);
}
