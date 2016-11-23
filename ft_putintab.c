/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putintab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 15:44:36 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/22 15:44:37 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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
