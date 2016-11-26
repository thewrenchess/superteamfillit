/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makesqr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 20:09:34 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/22 20:09:35 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_makesqr(const size_t side)
{
	char	*rs;
	size_t	len;
	size_t	i;
	size_t	count;

	len = side * (side + 1);
	rs = ft_strnew(len);
	i = 0;
	count = 0;
	while (i < len)
	{
		if (count == side)
		{
			rs[i] = '\n';
			count = 0;
		}
		else
		{
			rs[i] = '.';
			count++;
		}
		i++;
	}
	return (rs);
}
