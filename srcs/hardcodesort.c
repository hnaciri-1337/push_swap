/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hardcodesort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:28:46 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/12/18 16:51:49 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	ft_sort_two_elements(t_list **a)
{
	if ((*a)->value < (*a)->next->value)
		return ;
	sa (a);
}

void	ft_sort_three_elements(t_list **a)
{
	int	fst;
	int	sec;
	int	lst;

	fst = (*a)->value;
	sec = (*a)->next->value;
	lst = (*a)->next->next->value;
	if (fst > sec && fst < lst)
		sa (a);
	else if (fst > sec && fst > lst && sec < lst)
		ra (a);
	else if (fst < sec && fst > lst && sec > lst)
		rra (a);
	else if (fst > sec && fst > lst && sec > lst)
	{
		sa (a);
		rra (a);
	}
	else if (fst < sec && fst < lst && sec > lst)
	{
		sa(a);
		ra(a);
	}
}
