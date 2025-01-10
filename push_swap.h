/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:21:01 by psoulie           #+#    #+#             */
/*   Updated: 2025/01/10 15:15:42 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

int		stacklen(t_list *stack);
int		tablen(char **tab);
int		correctindices(t_list *a);
int		findbiggest(t_list *stack);
int		findbits(int fatdec);
int		check(int ac, char **av);
void	swap(t_list **stack);
void	sab(t_list **a, char c);
void	ss(t_list **a, t_list **b);
void	firstpush(t_list **stack1, t_list **stack2);
void	push(t_list **stack_a, t_list **stack_b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	rotate(t_list **stack);
void	revrotate(t_list **stack);
void	rab(t_list **stack, char c);
void	rrab(t_list **stack, char c);
void	rr(t_list **a, t_list **b);
void	rrr(t_list **a, t_list **b);
void	minisort(t_list **a);
void	microsort(t_list **a);
void	findindex(t_list **stack);
void	littlesort(t_list **a_stack, t_list **b_stack);
void	getnode(t_list **a_stack, t_list **b_stack, int index);
void	pushi(t_list **a_stack, t_list **b_stack, int index, int mode);
void	bigsort(t_list **a, t_list **b);
void	refis0(t_list **a, t_list **b, int ref);
void	refis1(t_list **a, t_list **b, int ref);
void	a_pushthatone(t_list **a, t_list **b, int index, int i);
void	b_pushthatone(t_list **a, t_list **b, int index, int i);
void	pushall(t_list **a, t_list **b);
void	freeall(t_list *stack, int spleet, char **tab);
void	invalid(void);
void	sort(int ac, t_list **a, t_list **b);

#endif
