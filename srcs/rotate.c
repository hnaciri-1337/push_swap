/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 18:07:50 by hnaciri-          #+#    #+#             */
/*   Updated: 2022/01/03 15:33:10 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	ra(t_list **a)
{
	t_list	*temp;
	t_list	*temp1;

	if (!a || !*a || !(*a)->next)
		return ;
	temp1 = ft_lstlast (*a);
	temp = *a;
	*a = (*a)->next;
	temp->next = 0;
	temp1->next = temp;
	ft_putendl_fd ("ra", 1);
}

void	rb(t_list **b)
{
	t_list	*temp;
	t_list	*temp1;

	if (!b || !*b || !(*b)->next)
		return ;
	temp1 = ft_lstlast (*b);
	temp = *b;
	*b = (*b)->next;
	temp->next = 0;
	temp1->next = temp;
	ft_putendl_fd ("rb", 1);
}

void	rr(t_list **a, t_list **b)
{
	t_list	*temp;
	t_list	*temp1;

	if (!a || !*a || !(*a)->next)
		return ;
	temp1 = ft_lstlast (*a);
	temp = *a;
	*a = (*a)->next;
	temp->next = 0;
	temp1->next = temp;
	if (!b || !*b || !(*b)->next)
		return ;
	temp1 = ft_lstlast (*b);
	temp = *b;
	*b = (*b)->next;
	temp->next = 0;
	temp1->next = temp;
	ft_putendl_fd ("rr", 1);
}
