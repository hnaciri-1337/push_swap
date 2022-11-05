/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:08:01 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/12/14 19:42:20 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include<limits.h>

typedef struct s_list
{
	long int		value;
	struct s_list	*next;
}	t_list;

void		ft_bzero(void *s, size_t n);
void		*ft_memset(void *b, int c, size_t len);
size_t		ft_strlen(const char *str);
long long	ft_atoi(const char *str);
void		*ft_calloc(size_t count, size_t size);
char		*ft_itoa(int n);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
t_list		*ft_lstnew(long long value);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(int));
void		ft_lstiter(t_list *lst, void (*f)(int));
void		ft_lstclear(t_list **lst, void (*del)(int));
t_list		*ft_lstmap(t_list *lst, int (*f)(int), void (*del)(int));
char		*get_next_line(int fd);
char		*ft_strchr(const char *s, int c);
size_t		ft_strlen(const char *s);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_strdup(char *src);
int			ft_strcmp(const char *s1, const char*s2);
#endif
