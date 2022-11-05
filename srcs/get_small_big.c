/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_small_big.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:35:13 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/12/14 20:06:24 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int	ft_sorted(t_list *a)
{
	while (a && a->next)
	{
		if (a->value > a->next->value)
			return (0);
		a = a->next;
	}
	ft_lstclear (&a, del);
	exit (0);
}

int	ft_get_small(t_list *a)
{
	int	i;

	i = a->value;
	while (a)
	{
		if (a->value < i)
			i = a->value;
		a = a->next;
	}
	return (i);
}

int	ft_get_big(t_list *a)
{
	int	i;

	i = a->value;
	while (a)
	{
		if (a->value > i)
			i = a->value;
		a = a->next;
	}
	return (i);
}
