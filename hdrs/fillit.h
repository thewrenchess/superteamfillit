/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:02:32 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/19 13:33:28 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

typedef	struct		s_list
{
	size_t			buf_size;
	char			*str;
}					t_list;

typedef struct		s_corr
{
	size_t			a;
	size_t			b;
	size_t			c;
	size_t			d;
}					t_corr;

typedef struct		s_number_table
{
	size_t			tcount;
	int				i;
	int				hc;
	int				nlc;
	int				dc;
}					t_ntable;

# define USAGE		{ft_putstr("usage: ./fillit source_file\n"); return (1);}
# define ERROR		{ft_putstr("error\n"); return (1);}

void				ft_putchar(const char c);
void				ft_putstr(char const *s);
void				ft_bzero(void *s, const size_t n);
char				*ft_strnew(const size_t size);
t_list				*lst_create_elem(const size_t buf_size);
char				*ft_strcpy(char *dst, const char *src);
void				append_list(t_list **lst, char c, size_t i);
void				ft_read_in(const char *src, t_list *lst);
char				**ft_tabinit(const size_t count, const size_t len);
void				ft_filltab(const char *src, char **dst);
char				**ft_putintab(const char *s, const size_t count);
void				ft_freeinputlst(t_list **lst);
size_t				ft_findside(const size_t count);
char				*ft_makesqr(const size_t side);
t_corr				ft_movecorr(t_corr acor, size_t i);
t_corr				ft_iffits(char *sqr, char *shape, size_t i, size_t side);
void				ft_fillsqr(char *sqr, char *src, t_corr acor);
size_t				ft_deletelast(char *sqr, char *src);
char				*batcave(char **tab, char *sqr, size_t side);
size_t				ft_strlen(const char *s);
t_corr				ft_findcorr(const char *str);
void				ft_freetab(char ***tab);
size_t				ft_validate(char *str);
char				*ft_dot_strtrim(char *s);
void				ft_remove_nl(char *str);
size_t				ft_strlen(const char *str);
int					ft_strcmp(char *str1, char *str2);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				**ft_strsplit(char const *s, char c);

#endif
