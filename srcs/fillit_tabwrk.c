/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_tabwrk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 20:05:38 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/19 13:30:50 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/fillit.h"

void	ft_filltab(const char *src, char **dst)
{
	size_t	i;
	size_t	x;
	size_t	y;

	i = 0;
	x = 0;
	y = 0;
	while (src[i])
	{
		if (src[i] == '\n' && src[i - 1] == '\n')
		{
			x++;
			y = 0;
		}
		else
		{
			if (src[i] == '#')
				dst[x][y] = x + 'A';
			else
				dst[x][y] = src[i];
			y++;
		}
		i++;
	}
}

void	ft_freetab(char ***tab)
{
	size_t	i;

	if (!*tab || !**tab)
		return ;
	i = 0;
	while ((*tab)[i])
	{
		free((*tab)[i]);
		i++;
	}
	free(*tab);
	*tab = NULL;
}

char	**ft_putintab(const char *s, const size_t count)
{
	char	**rs;
	size_t	len;

	len = 20;
	rs = ft_tabinit(count, len);
	if (!rs)
		return (NULL);
	ft_filltab(s, rs);
	return (rs);
}

char	**ft_tabinit(const size_t count, const size_t len)
{
	char	**rs;
	size_t	i;

	rs = (char**)malloc(sizeof(char*) * (count + 1));
	if (!rs)
		return (NULL);
	i = 0;
	while (i < count)
	{
		rs[i] = ft_strnew(len);
		if (!rs[i])
			return (NULL);
		i++;
	}
	rs[i] = (char*)malloc(sizeof(NULL));
	rs[i] = NULL;
	return (rs);
}
