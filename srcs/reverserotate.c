/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 19:46:26 by hnaciri-          #+#    #+#             */
/*   Updated: 2022/01/03 15:36:54 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	rra(t_list **a)
{
	t_list	*tmp;
	t_list	*last;
	t_list	*head;

	if (!a || !*a || !(*a)->next)
		return ;
	head = *a;
	while (head->next)
	{
		tmp = head;
		head = head->next;
	}
	last = tmp->next;
	tmp->next = NULL;
	last->next = *a;
	*a = last;
	ft_putendl_fd ("rra", 1);
}

void	rrb(t_list **b)
{
	t_list	*tmp;
	t_list	*last;
	t_list	*head;

	if (!b || !*b || !(*b)->next)
		return ;
	head = *b;
	while (head->next)
	{
		tmp = head;
		head = head->next;
	}
	last = tmp->next;
	tmp->next = NULL;
	last->next = *b;
	*b = last;
	ft_putendl_fd ("rrb", 1);
}

void	rrrh(t_list **h)
{
	t_list	*tmp;
	t_list	*last;
	t_list	*head;

	if (!h || !*h || !(*h)->next)
		return ;
	head = *h;
	while (head->next)
	{
		tmp = head;
		head = head->next;
	}
	last = tmp->next;
	tmp->next = NULL;
	last->next = *h;
	*h = last;
}

void	rrr(t_list **a, t_list **b)
{
	rrrh (a);
	rrrh (b);
	ft_putendl_fd ("rrr", 1);
}
