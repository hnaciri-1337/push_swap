/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 17:11:11 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/12/14 18:41:43 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "../libft/libft.h"

void	sa(t_list **lst);
void	sb(t_list **lst);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **a);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	ft_check_args(char *s);
void	ft_check_double(int ac, char **av, int i);
int		ft_sorted(t_list *a);
int		ft_get_small(t_list *a);
int		ft_get_big(t_list *a);
void	ft_sort_two_elements(t_list **a);
void	ft_sort_three_elements(t_list **a);
void	del(int a);
void	ft_check_max_min(t_list **a);
void	ft_gnome_sort(int	**array, int n);
int		ft_get_position(int value, int *array, int size);
void	ft_change_values(t_list **a, int *array, int size);
int		ft_get_bin(int number);

#endif