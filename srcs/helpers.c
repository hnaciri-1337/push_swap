/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:40:04 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/12/14 18:48:43 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	ft_gnome_sort(int **array, int n)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < n)
	{
		if (i == 0)
			i++;
		if ((*array)[i] >= (*array)[i - 1])
			i++;
		else
		{
			tmp = (*array)[i - 1];
			(*array)[i - 1] = (*array)[i];
			(*array)[i] = tmp;
			i--;
		}
	}
}

int	ft_get_position(int value, int *array, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		if (value == array[i])
			return (i);
	return (0);
}

void	ft_change_values(t_list **a, int *array, int size)
{
	int		i;
	t_list	*s;

	s = *a;
	i = -1;
	while (++i < size)
	{
		s->value = ft_get_position (s->value, array, size);
		s = s->next;
	}
}

int	ft_get_bin(int number)
{
	int	i;

	i = 1;
	while (number >= 2)
	{
		i++;
		number /= 2;
	}
	return (i);
}
