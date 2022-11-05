/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 17:31:48 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/12/18 17:01:19 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*temp;

	if (b && *b)
	{
		temp = *b;
		*b = (*b)->next;
		temp->next = NULL;
		ft_lstadd_front (a, temp);
	}
}

void	pb(t_list **a, t_list **b)
{
	t_list	*temp;

	if (a && *a)
	{
		temp = *a;
		*a = (*a)->next;
		temp->next = NULL;
		ft_lstadd_front (b, temp);
	}
}
