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

typedef	struct	s_list
{
	size_t		buf_size;
	char		*str;
}				t_list;

# define USAGE	ft_putstr("usage: ./fillit source_file\n");
# define ERROR	ft_putstr("error\n");

void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_bzero(void *s, size_t n);
void			*ft_memalloc(size_t size);
char			*ft_strnew(size_t size);
t_list			*lst_create_elem(size_t buf_size);
char			*ft_strcpy(char *dst, const char *src);
void			append_list(t_list **lst, char c, size_t i);
void			ft_read_in(const char *src, t_list *lst);
char			**ft_tabinit(size_t count, size_t len);
void			ft_filltab(const char *src, char **dst);
char			**ft_putintab(const char *s, size_t count);
void			ft_freeinputlst(t_list *lst);
size_t			ft_findside(size_t count);
char			*ft_makesqr(size_t side);
void			ft_thinkhub(char **tab, size_t count);
void			ft_freetab(char **tab);

#endif
