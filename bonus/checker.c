/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:08:16 by hnaciri-          #+#    #+#             */
/*   Updated: 2022/01/03 15:30:28 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

static int	ft_sorte(t_list *a)
{
	while (a && a->next)
	{
		if (a->value > a->next->value)
			return (0);
		a = a->next;
	}
	return (1);
}

int	ft_if_else(t_list **a, t_list **b, char *line)
{
	if (!ft_strcmp(line, "sa\n"))
		sa (a);
	else if (!ft_strcmp(line, "sb\n"))
		sb (a);
	else if (!ft_strcmp(line, "ss\n"))
		ss (a, b);
	else if (!ft_strcmp(line, "ra\n"))
		ra (a);
	else if (!ft_strcmp(line, "rb\n"))
		rb (b);
	else if (!ft_strcmp(line, "rr\n"))
		rr (a, b);
	else if (!ft_strcmp(line, "rra\n"))
		rra (a);
	else if (!ft_strcmp(line, "rrb\n"))
		rrb (b);
	else if (!ft_strcmp(line, "rrr\n"))
		rrr (a, b);
	else if (!ft_strcmp(line, "pa\n"))
		pa (a, b);
	else if (!ft_strcmp(line, "pb\n"))
		pb (a, b);
	else
		return (0);
	return (1);
}

void	ft_sort(t_list **a, t_list **b)
{
	char	*line;

	line = get_next_line (0);
	while (line)
	{
		if (!ft_if_else (a, b, line))
		{
			free (line);
			ft_putendl_fd ("\e[0;31mError", 2);
			exit (0);
		}
		free (line);
		line = get_next_line (0);
	}
	free (line);
	if (ft_sorte(*a) && !*b)
		ft_putendl_fd ("\e[;32mOK", 1);
	else
		ft_putendl_fd ("\e[;31mKO", 1);
	ft_lstclear (a, del);
	ft_lstclear (b, del);
}

int	main(int ac, char **av)
{
	int		i;
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac < 2)
		return (0);
	stack_b = 0;
	i = -1;
	while (++i < ac -1)
		ft_check_args(av[i + 1]);
	ft_check_double (ac, av, -1);
	i = -1;
	while (++i < ac - 1)
		ft_lstadd_back (&stack_a, ft_lstnew(ft_atoi(av[i + 1])));
	ft_check_max_min (&stack_a);
	ft_sort (&stack_a, &stack_b);
	return (0);
}
