/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:17:50 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/12/18 16:56:09 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	sa(t_list **stack_a)
{
	int	tmp;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	tmp = (*stack_a)->next->value;
	(*stack_a)->next->value = (*stack_a)->value;
	(*stack_a)->value = tmp;
}

void	sb(t_list **stack_b)
{
	int	tmp;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	tmp = (*stack_b)->next->value;
	(*stack_b)->next->value = (*stack_b)->value;
	(*stack_b)->value = tmp;
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	int	tmp;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	tmp = (*stack_a)->next->value;
	(*stack_a)->next->value = (*stack_a)->value;
	(*stack_a)->value = tmp;
	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	tmp = (*stack_b)->next->value;
	(*stack_b)->next->value = (*stack_b)->value;
	(*stack_b)->value = tmp;
}
