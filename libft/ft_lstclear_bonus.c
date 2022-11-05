/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:41:36 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/12/14 12:23:19 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(int))
{
	t_list	*begin;
	t_list	*next;

	if (lst)
	{
		begin = *lst;
		while (begin)
		{
			next = begin->next;
			ft_lstdelone(begin, del);
			begin = next;
		}
	}
	*lst = 0;
}
