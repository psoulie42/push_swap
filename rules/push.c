/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:39:21 by psoulie           #+#    #+#             */
/*   Updated: 2024/12/04 17:05:57 by psoulie          ###   ########.fr       */
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
	push(a, b);
	ft_printf("pa\n");
}

void	pb(t_list **a, t_list **b)
{
	push(b, a);
	ft_printf("pb\n");
}

/* int main()
{
	t_list *stack_a;
	t_list *stack_b;
	t_list *first = ft_lstnew(1);
	t_list *second = ft_lstnew(2);

    stack_a = first;
	stack_b = NULL;
    first->next = NULL;
    second->next = NULL;

	printf("Before push: head a = %i, head b = %s\n", stack_a->content, stack_b ? "Nope" : "NULL");
	push(&stack_a, &stack_b);
	printf("After push: head a = %s, head b = %i\n", stack_a ? "nope" : "NULL", stack_b->content);

    return 0;
} */