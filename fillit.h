/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:02:32 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/21 15:02:43 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

typedef	struct	s_tlist
{
	size_t		size;
	char		*str;
}				t_list;

# define USAGE	ft_putstr("fillit source_file\n");
# define ERROR	ft_putstr("error\n");

void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_bzero(void *s, size_t n);
void			*ft_memalloc(size_t size);
char			*ft_strnew(size_t size);
t_list			*lst_create_elem(size_t buf_size);
void			ft_read_in(const char *src, t_list *lst)；

#endif
