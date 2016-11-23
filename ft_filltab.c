/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filltab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 15:47:25 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/22 15:47:27 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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
