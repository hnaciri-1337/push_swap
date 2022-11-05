/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:41:37 by hnaciri-          #+#    #+#             */
/*   Updated: 2022/01/03 15:32:20 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	ft_sort_small(t_list **stack_a, t_list **stack_b, int size)
{
	int	j;
	int	i;

	i = 0;
	j = size;
	while (size > 3)
	{
		if (j == size)
			ft_sorted (*stack_a);
		if ((*stack_a)->value == ft_get_small (*stack_a))
		{
			pb (stack_a, stack_b);
			size--;
			i++;
		}
		else
			ra (stack_a);
	}
	if (size == 3)
		ft_sort_three_elements (stack_a);
	else if (size == 2)
		ft_sort_two_elements (stack_a);
	while (i--)
		pa (stack_a, stack_b);
}

void	ft_do(t_list **a, t_list **b, int size)
{
	int		i;
	int		n;
	int		j;

	i = 1;
	n = ft_get_bin (ft_get_big (*a));
	while (n--)
	{
		j = -1;
		while (++j < size)
		{
			if (((*a)->value & i) == 0)
				pb (a, b);
			else
				ra (a);
		}
		while (*b)
			pa (a, b);
		i *= 2;
	}
}

void	ft_sort_big(t_list **a, t_list **b, int size)
{
	int		*array;
	t_list	*s;
	int		i;

	i = -1;
	s = *a;
	array = ft_calloc (sizeof(int), size);
	while (++i < size)
	{
		array[i] = s->value;
		s = s->next;
	}
	ft_gnome_sort (&array, size);
	ft_change_values (a, array, size);
	free (array);
	ft_do (a, b, size);
}

int	main(int ac, char **av)
{
	int		i;
	t_list	*stack_a;
	t_list	*stack_b;

	stack_b = 0;
	i = -1;
	while (++i < ac -1)
		ft_check_args(av[i + 1]);
	if (ac < 3)
		return (0);
	ft_check_double (ac, av, -1);
	i = -1;
	while (++i < ac - 1)
		ft_lstadd_back (&stack_a, ft_lstnew(ft_atoi(av[i + 1])));
	ft_check_max_min (&stack_a);
	if (ft_sorted(stack_a))
		return (0);
	if (ft_lstsize(stack_a) < 7)
		ft_sort_small (&stack_a, &stack_b, ft_lstsize (stack_a));
	else
		ft_sort_big (&stack_a, &stack_b, ft_lstsize (stack_a));
	ft_lstclear (&stack_a, del);
	ft_lstclear (&stack_b, del);
	return (0);
}
