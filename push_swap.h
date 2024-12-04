/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:21:01 by psoulie           #+#    #+#             */
/*   Updated: 2024/12/04 17:07:21 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

void	check(t_list *a);
void	swap(t_list **stack);
void	sab(t_list **a, char c);
void	ss(t_list **a, t_list **b);
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

#endif
