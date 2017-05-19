/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:29:31 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/19 13:33:17 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/fillit.h"

void		ft_bzero(void *s, const size_t n)
{
	unsigned char	*temp;
	size_t			i;

	if (!s)
		return ;
	temp = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		temp[i] = '\0';
		i++;
	}
}

static void	*ft_memalloc(const size_t size)
{
	void	*rs;

	rs = malloc(size);
	if (!rs)
		return (NULL);
	ft_bzero(rs, size);
	return (rs);
}

char		*ft_strnew(const size_t size)
{
	return ((char*)ft_memalloc(size + 1));
}
