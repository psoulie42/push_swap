/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 09:47:47 by psoulie           #+#    #+#             */
/*   Updated: 2024/11/28 11:08:40 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	first = *stack;
	last = first;
	while (last->next)
		last = last->next;
	*stack = first->next;
	last->next = first;
	first->next = NULL;
	return ;
}

void	revrotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	first = *stack;
	last = first;
	while (last->next->next)
		last = last->next;
	*stack = last->next;
	last->next->next = first;
	last->next = NULL;
	return ;
}

/* int main()
{
	t_list *stack_a;
	t_list *stack_b;
	t_list *first = ft_lstnew(1);
	t_list *second = ft_lstnew(2);
	t_list *third = ft_lstnew(3);

    stack_a = first;
	stack_b = NULL;
    first->next = second;
    second->next = third;
	third->next = NULL;

	printf("Before rotate: head a = %i, last a = %i\n", first->content, third->content);
	revrotate(&stack_a);
	printf("After rotate: head a = %i, ", stack_a->content);
	while(stack_a->next)
		stack_a = stack_a->next;
	printf("last a = %i\n", stack_a->content);

    return 0;
} */