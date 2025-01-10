/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:39:21 by psoulie           #+#    #+#             */
/*   Updated: 2025/01/10 15:28:00 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	firstpush(t_list **stack1, t_list **stack2)
{
	t_list	*head1;

	head1 = *stack1;
	*stack1 = head1->next;
	head1->next = NULL;
	*stack2 = head1;
}

void	push(t_list **stack1, t_list **stack2)
{
	t_list	*head1;
	t_list	*head2;

	if (!stack2)
		return (firstpush(stack1, stack2));
	head1 = *stack1;
	if (!head1)
		return ;
	head2 = *stack2;
	if (head1->next)
		*stack1 = head1->next;
	else
		*stack1 = NULL;
	head1->next = head2;
	*stack2 = head1;
}

void	pa(t_list **a, t_list **b)
{
	push(b, a);
	ft_printf("pa\n");
}

void	pb(t_list **a, t_list **b)
{
	push(a, b);
	ft_printf("pb\n");
}
