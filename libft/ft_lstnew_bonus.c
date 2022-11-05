/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:25:31 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/12/14 12:29:17 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(long long value)
{
	t_list	*new;

	new = malloc (sizeof(t_list));
	if (new == 0)
		return (0);
	new->value = value;
	new->next = 0;
	return (new);
}
