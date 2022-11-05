/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkargs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:27:19 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/12/14 18:37:15 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	del(int a)
{
	a = 0;
}

void	ft_check_args(char *s)
{
	if ((*s == '-' || *s == '+') && *(s + 1))
		s++;
	while (*s)
	{
		if (*s > '9' || *s < '0')
		{
			ft_putendl_fd ("Error", 2);
			exit (1);
		}
		s++;
	}
}

void	ft_check_double(int ac, char **av, int i)
{
	int	j;
	int	value;
	int	value1;

	while (++i < ac - 1)
	{
		value = ft_atoi (av[i + 1]);
		j = i;
		while (++j < ac - 1)
		{
			value1 = ft_atoi (av[j + 1]);
			if (value == value1)
			{
				ft_putendl_fd ("Error", 2);
				exit (1);
			}
		}
	}
}

void	ft_check_max_min(t_list **a)
{
	t_list	*s;

	s = *a;
	while (s)
	{
		if (s->value > INT_MAX || s->value < INT_MIN)
		{
			ft_lstclear (a, del);
			ft_putendl_fd ("Error", 2);
			exit (1);
		}
		s = s->next;
	}
}
